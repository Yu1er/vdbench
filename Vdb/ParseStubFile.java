package Vdb;

/*
 * Copyright (c) 2000, 2017, Oracle and/or its affiliates. All rights reserved.
 */

/*
 * Author: Henk Vandenbergh.
 */

import java.io.File;
import java.util.ArrayList;

import Utils.Fget;
import Utils.Fput;
import Utils.OS_cmd;




/**
 * This class parses the Artis stub file with as objective the creation of the
 * PDM runfile.
 *
 * Maybe even run PDM start from here?
 *
 *
 * This is obsolete. PDM start/end is done by Artis.
 */
public class ParseStubFile
{
  private final static String c =
  "Copyright (c) 2000, 2017, Oracle and/or its affiliates. All rights reserved.";

  private static ArrayList <String> servers = new ArrayList(8);
  private static ArrayList <String> clients = new ArrayList(8);

  private static String build = "n/a";


  public static ArrayList <String> getServers()
  {
    return servers;
  }
  public static ArrayList <String> getClients()
  {
    return clients;
  }
  public static String getBuild()
  {
    return build;
  }

  public static boolean getInfo(String out)
  {
    String output = out; // "r:/junk/testlog.txt_stub";
    //output = "/net/qsestor01.us.oracle.com/export/artas/job_results_201701/ssuravaj.112802/config_collect/vdbench_poc4170-040_NFSv4_hdd-pool-0_proj8_fs8";


    /* We have now an Artis Vdbench output directory. */
    /* Back up two directories and look for testlog.txt: */
    String stub_dir = null;
    try
    {
      stub_dir = new File(output).getParentFile().getParentFile().getAbsolutePath();
      common.ptod("stub_dir: " + stub_dir);
    }
    catch (Exception e)
    {
      common.ptod("stub_dir: " + stub_dir);
      common.ptod("Exception trying to find 'testlog.txt' file for '%s'", output);
      return false;
    }


    Signal signal = new Signal(300);
    while (!signal.go())
    {
      OS_cmd ocmd = OS_cmd.execute("ls -l " + stub_dir);
      ocmd.printStderr();
      ocmd.printStdout();

      if (Fget.file_exists(stub_dir, "testlog.txt"))
        break;

      common.sleep_some(5000);
      common.where();
      continue;
    }


    if (!Fget.file_exists(stub_dir, "testlog.txt"))
    {
      common.ptod("stub_dir: " + stub_dir);
      common.ptod("Unable to find 'testlog.txt' file for '%s'", output);
      return false;
    }

    String[] lines = Fget.readFileToArray(stub_dir, "testlog.txt");

    // 2017-04-18 20:20:38,674 014464:084 INFO: osse_zfssa_mgmt=bzs32-04m,bzs32-05m
    for (String line : lines)
    {
      if (line.contains("osse_zfssa_mgmt="))
      {
        String[] split = line.trim().split(" +");
        if (split.length < 5)
          continue;
        String some = split[4].substring(split[4].indexOf("=") + 1);
        split = some.split(",+");
        for (String sp : split)
        {
          common.ptod("sp: " + sp);
          servers.add(sp);
        }
      }

      else if (line.contains("osse_client_mgmt="))
      {
        String[] split = line.trim().split(" +");
        if (split.length < 5)
          continue;
        String some = split[4].substring(split[4].indexOf("=") + 1);
        split = some.split(",+");
        for (String sp : split)
        {
          common.ptod("sp: " + sp);
          clients.add(sp);
        }
      }

    }

    /*
    Appliance Name: bzs32-04m
    Appliance Product: Oracle ZFS Storage ZS3-2
    Appliance Type: Sun ZFS Storage 7330
    Appliance Version: 2013.06.05.7.0,1-1.23
    First Installed: Tue May 24 2016 12:06:37 GMT+0000 (UTC)
    Last Updated: Thu Mar 23 2017 21:55:42 GMT+0000 (UTC)
    Last Booted: Mon Apr 17 2017 21:15:48 GMT+0000 (UTC)
    Appliance Serial Number: 6149720f-8130-694e-bcc6-94a0a7160a0c
    Chassis Serial Number: 1241FM2003
    Software Part Number: Oracle 000-0000-00
    Vendor Product ID: ORACLE-ZFS-ZS3-2
    Browser Name: aksh 1.0
    Browser Details: aksh
    HTTP Server: Apache/2.2.31 (Unix)
    SSL Version: OpenSSL 1.0.2j  26 Sep 2016
    Appliance Kit: ak/SUNW,maguroG2@2013.06.05.7.0,1-1.23
    Operating System: SunOS 5.11 ak/generic@2013.06.05.7.0,1-1.23 64-bit
    BIOS: American Megatrends Inc. 21000227 03/11/2016 
    */


    top:
    for (String srv : servers)
    {
      for (int i = 0; i < lines.length; i++)
      {
        String line = lines[i];
        if (line.contains("Appliance Name: " + srv))
        {
          for (i++; i < lines.length; i++)
          {
            line = lines[i];
            if (line.contains("BIOS:"))
              continue top;

            if (line.startsWith("Appliance Version: "))
              build = line.substring(19);
          }
        }
      }
    }

    common.ptod("build: " + build);

    if (servers.size() + clients.size() == 0)
    {
      common.ptod("Unable to find any clients or servers in '%' file", stub_dir);
      return false;
    }

    return true;
  }

}



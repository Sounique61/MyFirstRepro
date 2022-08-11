// **********************************************************
//  Names: BIMFileNames
// **********************************************************
//
//  Function:   Defines different filenames
//
// **********************************************************
//  AUTHOR:    Dr.Michael Ruff
//             Baltic Interim Management (BIM)
//
//  PROJECT:   Pluto
//  Language:    C++
// **********************************************************
//  Versions
//
//  Date        | Version   | Author       | Change
// **********************************************************
//  15.02.21    | 1.000     | M. Ruff      | Creation
// **********************************************************

#ifndef __BIM_FILENAMES_H
#define __BIM_FILENAMES_H
/*----------------------------------------------------------------------------*/
#include "BIMDefines.h"

/*----------------------------------------------------------------------------*/
#if BIM_TARGET == BIM_OS_RASPI_DEBIAN
  #define BIM_PROTOKOLL_TEST_FILE			  "//home//pi//Testoutput//BQSProtControlTest.txt"
  #define BIM_SLASH_DIR "//"

#elif BIM_TARGET == BIM_OS_CPU_LINUX
  #define BIM_SLASH_DIR "//"
  #define BIM_LOGFILE                       "//media//mruff//SWProjekte//SWTestResults//SimDaten//Logfile.txt"
  #define BIM_PROTOKOLL_TEST_FILE		        "//media//mruff//SWProjekte//SWTestResults//SimDaten//ProtControlTest.txt"
  #define BIM_PROTOKOLL_DISCRETE_PAR_FILE   "//media//mruff//SWProjekte//SWTestResults//SimDaten//BIMVecParhat.txt"
  #define BIM_PROTOKOLL_RLS_PAR_FILE        "//media//mruff//SWProjekte//SWTestResults//SimDaten//ProtRLSResult.txt"
  #define BIM_PROTOKOLL_RLS_VAL_FILE        "//media//mruff//SWProjekte//SWTestResults//SimDaten//ProtRLSValues.txt"
  #define BIM_PROTOKOLL_SIM_FILE_MEASURE 	  "//media//mruff//SWProjekte//SWTestResults//SimDaten//BIMProtYkMeasure.txt"
  #define BIM_PROTOKOLL_SIM_FILE_ESTIMATE	  "//media//mruff//SWProjekte//SWTestResults//SimDaten//BIMProtYkEstimate.txt"
  #define BIM_PROTOKOLL_SIM_FILE_COMPARE	  "//media//mruff//SWProjekte//SWTestResults//SimDaten//BIMProtCompare.txt"
  #define BIM_PROTOKOLL_SIM_FILE_NEWTON     "//media//mruff//SWProjekte//SWTestResults//SimDaten//Newton//BIMTestNewton.txt"
#else
  #define BIM_PROTOKOLL_TEST_FILE		        "D:\\SWProjekte\\SWTestResults\\SimDaten\\ProtControlTest.txt"
  #define BIM_PROTOKOLL_SIM_FILE_MEASURE 	  "D:\\SWProjekte\\SWTestResults\\SimDaten\\BQSProtYkMeasure.txt"
  #define BIM_PROTOKOLL_SIM_FILE_ESTIMATE	  "D:\\SWProjekte\\SWTestResults\\SimDaten\\BQSProtYkEstimate.txt"
  #define BIM_PROTOKOLL_SIM_FILE_COMPARE	  "D:\\SWProjekte\\SWTestResults\\SimDaten\\BQSProtCompare.txt"
  #define BIM_PROTOKOLL_DISCRETE_PAR_FILE   "D:\\SWProjekte\\SWTestResults\\SimDaten\\BQSVecParhat.txt"
#endif


/*----------------------------------------------------------------------------*/
#endif
//BIM_FILENAMES_H
/*----------------------------------------------------------------------------*/

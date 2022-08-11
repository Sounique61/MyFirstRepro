// **********************************************************
//  Names: BIMFileOperation
// **********************************************************
//
//  Function:   File operations
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
//  04.01.03    | 1.000     | M. Ruff      | Creation
//  02.03.05    | 1.100     | M. Ruff      | Add search_file_parameter_FB
//  01.01.17    | 1.101     | M. Ruff      | Compiling with Codeblocks
//  14.01.17    | 1.102     | M. Ruff      | Added count_lines_of_File
//  14.01.17    | 1.103     | M. Ruff      | Added read_line_of_File
//  08.10.17    | 1.103     | M. Ruff      | renamed
//  14.08.18    | 1.104     | M. Ruff      | Documented
//  15.02.21    | 2.000     | M. Ruff      | Reworked in Pluto
//  16.01.22    | 2.100     | M. Ruff      | Added BIM_get_measure_value
// **********************************************************

#ifndef __BIM_FILEOPERATION_H
#define __BIM_FILEOPERATION_H
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BIMDefines.h"
#include "BIMFileNames.h"

#define BIM_NEW_LOG   0
#define BIM_ADD_LOG   1

/*----------------------------------------------------------------------------*/
int BIM_logfile(int nOperation, char *ptrLogString);
int BIM_count_lines_of_file (char *ptrFileName);
int BIM_read_line_of_file (int nLine, char *ptrFileName, char *ptrLine);
int BIM_file_copy (char *ptrSourceFileName, char *ptrTargetFileName);
int BIM_init_protocol_file();
int BIM_write_protocol(double fxValue, double fyValue);
int BIM_get_measure_value(double* fMeasureU_k, double* fMeasureY_k, int nTime_k);
#endif
//__BIM_FILEOPERATION_H
/*----------------------------------------------------------------------------*/

//**********************************************************
//  Names: BIMCreateSimData.h
//**********************************************************
//
//  Purpose: Creating Simulation Data
//
//**********************************************************
//  AUTHOR:    Dr.Michael Ruff
//
//  PROJECT:   ControlTest
//  Language:    C++
//**********************************************************
//  Versions
//
//  Date     | Version | Author       | Change
//**********************************************************
// 12.08.18  | 1.000   | M. Ruff      | Creation
// 14.08.18  | 1.104   | M. Ruff      | Documented
// 16.01.22  | 2.000   | M. Ruff      | Renamed
//           |         |              |
//**********************************************************


#ifndef __BIM_CREATESIMDATA_H
#define __BIM_CREATESIMDATA_H
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include "BQSVector.h"
/*----------------------------------------------------------------------------*/
#define BIM_INPUT_SIG_STEP            1
#define BIM_INPUT_SIG_PRBS            2
#define BIM_INPUT_SIG_RAMP            3
#define BIM_INPUT_SIG_MEASURE        10
/*----------------------------------------------------------------------------*/
int BIM_difference_equation( BQS_Vector parVec, int nTypeInputSignal, double fInputAmplitude);
#endif
/*----------------------------------------------------------------------------*/

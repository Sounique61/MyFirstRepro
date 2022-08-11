//**********************************************************
//  Names: BIMTools.h
//**********************************************************
//
//  Purpose: Header for several help functions
//
//**********************************************************
//  AUTHOR:    Dr.Michael Ruff
//
//  PROJECT:   PLUTO
//  Language:    C++
//**********************************************************
//  Versions
//
//  Date     | Version | Author       | Change
//**********************************************************
//  19.02.21 | 1.000   | M. Ruff      | Creation
//           |         |              |
//**********************************************************


#ifndef _BIM_Tools_h
#define _BIM_Tools_h
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>


//... Swap
void Swap(int *x, int *y);
void Swap( unsigned int *x, unsigned int *y);
void Swap(short *x,short *y);
void Swap(short **x,short **y);
void Swap(double *x,double *y);
void Swap(double **x,double **y);
void itoa (int nValue, char *ptrStr, int nbase );
int BIM_string_length(char *ptrString);

#endif



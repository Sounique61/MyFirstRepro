//**********************************************************
//  Names: BIMDefines.h
//**********************************************************
//
//  Purpose: Various global defines
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
//  18.01.00 | 1.000   | M. Ruff      | Creation
//  14.08.18 | 1.001   | M. Ruff      | Documented
//  04.09.20 | 1.100   | M. Ruff      | Added BIM_PI etc. for FFT
//  15.02.21 | 1.200   | M. Ruff      | Integrated into Pluto
//           |         |              |
//**********************************************************

#ifndef __BIM_DEFINES_H
#define __BIM_DEFINES_H
/*----------------------------------------------------------------------------*/
/*                    Defines for BIM                                         */
/*----------------------------------------------------------------------------*/
#define BIM_OS_RASPI_DEBIAN     0
#define BIM_OS_CPU_LINUX        1
#define BIM_OS_CPU_WINDOWS      10
#define BIM_TARGET              BIM_OS_CPU_LINUX
#define BIM_INFO                1
#define BIM_QUESTION            2
#define BIM_RETURN_OK		        0
#define BIM_RETURN_FALSE	      -1
#define BIM_ALERT               -99
#define BIM_LESS_MEMORY         -100
#define BIM_FILE_ERROR          -1000
#define BIM_CALC_ERROR          -2000
#define BIM_MAXCHARS		        255
#define BIM_MAX_MEASURE_VALUE   200
#define BIM_MODULO_RANDOM		    11
#define BIM_HUNDRED_PERCENTAGE  100

#define BIM_CHMOD_RWX           0777

#define BIM_EULER               2.7182818284590452353602874713526625
#define BIM_PI                  3.1415926535897932384626433832795     // PI for sine/cos calculations
#define BIM_TWOPI               6.283185307179586476925286766559      // 2*PI for sine/cos calculations
#define BIM_DEG2RAD             0.017453292519943295769236907684886   // Degrees to Radians factor
#define BIM_RAD2DEG             57.295779513082320876798154814105     // Radians to Degrees factor
#define BIM_LOG10_2             0.30102999566398119521373889472449    // Log10 of 2
#define BIM_LOG10_2_INV         3.3219280948873623478703194294948     // 1/Log10(2)

typedef short INTEGER;
typedef double REAL;

#endif
// __BIM_DEFINES_H



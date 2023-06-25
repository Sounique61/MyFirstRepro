#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "BQSComplex.h"
#include "version.h"

int main() {
  using namespace AutoVersion;
  char *ptrStrVersion;
  int size = 0;
	int *array;
	int newSize;
	BQS_Complex zComplex1, zComplex2, zComplex3;
	int i;
	float x, y;
	float zPhi, zAbsolute;

	ptrStrVersion = (char *) malloc (64);
	strcpy(ptrStrVersion,FULLVERSION_STRING);
	printf ("Test RaspBerry Pi 3\n Version : %s Build %4d\n\n",ptrStrVersion,BUILDS_COUNT);
	free(ptrStrVersion);
	printf("Realteil z1 =  ");
	scanf("%f", &x);
	printf("Imaginärteil z1 =  ");
	scanf("%f", &y);

	printf("Eingabe : z1 = %5.3f + j*%5.3f\n",x,y);
	zComplex1.setComplex(x,y);
	zAbsolute = zComplex1.getComplexRadius();
	zPhi = zComplex1.getComplexPhi();
	printf("z1 = %5.3f * e^j*%f5.3\n",zAbsolute,zPhi);
	zComplex2.setComplex(-3.0,8.1);
	printf("z2 = %5.3f + j*%5.3f\n",zComplex2.getComplexReal(),zComplex2.getComplexImag());
	zAbsolute = zComplex2.getComplexRadius();
	zPhi = zComplex2.getComplexPhi();
	printf("z2 = %5.3f * e^j*%f5.3\n",zAbsolute,zPhi);
	zComplex3 = zComplex1 + zComplex2;
	x = zComplex3.getComplexReal();
	y = zComplex3.getComplexImag();
	printf("Resultat Addition : z3 = %5.3f + j*%5.3f\n",x,y);
	zAbsolute = zComplex3.getComplexRadius();
	zPhi = zComplex3.getComplexPhi();
	printf("z3 = %5.3f * e^j*%f5.3\n",zAbsolute,zPhi);
	zComplex3 = zComplex1 - zComplex2;
	x = zComplex3.getComplexReal();
	y = zComplex3.getComplexImag();
	printf("Resultat Subtraktion : z3 = %5.3f + j*%5.3f\n",x,y);
	zAbsolute = zComplex3.getComplexRadius();
	zPhi = zComplex3.getComplexPhi();
	printf("z3 = %5.3f * e^j*%f5.3\n",zAbsolute,zPhi);
	zComplex3 = zComplex1 * zComplex2;
	x = zComplex3.getComplexReal();
	y = zComplex3.getComplexImag();
	printf("Resultat Multiplikation : z3 = %5.3f + j*%5.3f\n",x,y);
	zAbsolute = zComplex3.getComplexRadius();
	zPhi = zComplex3.getComplexPhi();
	printf("z3 = %5.3f * e^j*%f5.3\n",zAbsolute,zPhi);
	zComplex3.setConjugateComplex(zComplex2);
	x = zComplex3.getComplexReal();
	y = zComplex3.getComplexImag();
	printf("Konjugiert komplexe Zahl : z3 = %5.3f + j*%5.3f\n",x,y);
	zAbsolute = zComplex3.getComplexRadius();
	zPhi = zComplex3.getComplexPhi();
	printf("z3 = %5.3f * e^j*%f5.3\n",zAbsolute,zPhi);
	zComplex3 = zComplex1 / zComplex2;
	x = zComplex3.getComplexReal();
	y = zComplex3.getComplexImag();
	printf("Resultat Division : z3 = %5.3f + j*%5.3f\n",x,y);
	zAbsolute = zComplex3.getComplexRadius();
	zPhi = zComplex3.getComplexPhi();
	printf("z3 = %5.3f * e^j*%f5.3\n",zAbsolute,zPhi);
	return 0;
}

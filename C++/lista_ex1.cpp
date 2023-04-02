#include <stdio.h>
 
 
 int main (){
 	
 	
 	int x = 10;
 	double y = 20.5;
 	char z ='a';
 	
 	int *pX = &x;
 	double *pY = &y;
 	char *pZ =  &z;
 	
 	int 
 	double
 	char
 	
 	printf("Endereco x = %i - Valor de x antes %i \n", pX, *pX);
 	printf("Endereco y = %i - Valor de y antes %f \n", pY, *pY);
 	printf("Endereco z = %i - Valor de z antes %c \n", pZ, *pZ);
 	
 	/*printf("Endereco x = %i - Valor de x depois %i \n", px, *px);
 	printf("Endereco y = %i - Valor de y depois %f \n", py, *py);
 	printf("Endereco z = %i - Valor de z depois %c \n", pz, *pz);*/
 	getchar();
 	return 0;
 }

#include <stdio.h>

 int main(){
 	
 	int A= 50;
 	int B=30;
 	
 	int *pA = &A;
 	int *pB = &B;
 	
 	if(&A> &B){
 		printf( "O endereco maior e' %i", pA);
	 }
	 if(&B>&A){
	 	printf("O endereco maior e' %i", pB);
	 }
	 return 0;
 }

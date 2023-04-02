int main(){
	
	int A;
	int B;
	
	printf("Digite o valor de A ");
	scanf("%i", &A);
	
	printf("Digite o valor de B ");
	scanf("%i", &B);
	
	int *pA = &A;
	int *pB = &B;
	
	if(*pA>*pB){
		printf("O maior endereco -- A = %i", pA);
	}
	if (*pB>*pA){
		printf("O maior endereço -- B = %i", pB);
	}
	return 0;
	
}

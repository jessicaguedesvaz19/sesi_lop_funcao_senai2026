#include<stdio.h>
#include<windows.h>

int soma(int a, int b) {
    return a + b;
}
int subtracao( int a, int b) {
	return a - b;
}
int divisao(int a, int b) {
	if( b == 0){
		return 0;
	}else{
	return a / b;	
	}
}
int multiplicacao(int a, int b) {
    return a * b;
}

int main() {
	
	SetConsoleOutputCP(CP_UTF8);
	int a,b, resp, resultado;
	
	printf("Insira dois números: ");
	scanf("%d" "%d",&a,&b);
	printf("Escolha a operação desejada:\n (1)Soma, (2)Subtração, (3)Divisão, (4)Multiplicação\n");
	scanf("%d", &resp);
	
	if(resp == 1){
	    int resultado = soma(a,b);
        printf("A soma de %d + %d = %d\n", a,b,resultado);	
	}
	if(resp == 2){
	    int resultado = subtracao(a,b);
        printf("A subtração de %d - %d = %d\n", a,b,resultado);	
	}
	if(resp == 3){
	    int resultado = divisao(a,b);
        printf("A divisão de %d / %d = %d\n", a,b,resultado);	
	}
	if(resp == 4){
	    int resultado = multiplicacao(a,b);
        printf("A multiplicação de %d * %d = %d\n", a,b,resultado);	
	}
    
    return 0;
}
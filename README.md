# Lista de exercícios - Funções (Linguagem C)

* LOP - Aula 13

# Funções 

 Funções são blocos de código reutilizáveis que realizam uma tarefa específica. Elas permitem que você escreva código mais organizado, modular e fácil de manter. Em C, as funções são definidas com um nome, um tipo de retorno e uma lista de parâmetros (opcional).

# Tecnologias 

- Linguagem C
- DevC++

# Como testar 

- Clone o repositório
- Abra o arquivo .c com o DevC++
- Pressione F11 para compilar e executar

# Desafios

## Desafio 1:

Escreva um programa com 4 funções que realizem as operações básicas de soma, subtração, multiplicação e divisão. O programa deve solicitar ao usuário dois números em seguida exibir um menu para escolher a operação desejada e mostrar o resultado.

```c
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
```

## Desafio 2:

Crie um programa que contenha uma função para calcular o fatorial de um número. O programa deve solicitar ao usuário um número inteiro e exibir o resultado do fatorial.

```c
#include<stdio.h>
#include<windows.h>

int fatoracao(){
	int fatorial, n, f;
	for(int i = 1; f >= n; i++){
		f*= i;
	}
	return fatorial;
}

int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	int fatorial, n, i, resultado;
	
	printf("Informe um número inteiro: ");
	scanf("%d", &n);
	
	resultado = fatorial;
	printf("O fatorial é: %d", i);
	
	getch();
}
```

## Desafio 3:

Escreva um programa que contenha uma função para verificar se um número é primo. O programa deve solicitar ao usuário um número inteiro e exibir se ele é primo ou não.

```c
#include <stdio.h>
#include <windows.h>

int primo(n){
	int i;
	if(n <= 1){
		return 0;
	}
	for(i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}


void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Digite um número para descobrir se ele é primo.\n");
	scanf("%d", &n);
	if(primo(n) != 0){
		printf("Seu número é primo.");
	}else{
		printf("Seu número não é primo.");
	}
	
	getch();
}
```

## Desafio 4:

Crie um programa que contenha uma função para calcular a média de um array de números. O programa deve solicitar ao usuário o tamanho do array, os elementos do array e exibir a média dos números.

```c
#include <stdio.h>
#include <windows.h>
int media(num){
	int val, med, soma = 0;
	for(int i = 0; i<num; i++){
		printf("Digite o %dº valor:", i+1);
		scanf("%d", &val);
		soma += val;
	}
	med = soma / num;
	return med;
}


void main(){
	SetConsoleOutputCP(CP_UTF8);
	int num;
	printf("Digite quantos valores estarão em sua média:\n");
	scanf("%d", &num);
	printf("Sua média é %d", media(num));
	getch();
}
```
## Desafio 5:

Escreva um programa que contenha uma função para ordenar um array de números em ordem crescente. O programa deve solicitar ao usuário o tamanho do array, os elementos do array e exibir o array ordenado.

```c
#include <stdio.h>
#include <windows.h>
void crescente(int num){
	int temp, vet[num];
	for(int i = 0; i < num; i++){
		printf("Digite um valor:");
		scanf(" %d", &vet[i]);
	}
	for(int i = 0; i<num; i++){
		for(int j = 0; j<num; j++){
			if(vet[i]<vet[j]){
				temp = vet[j];
				vet[j] = vet[i];
				vet[i] = temp;
			}
		}
	}
	for(int i = 0; i<num; i++){
		printf(" %d", vet[i]);
	}
}
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int num;
	printf("Quantos valores seu vetor irá ter?\n");
	scanf(" %d", &num);
	fflush(stdin);
	crescente(num);
	getch();
}
```

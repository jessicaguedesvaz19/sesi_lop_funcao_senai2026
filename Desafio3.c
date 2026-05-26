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
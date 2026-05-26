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
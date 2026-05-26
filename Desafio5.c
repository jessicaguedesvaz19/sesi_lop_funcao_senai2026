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
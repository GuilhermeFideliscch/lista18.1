#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *arquivo;
	arquivo = fopen("meuarquivo.txt","r");
	if(arquivo == NULL){
		printf("Arquivo nao existe");
	}
	char linha[100];
	while(fgets(linha, sizeof(linha),arquivo) != NULL){
		printf("%s",linha);
	}
	fclose(arquivo);
	return 0;	
}

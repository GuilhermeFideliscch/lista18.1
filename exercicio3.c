#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *arquivo;
	char arqv[100];
	printf("Digite o nome do arquivo\n");
	gets(arqv);
	arquivo = fopen(arqv,"r");
	if(arquivo == NULL){
		printf("O arquivo nao existe");
	}
	else
	{
		printf("O arquivo existe");
	}
	fclose(arquivo);
	return 0;	
}

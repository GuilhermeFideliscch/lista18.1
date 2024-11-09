#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE*arquivo;
	arquivo = fopen("meuarquivo.txt", "w");
	fprintf(arquivo,"Hello, Mundo!");
	fclose(arquivo);
	return 0;
}

//*************************************
//*          ALOCACAO DINAMICA        *
//* Autora: Letícia Machado           *
//* Aula: Laboratório de Algoritmos 2 *
//* Data: 16/09/2016                  *
//* Antonio Meneghetti Faculdade      *
//*************************************

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	//cria um ponteiro para o bloco de memoria alocado
	char memoria_alocada;
	//aloca  a quantidade de memoria solicitada (50xchar)
	//e inicializa o ponteiro com a posicao da memoria
	memoria_alocada = malloc (50*sizeof(char));
	//se o ponteiro foi inicializado com o valor nulo
	if(memoria_alocada == NULL)
	{
		//exibe a mensagem de erro
		printf("nao foi possivel alocar a memoria desejada!\n");
	}
	//se o ponteiro nao for nulo
	else
	{
		//transfere a mensagem para a memoria alocada
		strcpy(memoria_alocada, "esta e a melhor aula do mundo!\n");
	}
	//exibe o conteudo da memoria alocada
	printf("o conteudo da memoria alocada eh: %s\n", memoria_alocada);
	
	//libera a memoria alocada
	free(memoria_alocada);
	//retorna 0
	return 0;
}

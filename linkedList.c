#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"



/*Starts list*/
void startList(list *l)
{
	l->first = NULL;
	l->last = l->first; 
	l->lenght = 0;
}

/*If the list is empty add at the beginning, if the list is not empty add at the end*/
void push(int value, list *l)
{
	node *aux;
	aux = (node*)malloc(sizeof(node));
	if(aux == NULL){
		printf("Erro de alocação de memória\n");
		return;
	}
	aux->value = value;
	if(l->first == NULL){
		aux->next = NULL; 
		l->first = aux;
		l->last = l->first;
	}else{
		aux->next = NULL; 
		l->last->next = aux;
		l->last = aux;
		l->lenght++;
	}
}



/*Remove first element from list*/
void pop(list *l)
{
	if(l->first == 0){
		printf("Lista vazia\n");
	}else{
		node *aux;
		aux = l->first->next;
		free(l->first);
		l->first = aux;
	}

}

/*Printing the complete list*/
void printList(list *l)
{
	if(l->first == NULL){
		printf("Lista Vazia\n");
	}else{
		node *aux;
		aux = l->first;
		while(aux->next != NULL){
			printf("%i -> ", aux->value);
			aux = aux->next;
		}
		if(aux->next == NULL){
			printf("%i\n", aux->value);
		}
	}
}

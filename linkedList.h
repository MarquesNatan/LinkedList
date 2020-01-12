#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/*node structure definition*/
typedef struct node
{
	int value; 
	struct node *next;
}node; 
/*list structure definition*/
typedef struct list
{
	node *first; 
	node *last; 
	int lenght;
}list;


/*List Management Functions : Inbound and outbound order: FIFO (first in, first out)*/
void startList(list *l);
void push(int value, list *l); 
void pop(list *l);

void printList(list *l);


 

#endif
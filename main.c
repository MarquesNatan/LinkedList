#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"



int main(){
	list l;
	int op = 0;
	startList(&l);

	/*
	startList(&l);
	push(10, &l);
	push(20, &l);
	printList(&l);
	pop(&l);
	printList(&l);
	*/

	menu:
	printf("Informe uma opcao\n");
	printf("|-------------------|\n");
	printf("|<0> Insert         |\n");
	printf("|<1> Remove         |\n");
	printf("|<2> Show list      |\n");
	printf("|<3> Sair           |\n");
	printf("|___________________|\n");
	scanf("%i", &op);
	switch(op){
		case 0:{
			int value = 0;
			printf("Enter the value: ");
			scanf("%i", &value);
			push(value, &l);
			printf("\033[2J"); 
			goto menu;

		}case 1:{
			char value;
			printf("Confirm removal? Y/N");
			scanf("%c", &value);
			if(value == 'Y' || value == 'y' ){
				pop(&l);
			}else{
				goto menu;
			}
			printf("\033[2J"); 
			goto menu;


		}case 2:{
			printList(&l);
			getchar();
			printf("\033[2J"); 
			goto menu;

		}case 3:{
			system("exit");
		}default:{
			printf("Informe uma opcao valida!\n");
			getchar();
			system("clear");
		}
	}



	return 0;
}





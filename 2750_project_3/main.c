
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {

Node * tail = NULL;
Node * head = NULL;

int input, value;

do {
input = 7;

printf("Enter the interger to select:\n");
printf("\t1. Insert Head\n");
printf("\t2. Insert tail\n");
printf("\t3. Delete Node\n");
printf("\t4. Delete List\n");
printf("\t5. Show List\n");
printf("\t6. Exit\n");

scanf("%d",&input);
if(input > 6 || input < 1) {
input = 7;
}

switch(input) {

case 7 :
printf("Error: interger between 1 and 6 must be entered\n");
break;

case 1 :
printf("Enter an integer to append to head: ");
scanf("%d",&value);
head = List_insert(head, value);
break;

case 2 :
printf("Enter an integer to append to tail: ");
scanf("%d",&value);
tail = List_insert_last(head, value);
break;

case 3 :
printf("Enter the value to remove: ");
scanf("%d",&value);
head = List_delete(head, value);
break;
  
case 4 :
printf("Deleting all nodes now.\n");
List_destroy(head);
break;

case 5 :
List_print(head);
break;

case 6 :
printf("Exiting\n");
break;
}

}while(input != 6);
}
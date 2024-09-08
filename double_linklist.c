#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *pre;
	int data;
	struct node *next;
};


typedef struct node list;
list *start = NULL;

void crited_list(void){
	list *ptr ,*new_node;
	int num;
	printf("\n ENTER (00) TO EXIT");
	printf("\n ENTER THE ELEMENT : ");
	scanf("%d",&num);
	while (num != 00){
		if (start == NULL){
			new_node = (list *)malloc(sizeof(list));
			new_node -> pre = NULL;
			new_node -> data = num;
			new_node -> next = NULL;
			start = new_node;
		}else{
			ptr = start;
			new_node = (list *)malloc(sizeof(list));
			new_node ->data =num;
			while(ptr -> next != NULL){
				ptr = ptr -> next;
				
			}
			ptr -> next = new_node;
			new_node -> pre = ptr;
			new_node -> next = NULL;
		}
	printf("\n ENTER THE ELEMENT : ");
	scanf("%d",&num);
	}
}

void display_list(void){
	list *ptr;
	ptr = start;
	printf("\nNULL <-> ");
	while(ptr!= NULL){
		printf("%d <-> ",ptr->data);
		ptr = ptr -> next;
	}
	printf("NULL\n");
}

void incertend_list(void){
	list *ptr , *new_node;
	int num;
	printf("\n ENTER THE DATA : ");
	scanf("%d",&num);
	new_node = (list *)malloc(sizeof(list));
	new_node ->data= num;
	ptr = start;
	while(ptr ->next != NULL){
		ptr = ptr ->next;
	}
	ptr->next = new_node;
	new_node ->pre = ptr;
	new_node ->next = NULL;

}

void insertbefore_list(void){
	list  *new_node;
	int num;
	printf("\n ENTER THE DATA : ");
	scanf("%d",&num);
	new_node = (list *)malloc(sizeof(list));
	new_node ->data = num;
	start -> pre = new_node;
	new_node ->next = start;
	new_node ->pre = NULL;
	start = new_node;
}

void insertanybefore_list(void){
	list *ptr, *new_node;
	int num, val;
	printf("\n ENTER THE DATA : ");
	scanf("%d",&num);
	printf("\n ENTER THE NODE VALU FOR BEFORE INSERTED : ");
	scanf("%d", &val);
	new_node = (list*)malloc(sizeof(list));
	new_node ->data = num;
	ptr = start;
	while(ptr->data != val){
		ptr = ptr -> next;
	}
	new_node -> pre = ptr ->pre;
	new_node -> next = ptr;
	ptr ->pre->next = new_node;
	ptr -> pre = new_node;
	ptr = start;
}

void insertanyafter_list(void){
	list *ptr, *new_node;
	int num, val;
	printf("\n ENTER THE DATA : ");
	scanf("%d",&num);
	printf("\n ENTER THE NODE VALU FOR AFTER INSERTED : ");
	scanf("%d",&val);
	new_node = (list*)malloc(sizeof(list));
	new_node -> data = num;
	ptr = start;
	while(ptr-> data != val){
		ptr = ptr ->next;
	}
	new_node->pre = ptr;
	new_node ->next = ptr ->next;
	ptr ->next->pre = new_node;
	ptr->next = new_node;

}

void deletebefore_list(void){
	list *ptr ;
	ptr = start;
	start = start ->next;
	start->pre = NULL;
	free(ptr);
}

void deleateend_list(void){
	list *ptr;
	ptr = start;
	while( ptr ->next != NULL){
		ptr = ptr ->next;
	}
    ptr -> pre -> next = NULL;
	free(ptr);
}

void deleteanyafter_list(void){
	list *ptr , *temp;
	int num;
	printf("\n ENTER THE NODE VALU AFTER DELETE THE NODE : ");
	scanf("%d",&num);
	ptr = start;
	while(ptr->data != num){
		ptr = ptr -> next;
	}
	if(ptr->next == NULL){
       printf("\n NO NODE TO DELETE AFTER %d.\n",num);
	   return;
	}
	temp = ptr->next;
	ptr -> next = temp ->next;
	if(temp->next != NULL){
		temp->next->pre = ptr;
	}
	
	
	free(temp);
}

void deleteanybefore_list(void){
	list *ptr, *temp;
	int num;
	printf("\n ENTER THE NODE DATA BEFORE DELETE NODE : ");
	scanf("%d",&num);
	ptr = start;
	while(ptr->data != num){
		ptr = ptr -> next;
	}
	temp = ptr->pre;
	if(temp == start){
		deletebefore_list();
	}else{
		ptr->pre = temp ->pre;
		temp ->pre->next = ptr ;
	}
	free(temp);
}

 
int main(){
	int opp;
	do{
		printf("\n ***** MAIN FUNTION ***** \n");
		printf("\n 1: CRITED NODE LIST");
		printf("\n 2: DISPLAY NODE LIST");
		printf("\n 3: INSERT BEFORE NODE");
		printf("\n 4: INSERT END NODE");
		printf("\n 5: INSERT BEFORE ANY POSITION NODE");
		printf("\n 6: INSERT AFTER ANY POSITION NODE");
		printf("\n 7: DELETE BEFORE NODE");
		printf("\n 8: DELETE END NODE");
		printf("\n 9: DELETE BEFORE ANY POSITION NODE");
		printf("\n 10: DELETE AFTER ANY POSITION NODE");
		printf("\n 11: DELETE NODE");
		printf("\n ***** START ***** \n");
	    printf("\n ENTER YOUR OPTION : ");
	    scanf("%d",&opp);			
	    
	    switch(opp){
	    	case 1:
	    		crited_list();
	    		break;
	    	case 2:
	    		display_list();
	    		break; 
			case 3:
				insertbefore_list();
				display_list();
				break;
			case 4:
			    incertend_list();
				display_list();
				break;
			case 5:
			    insertanybefore_list();
				display_list();
				break;
			case 6:
			    insertanyafter_list();
				display_list();
				break;
			case 7:
			    deletebefore_list();
				display_list();
				break;
			case 8:
				deleateend_list();
				display_list();
				break;
			case 9:
			    deleteanybefore_list();
				display_list();
				break;
			case 10:
			    deleteanyafter_list();
				display_list();
				break;				
		}
	}while(opp <= 11);
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
//structure define
struct node {
    int data;
    struct node *link;
};
//typedef and change struct name
typedef struct node list;
list *start = NULL;
//funtions
list *create_list(void)
{
    list *new_node, *ptr;
    int num;
    
    printf("\n ENTER (00) TO END");
    printf("\n ENTER THE DATA: ");
    scanf("%d", &num);
    
    while(num != 00) {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->link = NULL;
        
        if(start == NULL) {
            start = new_node;
        } else {
            ptr = start;
            while(ptr->link != NULL) {
                ptr = ptr->link;
            }
            ptr->link = new_node;
        }
        
        printf("\n ENTER THE DATA: ");
        scanf("%d", &num);
    }
}
list *display_list(void)
{
	  list *ptr;
    ptr = start;
    printf("\n H -> ");
    
    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;  
    }
    
    printf("NULL\n");

}
list *insert_list(void)
{
	  //chake the size of link list
	int pos, count =0;
	list *temp,*temp1;
	temp = start;
	
	//count size is linked list
	while(temp != NULL){
		count++;
		temp = temp -> link;
	}
	
	printf("\n ENTER POSITION TO INSERT : ");
	scanf("%d",&pos);
	
	
	if(pos< 1 || pos >count+1){
	printf("\n INVALID POSITION ");
}else{
	temp = (list *)malloc(sizeof(list));
	printf("\n ENTER THE VALU : ");
	scanf("%d",&temp -> data);
	
	if(pos == 1){
		temp->link = start;
		start = temp;
		printf("ANY POSITION INSERTION SUSSESFULL");
	}else{
		temp1 = start;
		for(int i=1 ; i<pos-1 ; i++){
		temp1 = temp1 -> link;
	}
		temp->link = temp1->link;
		temp1->link= temp;
		printf("INSERTION AT POSITION %d SUCCESSFUL\n", pos);
	}
}
}
list *delet_list(void)
{
	int pos,count =0; 
	list *temp, *temp1;
	temp = start;
	
	while(temp != NULL){
		count++;
		temp = temp->link;
	}
	printf("ENTER THE POSITION : ");
	scanf("%d",&pos);
	
	if(pos<1 || pos>count){
		printf("\n INVALID POSITION");
	}else{
		if(pos == 1){
			temp = start;
			start = start->link;
			free(temp);
			printf("\nDELITATION SESSFULY");
		}else{
			temp = start;
			for(int i=1 ; i<pos-1 ; i++){
				temp = temp->link;
			}
			temp1 = temp->link;
			temp->link = temp1->link;
			free(temp1);
			printf("\nDELITATION SESSFULY");
		}
	}
}
//main funtion
int main() {
    int option;
    do {
        printf(" ***** MAIN MENU ***** ");
        printf("\n 1: CREATE A LIST");
        printf("\n 2: DISPLAY A LIST");
        printf("\n 3: INSERT ANY POSITION");
        printf("\n 4: DELET ANY POSITION");
        printf("\n 5: EXIT");
        printf("\n ***** START ***** ");
        printf("\n ENTER YOUR OPTION: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1:
                create_list();
                break;
            case 2:
                display_list();
                break;
            case 3:
            	insert_list();
            	display_list();
            	break;
            case 4:
            	delet_list();
            	display_list();
            	break;
        }
    } while(option != 5);
    
    return 0;
}
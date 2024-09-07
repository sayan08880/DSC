#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

typedef struct node list;
list *start = NULL;

void create_node(void) {
    list *new_node, *ptr;
    int num;
    printf("\n ENTER (00) TO EXIT");
    printf("\n ENTER THE NUMBER : ");
    scanf("%d", &num);

    while(num != 0) {
        new_node = (list *)malloc(sizeof(list));
        new_node->data = num;
        new_node->link = NULL;

        if (start == NULL) {
            start = new_node;
        } else {
            ptr = start;
            while(ptr->link != NULL) {
                ptr = ptr->link;
            }
            ptr->link = new_node;
        }
        printf("\n ENTER THE NUMBER : ");
        scanf("%d", &num);
    }
}

void display_node(void) {
    list *ptr = start;
    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");
}

void beginning_node(void) {
    list *new_node;
    int num;
    printf("\n ENTER THE NUMBER : ");
    scanf("%d", &num);
    new_node = (list *)malloc(sizeof(list));
    new_node->data = num;
    new_node->link = start;
    start = new_node;
}

void end_node(void) {
    list *new_node, *ptr;
    int num;
    printf("\n ENTER THE NUMBER : ");
    scanf("%d", &num);
    new_node = (list *)malloc(sizeof(list));
    new_node->data = num;
    new_node->link = NULL;

    if (start == NULL) {
        start = new_node;
    } else {
        ptr = start;
        while(ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = new_node;
    }
}

void before_node(void) {
    list *new_node, *ptr, *ptr1;
    int num, val;
    printf("\n ENTER THE VALUE TO INSERT : ");
    scanf("%d", &num);
    printf("\n ENTER THE VALUE BEFORE WHICH TO INSERT : ");
    scanf("%d", &val);
    new_node = (list *)malloc(sizeof(list));
    new_node->data = num;

    if (start == NULL) {
        printf("\n LIST IS EMPTY\n");
        return;
    }
    if (start->data == val) {
        new_node->link = start;
        start = new_node;
        return;
    }

    ptr = start;
    while(ptr != NULL && ptr->data != val) {
        ptr1 = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL) {
        printf("\n VALUE NOT FOUND\n");
    } else {
        ptr1->link = new_node;
        new_node->link = ptr;
    }
}

void after_node(void) {
    list *new_node, *ptr;
    int num, val;
    printf("\n ENTER THE VALUE TO INSERT : ");
    scanf("%d", &num);
    printf("\n ENTER THE VALUE AFTER WHICH TO INSERT : ");
    scanf("%d", &val);
    new_node = (list *)malloc(sizeof(list));
    new_node->data = num;

    ptr = start;
    while(ptr != NULL && ptr->data != val) {
        ptr = ptr->link;
    }

    if (ptr == NULL) {
        printf("\n VALUE NOT FOUND\n");
    } else {
        new_node->link = ptr->link;
        ptr->link = new_node;
    }
}

void delete_beg(void) {
	list *ptr;
	ptr = start;
	start = start -> link;
	free(ptr);
}

void delete_end(void) {
	list *ptr , *ptr1;
	ptr = start ;
	while(ptr->link != NULL ) {
		ptr1 = ptr;
		ptr = ptr->link;
	}
	ptr1 -> link = NULL;
	free(ptr);
}

void delete_node(void) {
	list *ptr,*ptr1;
	int val;
	printf("\n ENTER THE VALUE OF THE NOLDE WITCH HADE TO DELETED : ");
	scanf("%d", &val);
	ptr = start;
	if(ptr->data == val){
		delete_beg();
	}else{
		while(ptr->data != val){
			ptr1 = ptr;
			ptr = ptr->link;
		}
		ptr1->link = ptr->link;
		free(ptr);
	}
}

int main() {
    int opp;
    do {
        printf(" ***** MAIN FUNCTION ***** \n");
        printf("\n 1: CREATE A NODE");
        printf("\n 2: DISPLAY NODES");
        printf("\n 3: ADD A NODE AT THE BEGINNING");
        printf("\n 4: ADD A NODE AT THE END");
        printf("\n 5: ADD A NODE BEFORE A NODE");
        printf("\n 6: ADD A NODE AFTER A NODE");
        printf("\n 7: DELETE A NODE FROM BEGINING");
        printf("\n 8: DELETE A NODE FROM END");
        printf("\n 9: DELETE A NODE FROM ANY POSITION");
        printf("\n 10: EXIT");
        printf("\n\n ENTER YOUR CHOICE : ");
        scanf("%d", &opp);

        switch(opp) {
            case 1:
                create_node();
                break;
            case 2:
                display_node();
                break;
            case 3:
                beginning_node();
                display_node();
                break;
            case 4:
                end_node();
                display_node();
                break;
            case 5:
                before_node();
                display_node();
                break;
            case 6:
                after_node();
                display_node();
                break;
            case 7:
            	delete_beg();
            	display_node();
            	break;
            case 8:
            	delete_end();
            	display_node();
            	break;
            case 9:
            	delete_node();
            	display_node();
            	break;
            	
        }
    } while(opp != 10);

    return 0;
}


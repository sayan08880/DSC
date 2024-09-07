#include<stdio.h>

typedef struct {
	char name[50];
	int calas;
	float roll;
}student;

int main()
{
	student a ,*p;
	p = &a;
	
	//input
	printf("\n ENTER THE NAME : ");
	scanf("%s",&p->name); 
	printf("\n ENTER THE CLASS : ");
	scanf("%d",&p->calas);
	printf("\n ENTER THE ROLL : ");
	scanf("%f",&p->roll); 
	
	//output
	printf("\n THE NAME : %s",p->name);
	printf("\n THE CLASS : %d",p->calas);
	printf("\n THE ROLL NO. : %f",p->roll);
	
	return 0;
} 


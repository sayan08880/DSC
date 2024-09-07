#include<stdio.h>
#include<conio.h>

struct student {
	int id;
	char name[100];
	float mark;
};
main(){
	struct student s1;
	void print(struct student s1);
	printf("\n ENTER THE ID : ");
	scanf("%d",&s1.id);
	printf("\n ENTER THE NAME : ");
	scanf("%s",s1.name);
	printf("\n ENTER THE MARKS : ");
	scanf("%f",&s1.mark);
	print(s1);
	return 0;
}

void print (struct student x){
	printf("\n ID : %d\t NAME : %s\t MARKS : %f ",x.id,x.name,x.mark);
}

#include<stdio.h>
#include<conio.h>
struct dob{
	int date;
	int month;
	int year;
};
struct student{
	char name[10];
	int clas;
	int no;
    long ph;
};
int main(){
	struct dob a;
	struct student b;
	
	
	printf(" ******** ENTER DETAILS ******** \n\n");
	printf("\n ENTER THE NAME : ");
	scanf("%s",&b.name);
	printf("\n ENTER THE CLASS : ");
	scanf("%d",&b.clas);
	printf("\n ENTER THE ROLL NO. : ");
	scanf("%d",&b.no);
	printf("\n ENTER THE PHONE NO. : ");
	scanf("%ld",&b.ph);
	printf("\n ENTER THE DATE OF BIRTH : ");
	scanf("%d",&a.date);
	printf("\n ENTER THE MOUNTH OF BIRTH : ");
	scanf("%d",&a.month);
	printf("\n ENTER THE YEAR OF BIRTH : ");
	scanf("%d",&a.year);
	
	printf("\n\n\n ******** STUDENT DETAILS ******** \n\n");
	printf("\n STUDENT NAME IS : %s ",b.name);
	printf("\n STUDENT CLASS IS : %d ",b.clas);
	printf("\n STUDENT ROLL NO. IS : %d ",b.no);
	printf("\n STUDENT PH NO. IS : %ld ",b.ph);
	printf("\n STUDENT DOB IS : %d.%d.%d ",a.date,a.month,a.year);
	
	
	return 0;
	
	
}
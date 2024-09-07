#include<stdio.h>
#include<stdlib.h>
struct dob{
	int date;
	int year;
	int month;
};

int main(){
	struct dob a,*p;
	p= &a;
	//input valu
	printf("\n ENTER THE DATE : ");
	scanf("%d ",&p->date);
	
	printf("\n ENTER THE MONTH : ");
	scanf("%d ",&p->month);
	
	printf("\n ENTER THE YEAR : ");
	scanf("%d ",&p->year);
	
	//output valu
	printf("\n THE DATE IS : %d.%d.%d",p->date,p->month,p->year);
	
	return 0;
}

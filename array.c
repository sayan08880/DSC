#include<stdio.h>
int main()
{   
    int c=3,b=4;
	printf("\n ENTER THE COLLAM : ");
	scanf("%d",&c);
	printf("\n ENTER THE ROW : ");
	scanf("%d",&b);
	int a[c][b];
	int i , j;
	

	
	//input array
	
	for(i=0;i<c;i++){
		for (j=0;j<b;j++){
			printf("\n ENTER THE %d ROW & %d COLLAME : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
	//output array
	    printf("\n THE ARRAY IS\n");
		for(i=0;i<c;i++){
		for (j=0;j<b;j++){
			printf("%d \t\t",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
#include<stdio.h>


int main(){

	int s;
	int a[s];
	printf("\n ENTER THE ARRAY VALU : ");
	scanf("%d",&s);
	printf("\n \t ********** ENTER THE ELEMENT IN ARRAY ********** \n");
	for( int i = 0; i<s ; i++){
	printf("\n ENTER %d ELEMENT : ",i);
	scanf("%d",&a[i]);
	}
	
	for( int i = 0; i <s ; i++){
	printf("\n THE %d ELEMENT is : %d ",i,a[i]);
	}
	
	printf("\n \t *********** REVERS THE ARRAY ********** ");
	
    for(int i= s-1 ; i>=0 ; i--){
    	
    	printf("\n THE %d ELEMENT IS : %d",i,a[i]);
	}
	return 0;
}

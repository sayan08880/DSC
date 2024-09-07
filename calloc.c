#include<stdio.h>
#include<stdlib.h>

int main(){
	int* ptr;
	int valu;
	printf("ENTER THE ARRY SIZE : ");
	scanf("%d",&valu);
	ptr = (int*)calloc(valu,sizeof(int));
	
	for(int i=0 ; i<valu ; i++){
		printf("THE NUMBER OF ARRAY IS %d\n",i);
		scanf("%d",&ptr[i]);
	}
		for(int i=0 ; i<valu ; i++){
		printf("THE NUMBER OF ARRAY IS %d & THE VALU IS %d\n",i,ptr[i]);
		
	}
	printf("THANK YOU");
	return 0;
}

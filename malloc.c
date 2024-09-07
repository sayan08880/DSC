#include<stdio.h>
#include<stdlib.h>

int main(){
	int* ptr;
	int valu;
	printf("ENTER THE ARRY SIZE : ");
	scanf("%d",&valu);
	ptr = (int*)malloc(valu*sizeof(int));
	for(int i=0 ; i<valu ; i++){
		printf("ENTER THE VALU NUMBER %d OF THIS ARRAY\n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0 ; i<valu ; i++){
		printf("THE VALU AT NUMBER %d OF THIS ARRAY is %d\n",i, ptr[i]);
		}
		
	printf("THANK YOU");
	return 0;
	
}

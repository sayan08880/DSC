#include<stdio.h>
int main()
{   
    int s;
	int a[s];
	int find;
	//input array size
	printf("\n ENTER THE SIZE OF ARRAY : ");
	scanf("%d",&s);
	
	//enter the valu in array
	printf("\n ***** ENTER VALU OF THE ARRAY ***** \n");
	for (int i=0 ; i < s ; i++){
		printf("\n ENTER THE %d VALU : ",i);
		scanf("%d",&a[i]);
	}
	
	//print the valu of array
		printf("\n ***** PRINT VALU OF THE ARRAY ***** \n");
	for (int i=0 ; i < s ; i++){
		printf("\n THE %d VALU IS : %d\n",i,a[i]);
	}
	
	//enter the Deleting valu of array
	    printf("\n ENTER THE DELETING VALU OF ARRAY : ");
		scanf("%d",&find);
		int index = s; 
	for (int i= 0 ; i<= index ; i++){
		if (a[i] == find){
			for (int j = i-1 ; j<= index ; j++)
			a[j-1] = a[j];
			--i;
			--index;
		}
	}
	//print the new valu
	printf("\n ***** THE NEW ARRAY VALU IS ***** \n");
	for (int i=0 ; i<= index ; i++){
		printf("\n%d\t",a[i]);
		}
	return 0;
}

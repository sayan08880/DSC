#include<stdio.h>
int main()
{
	int a[3][3],z=0,nz=0;
	printf("\n ********** ENTER THE SPARSE MATRICES ********** \n");
	for (int i=0 ; i<3 ; i++){
		for (int j=0 ; j<3 ; j++){
			printf("\n ENTER THE [%d][%d] VALU IS : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for (int i=0 ; i<3 ; i++){
		for (int j=0 ; j<3 ; j++){
			printf("\n THE [%d][%d] VALU IS : %d",i,j,a[i][j]);
		}
	}
	for(int i=0; i<3 ;i++){
		for(int j=0 ; j<3 ;j++){
			if (a[i][j] == 0)
			z++;
			else
			nz++;
		}
	}
	if (nz > z){
		printf("\n ***** THE MATRICES NOT SPARSE MATRICES ***** \n");
	}
	else{int s[nz][3],k=0;
		for (int i=0 ; i<3 ; i++){
			for(int j=0 ; j<3 ; j++){
				if(a[i][j] != 0){
					s[k][0] = i;
					s[k][1] = j;
					s[k][2] = a[i][j];
					k++;
				}
			}
		}
		printf("\n ***** THE SPARSE MATRICES IS ***** \n");
		for (int i=0 ; i<nz ; i++){
			printf("\n");
			for (int j=0 ; j<3 ; j++){
				printf("%d\t",s[i][j]);
			}
		}
	}
	return 0;
}
	


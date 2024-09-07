#include<stdio.h>
typedef struct{
	double x;
	double y;
}point;

void modify( point *p , double x ,  double y )
{
	p->x = x;
	p->y = y;
}

int main(){
	point a ={ 5.0 , -9.3 };
	modify(&a , 9.0 , 8.0 );
	printf("%lf %lf",a.x,a.y);
}

#include <stdlib.h>
#include <stdio.h>
int product(int,int);
int main(){
	int x,y,r;
	printf("Enter first value x= \n");
	scanf("%d",&x);
	printf("Enter second value y= \n");
	scanf("%d",&y);
	r=product(x,y);
	printf("%d * %d = %d \n",x,y,r);
	return 0;
}
int product(int x,int y){
	int r;
	if(y==1)
		return x;
	if(x==1)
		return y;
	r=x+product(x,y-1);
	return r;
}

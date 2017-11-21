#include <stdio.h>
#include <stdlib.h>

void d2b(int,int *,int *);
int main()
{
    int x,*b,n,i;
    n=0;
    printf("Value: \n");
    scanf("%d",&x);
    b=(int *)calloc(20,sizeof(int));
    d2b(x,b,&n);
    for(i=n-1;i>=0;i--){
        printf("%d",b[i]);
    }
    return 0;
}
void d2b(int x,int *b,int *n){
   if(x==0)
    return;
   b[*n]=x%2;
   *n=*n+1;
   d2b(x/2,b,n);
   return;
}


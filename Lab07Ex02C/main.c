#include <stdio.h>
#include <stdlib.h>
int catalan(int );
int main()
{
    int i;
    for(i=0;i<=10;i++){
        printf("Catalan(%d)= %d\n", i,catalan(i));
    }
    return 0;
}
int catalan(int n){
    int r,i;
    if(n==0)
        return 1;
    r=0;
    for(i=0;i<n;i++){
        r+=catalan(i)*catalan(n-1-i);
    }
    return r;
}

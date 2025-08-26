#include <stdio.h>

long long c (int m, int n){
    long long r=1;
    if (n > m/2){
        n=m-n;
    }

    for (int i=0; i<n; i++){
        r=r*(m-i)/(i+1);
    }
    return r;
}


int main(void){
    int t,n,m;

    scanf("%d",&t);

    for (int i=0; i<t; i++){

        scanf("%d %d",&n,&m);
        
        printf("%lld\n",c(m,n));
        
        
    }
}
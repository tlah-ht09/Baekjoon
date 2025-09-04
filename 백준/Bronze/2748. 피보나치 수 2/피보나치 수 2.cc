#include <stdio.h>

int main(void){
    int n;
    long long int a=0,b=1,temp;
    
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        temp=a+b;
        a=b;
        b=temp;
    }
    printf("%lld",a);
}
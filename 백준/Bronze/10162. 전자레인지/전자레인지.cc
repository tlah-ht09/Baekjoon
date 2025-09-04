#include <stdio.h>

int main(void){
    int l[3]={300,60,10};

    
    int n;
    scanf("%d",&n);

    
    if (n%10!=0){
        printf("-1");
    }
    else{
        for (int i=0; i<3; i++){
            printf("%d ",n/l[i]);
            n -= (l[i]) * (n/l[i]);
        }
    }
}
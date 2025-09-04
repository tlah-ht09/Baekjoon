#include <stdio.h>

int main(void){
    int n,k;
    int l[10002]={0};
    int idx=1;
    scanf("%d %d",&n,&k);
    for (int i=1; i< n+1; i++){
        if (n%i==0){
            l[idx]=i;
            idx++;
        }
    }
    printf("%d",l[k]);
}
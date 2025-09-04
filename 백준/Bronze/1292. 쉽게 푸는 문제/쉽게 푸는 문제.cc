#include <stdio.h>
#include <stdlib.h>

int main(void){
    int s,e,idx=0;
    scanf("%d %d",&s,&e);
    int *l=(int *)malloc(4*e*(e+1)/2);
    for (int i=1; i<e+1; i++){
        for (int j=1; j<i+1; j++){
            l[idx]=i;
            idx++;
        }
    }
    int sum=0;
    for (int i=s-1; i<e; i++){
        sum+=l[i];
    }
    printf("%d",sum);
}
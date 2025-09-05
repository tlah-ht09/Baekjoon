#include <stdio.h>

int main(void){
    int n,x;
    scanf("%d",&n);

    int l[1001]={};

    for (int i=0; i<n; i++){
        scanf("%d",&x);
        l[i]=x;
    }

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (l[i]>l[j]){
                l[i]=l[i]^l[j];
                l[j]=l[i]^l[j];
                l[i]=l[i]^l[j];
            }
        }
    }

    for (int i=0; i<n; i++){
        printf("%d\n",l[i]);
    }
}
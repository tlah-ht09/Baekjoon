#include <stdio.h>

int main(void){
    int n,w,i_cnt=0,j_cnt=0;
    int n_a=0;
    int i_idx[51]={0};
    int j_idx[51]={0};
    char x;

    scanf("%d %d",&n, &w);

    for (int i=0; i<n; i++){
        for (int j=0; j<w; j++){  
            scanf(" %c",&x);
            if (x=='X'){
                i_idx[i]=1;
                j_idx[j]=1;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (i_idx[i]!=1){
            i_cnt++;
        }
    }

    for (int j=0; j<w; j++){
        if (j_idx[j]!=1){
            j_cnt++;
        }
    }

    printf("%d",i_cnt > j_cnt ? i_cnt : j_cnt);
}
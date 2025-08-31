#include <stdio.h>


int main(void){
    int n;
    int sum=0;
    int min=0;
    int l[30]={64};

    scanf("%d",&n);

    while(1){
        sum=0;
        for (int i=0; l[i]!=0; i++){
            sum+=l[i];
        }

        if (l[min]==n || sum==n){
            break;
        }
        l[min+1]=l[min]/2;
        l[min]/=2;
        min++;
    
        
        
      
        
        if (sum-l[min] >= n){
            l[min]=0;
            min--;

        }
       

     
    }
    int cnt=0;

    for (int i=0; l[i]!=0; i++){
        cnt++;
    }
    printf("%d",cnt);

}
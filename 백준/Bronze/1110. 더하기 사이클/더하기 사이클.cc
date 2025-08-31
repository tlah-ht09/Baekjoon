#include <stdio.h>

int main(void){
    int n;
    int cp;
    int r=0;
    int sum=0;
    int cnt=0;
    scanf("%d",&n);
    
    cp=n;
    while (r!=n){
        r=0;
        sum=0;
        sum+=(cp/10);
        sum+=(cp%10);
  
        r+=(cp%10)*10;
        r+=(sum%10);
        cp=r;

        cnt++;
    }
    if (cnt==0){
        printf("1");
    }
    else{printf("%d",cnt);}
}
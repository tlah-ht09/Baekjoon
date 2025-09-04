#include <stdio.h>

int main(void){
    int n,cnt=0,not=0;
    scanf("%d",&n);
    
    char s[101];
    
    for (int i=0; i<n; i++){
        int done[27]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        scanf("%s",s);
        done[s[0]-96]=1;

        for (int j=1; s[j]!='\0';j++){
            
            if ((s[j]!=s[j-1]) && (done[s[j]-96]==1)){
                not++;
                break;
            }
            done[s[j]-96]=1;
            
        }
        if (not==0){
            cnt++;
        }
        not=0;
    }
    printf("%d",cnt);

}
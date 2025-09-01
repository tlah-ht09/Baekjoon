#include <stdio.h>

int main(void){
    char l[1000001];
    scanf("%s",l);
    int max=0,max_i=0;
    int r[27]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int cnt=0;
    for (int i=0; l[i]!='\0';i++){
        if ((int)l[i] > 92){
            r[(int)l[i] - 97]+=1;
        }
        else if ((int)l[i] < 92){
            r[(int)l[i]-65]+=1;
        }
    }
    for (int i=0; i<26;i++){
        if (r[i]>max){
            max=r[i];
            max_i=i;
        }
    }

    for (int i=0; i<26; i++){
        if (r[i]==max){
            cnt++;
        }
    }
    if (cnt > 1){
        printf("?");
    }
    else{
        printf("%c",(char)max_i+65);
    }
}
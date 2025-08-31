#include <stdio.h>
#include <string.h>

int main(void){
    char s_l[10][10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    
    long long black[3]={0,1};
    long long brown[3]={1,10};
    long long red[3]={2,100};
    long long orange[3]={3,1000};
    long long yellow[3]={4,10000};
    long long green[3]={5,100000};
    long long blue[3]={6,1000000};
    long long violet[3]={7,10000000};
    long long grey[3]={8,100000000};
    long long white[3]={9,1000000000};
    
    long long sum=0;
    char l[4][10]={};
    char a[10],b[10],c[10];
    int n;
    int t=10;

    scanf("%s %s %s",l[0],l[1],l[2]);
    

    
    for (int i=0; i<3; i++){
        
        for (int j=0; j<10; j++){
            if (strcmp(l[i],s_l[j])==0){
                n=j;
            }
        }

        if (i<2){

        
            switch (n){
                case 0:
                    sum+=(black[0]*t);
                    t=1;
                    break;
               case 1:
                   sum+=(brown[0]*t);
                    t=1;
                  break;
             case 2:
                    sum+=(red[0]*t);
                    t=1;
                    break;
                case 3:
                    sum+=(orange[0]*t);
                    t=1;
                    break;
                case 4:
                    sum+=(yellow[0]*t);
                    t=1;
                    break;
                case 5:
                    sum+=(green[0]*t);
                    t=1;
                    break;
                case 6:
                    sum+=(blue[0]*t);
                    t=1;
                    break;
                case 7:
                    sum+=(violet[0]*t);
                    t=1;
                    break;
                case 8:
                    sum+=(grey[0]*t);
                    t=1;
                    break;
                case 9:
                    sum+=(white[0]*t);
                    t=1;
                    break;
            }
        }
    }
    
    switch (n){
         case 0:
            sum*=(black[1]);
            break;
        case 1:
            sum*=(brown[1]);
            break;
        case 2:
            sum*=(red[1]);
            break;
            case 3:
            sum*=(orange[1]);
            break;
        case 4:
            sum*=(yellow[1]);
            break;
        case 5:
            sum*=(green[1]);
            break;
        case 6:
            sum*=(blue[1]);
            break;
        case 7:
            sum*=(violet[1]);
            break;
        case 8:
            sum*=(grey[1]);
            break;
        case 9:
            sum*=(white[1]);
            break;
    }
    printf("%lld",sum);
}
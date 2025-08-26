#include <stdio.h>

int main() {
    int n;
    int a,b;
    
    int l[10][10]={
        {10},
        {1},
        {2,4,8,6},
        {3,9,7,1},
        {4,6},
        {5},
        {6},
        {7,9,3,1},
        {8,4,2,6},
        {9,1}
    };
    int l_l[10]={1,1,4,4,2,1,1,4,4,2};
    int a_l,c;
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        scanf("%d %d",&a,&b);
        a%=10;
        a_l=l_l[a];
        c=(b-1)%a_l;
        printf("%d\n",l[a][c]);
    }
    
}

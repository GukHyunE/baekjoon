#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    
    int i=0,j=0,k=0;
    int ball[100]={0,};
    for(int a=0; a<M; a++){
        scanf("%d %d %d", &i, &j, &k);
        for(int b=i; b<=j; b++){
            ball[b-1]=k;
        }
    }
    
    for(int a=0; a<N; a++){
        if(a==0) printf("%d", ball[a]);
        else printf(" %d", ball[a]);
    }
    
    return 0;
}
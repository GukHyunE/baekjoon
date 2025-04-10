#include <stdio.h>

int main()
{
    int basket[100] = {0,};
    for(int a=0; a<100; a++) basket[a] = a+1;
    
    int N=0, M=0;
    scanf("%d %d", &N, &M);
    
    for(int a=0; a<M; a++){
        int i=0, j=0;
        scanf("%d %d", &i, &j);
        
        int tmp = basket[i-1];
        basket[i-1] = basket[j-1];
        basket[j-1] = tmp;
    }
    
    for (int a=0; a<N; a++){
        if(a==0) printf("%d", basket[a]);
        else printf(" %d", basket[a]);
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    int basket[100] = {0,};
    for(int a=0; a<100; a++) basket[a] = a+1;
    
    for(int a=0; a<M; a++)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        
        if(i!=j){
            for(int b=0; b<((j- i + 1)/2); b++)
            {
                int tmp = basket[j-b-1];
                basket[j-b-1] = basket[i+b-1];
                basket[i+b-1] = tmp;
            }
        }
    }
    
    for(int a=0; a<N; a++)
    {
        if(a==0) printf("%d",basket[a]);
        else printf(" %d", basket[a]);
    }
    
    return 0;
}
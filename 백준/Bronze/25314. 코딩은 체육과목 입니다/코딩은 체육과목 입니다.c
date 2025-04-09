#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    
    int countN = N / 4;
    for(int i=0;i<countN;i++)
        printf("long ");
    printf("int");
    
    return 0;
}
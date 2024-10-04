
/**
 * 1
 * 2 2
 * 3 3 3
 * 
 * 3 3 3
 * 2 2
 * 1 
 */

#include<stdio.h>
int main()
{
    int Row ,Col,N;
    scanf("%d",&N);
    for(Row=N; Row>=1;Row--)
    {
            Col=1;
            while(Col<=Row)
            {
                printf("%d",Row);
                Col++;
            }
 
        printf("\n");
    }
}
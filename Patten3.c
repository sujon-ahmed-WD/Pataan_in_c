#include<stdio.h>
int main()
{
    int N , Row , Col;
    scanf("%d",&N);
    for(Row=1 ; Row<=N; Row++)
    {
        for( Col=1; Col<=Row; Col++ )
        {
            printf("%c",Col+96);
        }
         printf("\n");
    }
    return 0;
}
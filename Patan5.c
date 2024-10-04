#include<stdio.h>
/**
 *     A
       B B 
       C C C 
       D D D D 
       E E E E E
       F F F F F F 
       G G G G G G G 
       H H H H H H H H
       I I I I I I I I I  
       J J J J J J J J J  J
       I I I I I I I I
       H H H H H H H
       G G G G G G 
       F F F F F 
        E E E E 
       D D D 
        C C 
         B
 */
int main()
{
    int N ,Row,Col;
    scanf("%d",&N);
    for(Row=1 ; Row<=N ; Row++)
    {
        for(Col=1;Col<=Row;Col++)
        {
            printf("%c",64+Row);
        }
        printf("\n");
    }
    for(Row=N-1 ; Row>=1; Row--)
    {
        for(Col=1; Col<Row; Col++)
        {
            printf("%c",64+Row);
        }
        printf("\n");
    }
    return 0;

}
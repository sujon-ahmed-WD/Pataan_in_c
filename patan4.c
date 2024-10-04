#include<stdio.h>
/*
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3
  1 2
  1
*/
int main()

{
    int N , Row, Col;
    scanf("%d",&N);
    for(Row=1;Row<=N; Row++)
    {
        for(Col=1 ; Col<Row; Col++)
        {
            printf("%d",Col);
        }
        printf("\n");
    }
    for(Row=N-1;Row>=1; Row--)
    {
        for(Col=1 ; Col<Row; Col++)
        {
            printf("%d",Col);
        }
        printf("\n");
    }
}
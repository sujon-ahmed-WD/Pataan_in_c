#include <stdio.h>
/**
 *1 0 1 0
  1 0 1
   1 0
   1

   1 
   1 0
   1 0 1 
   1 0 1 0
 *
 */
int main()
{
    int N, Row, Col;
    scanf("%d", &N);
    for (Row = N; Row >= 1; Row--)
    {
        Col = 1;
        while (Col <= Row)
        {
            printf("%d", Row % 2);
            Col++;
        }
        printf("\n");
    }
    return 0;
}
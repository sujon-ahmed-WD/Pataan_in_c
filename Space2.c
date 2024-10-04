/*                               
 

                              12345678910
                               123456789
                                12345678
                                 1234567
                                  123456
                                   12345
                                    1234
                                     123
                                      12
                                       1
*/
 #include<stdio.h>
 int main()
 {
    int n, row, col;
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1;col>=n-row;col++)
        {
            printf("*");
        }
        for(col=1 ; col<=row ; col++)
        {
            printf("%d",col);
        }
    printf("\n");
    }
    return 0;
 }

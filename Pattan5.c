 #include<stdio.h>
 int main()
 {
    int n,row,col;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        // Space jono hoba ;
        for(col=1 ; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
 }
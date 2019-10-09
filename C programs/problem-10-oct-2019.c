#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d",&n);

    for( i = 0; i < ((2* n) - 1); i++)
    {
        for(j = 0; j < ((2* n) - 1); j++)
        {
            if(i >= 0 && i < n)
            {
                if(j >= i && j < (2 * n) - 1 - i)
                {
                    printf("%d ",n - i);
                }
                if(j < i)
                {
                    printf("%d ",n - j);
                }
                if(j >= (2 * n) - 1 - i)
                {
                    printf("%d ",j + 2 - n);
                }
            }
            if(i >= n && i < (2 * n) - 1)
            {
                if(j >= (2 * (n - 1)) - i && j < i + 1)
                {
                      printf("%d ",i - n + 2);
                }
                if(j < (2 * (n - 1)) - i )
                {
                    printf("%d ",n - j);
                }
                if(j >= i + 1)
                {
                     printf("%d ",j + 2 - n);
                }
            }
        }printf("\n");

    
}return 0;
}
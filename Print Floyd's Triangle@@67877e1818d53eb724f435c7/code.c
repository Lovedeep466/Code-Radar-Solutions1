#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=1;i>=a;i--)
    {
        int k=1;
        for (j=i;j<=a;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");

    }
}
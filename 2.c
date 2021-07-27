#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of loops >>");
    scanf("%d", &a);
    int b=a;
    for(int i=a;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ", b);
            //b++;
        }
        printf("\n");
        b--;
    }
}

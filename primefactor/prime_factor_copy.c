#include <stdio.h>
int prime(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    prime(num);
    return 0;
}
int prime(int num)
{
    int i;
    printf("Prime factors : ");
    for (i = 2; num > 1; i++)
    {
        while (num % i == 0)
        {
            num = num / i;
            printf("%d ", i);
        }
    }
}
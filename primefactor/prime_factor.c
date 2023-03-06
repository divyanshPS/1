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
    int factor, times_divisible;
    // for loop to find the ALL the factors of the given number
    printf("The prime factors of %d are : ",num);
    for (factor = 2; factor <= num; factor++)
    {
        if (num % factor == 0)
        {
            // printf("%d is a factor of %d\n",factor,num); 
            /*  for loop to find whether the factor of the given number are prime or not 
                by dividing it by all numbers from 2 upto factor*/
            for (int count = 2; count <= factor; count++)
            {
                /* condition to check if they are not prime by checking 
                  if they are divisible by some other no than itself*/
                if (factor % count == 0 && count != factor)
                {
                    // printf("%d is not a prime factor of %d\n",factor,num);
                    break;
                }
                /* condition to check if they are prime by checking 
                  if they are only divisible by themselves*/
                else if (factor % count == 0 && count == factor)
                {
                    // printf("%d is a prime factor of %d\n",factor,num);
                    //  for loop to check how many times can the given number be divided by the prime factor
                    for (int count2 = 1; num % factor == 0; count2++)
                    {
                        num = num / factor;
                        times_divisible = count2;
                        
                    }
                    // for loop to print prime factor the number of times it is divisible by number
                    for (int count3 = 1; count3 <= times_divisible; count3++)
                    {
                        printf("%d ", factor);
                    }
                }
            }
        }
    }
}
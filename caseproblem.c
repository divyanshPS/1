#include<stdio.h>

int main(){
    int mnum , num , fact=1, count ;
    printf("\nMENU :\n1.Factorial of a number\n2.Prime or not\n3.Odd or Even\n4.Exit\n\n");
    printf("Enter the menu number : ");
    scanf("%d",&mnum);
    switch (mnum)
    {
    case 1:
        printf("Enter the number : ");
        scanf("%d",&num);
        while(num>1){
            fact = fact * num ;
            num--;
        }
        printf("Factorial = %d",fact);
        break;
    case 2:
        
        printf("Enter the number : ");
        scanf("%d",&num);
        for(int i=1;i<=num;i++){
            if(num%i==0){
                count++;
            }
        }
        if(count>2)
        printf("%d is not a prime number",num);
        else
        printf("%d is a prime number",num);

        break;
    case 3:
        printf("Enter the number : ");
        scanf("%d",&num);
        if(num%2==0)
        printf("Even");
        else
        printf("Odd");
        break;
    case 4:
        printf("Exiting...");
        break;
    default :
        break;
    }
    return 0;
}
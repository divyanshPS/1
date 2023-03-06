#include<stdio.h>
void message();
int main(){
    printf("iam in main function\n");
    message();
    return 0;
}
void message()
{
    printf("iam in message function");
}
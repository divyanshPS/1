#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    for(int i=100;i<1000;i++){
        a = i % 10 ;
        b = (i/10)%10;
        c = ((i/10)/10)%10;
        if(a*a*a + b*b*b + c*c*c == i)
        printf("%d is armstrong no\n",i);
    }
    return 0;
}
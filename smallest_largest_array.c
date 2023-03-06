#include<stdio.h>

int main(){
    int a[5],small,large;
    printf("Enter the elements of the array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    small=a[0];
    large=a[0];
    for(int i=1;i<5;i++){
        if(a[i]<small)
        small=a[i];
        if(a[i]>large)
        large=a[i];
    }
    printf("smallest = %d\nlargest = %d",small,large);
    return 0;
}
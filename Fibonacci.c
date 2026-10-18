#include<stdio.h>

int main() {
    int b = 1;
    int a = 0;
    int max, next;
    
    printf("Enter Max Range: ");
    scanf(" %d", &max);


    for(int i = 1; i<=max; i++){
        next = a+b;
        printf("%d, ", a);
        a = b;
        b = next;

    }
    return 0;
}
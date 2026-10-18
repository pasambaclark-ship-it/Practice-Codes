#include<stdio.h>

int main() {
    int max, min, sum = 0;
    printf("Enter minimum range: ");
    scanf(" %d", &min);
    printf("Enter maximum range: ");
    scanf(" %d", &max);

    for(min; min<=max; min++){
         sum= sum + min;
    }
    printf("Sum: %d", sum);
    return 0;
}
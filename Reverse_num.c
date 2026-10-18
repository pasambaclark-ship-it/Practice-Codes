#include<stdio.h>

void seperator(int length){
    for(int i=0; i<length; i++){
        printf("=");
    }
    printf("\n");
}

int main() {
    int num, count =0;
    int rem, sum=0;
    int revnum=0;
    int ready;

    printf("Enter a Number: ");
    scanf("%d", &num);

    while(num > 0){
        rem = num % 10;
        revnum= (revnum * 10) + rem;
        sum += rem;
        num = num/10;
        count++;
    }

    seperator(30);
    printf("Reversed digits: %d\n", revnum);
    seperator(30);
    printf("Number of digits: %d\n", count);
    seperator(30);
    printf("Sum of digits: %d\n", sum);
    seperator(30);

    printf("Ready? Press 1 if yes: ");
    scanf("%d", &ready);
    if(ready==1){
    for (int i = 1; i <= 37; i++) {
        printf("%3d: I Love You Yanni<3\n", i);
    }
}
    return 0;
}
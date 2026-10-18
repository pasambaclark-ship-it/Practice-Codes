#include<stdio.h>

int main () {
int password, attempts=0;

do{
    attempts++;
    printf("Enter your password: ");
    scanf(" %d", &password);

if(password != 1234){
    printf("Try again!\n");
} else{
    printf("Access Granted!\n");
    printf("Attempts: %d", attempts);
}
}while(password != 1234);
return 0;
}
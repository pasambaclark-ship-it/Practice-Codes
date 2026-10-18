#include<stdio.h>

void seperator(int length) {
    for(int i=0; i<length; i++) {
        printf("=");
    }
    printf("\n");
}

void loops() {
    int rows;

    seperator(50);
    printf("\n");

    printf("Enter number of rows: ");
    scanf(" %d", &rows);
    
    seperator(50);
    printf("\n");

if(rows>=1){
    
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    seperator(50);
    printf("\n");

    for(int i=1; i<=rows; i++){
        for(int j=rows; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }

    seperator(50);
    printf("\n");

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=(rows-i); j++){
        printf(" ");
    }
        for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }

    seperator(50);
    printf("\n");

    for(int i=rows; i>=1; i--){
        for(int j=1; j<=(rows-i); j++){
        printf(" ");
    }
        for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
}
}

int main() 
{
    loops();
    return 0;
}
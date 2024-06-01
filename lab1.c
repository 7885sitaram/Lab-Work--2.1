#include<stdio.h>

int main(){

    float a , b ;
    int ch , c , d , res;

    printf("Enter your first number: ");
    scanf("%f", &a);

    printf("Enter your second number: ");
    scanf("%f", &b);
    printf("\n");

    printf("choose 1 for Addition \n");
    printf("choose 2 for Subtraction \n");
    printf("choose 3 for Multiplication \n");
    printf("choose 4 for Division \n");
    printf("choose 5 for Modulo \n \n");

    printf("Enter your choice: ");
    scanf("%d", &ch);


    switch (ch)
    {
    case 1:
    printf("Addition of %.2f and %.2f is %.2f", a ,b,a+b);
    break;

    case 2:
    printf("Subtraction of %.2f and %.2f is %.2f", a ,b,a-b);
    break;

    case 3:
    printf("Multiplication of %.2f and %.2f is %.2f", a ,b,a*b);
    break;

    case 4:
    printf("Division of %.2f and %.2f is %.2f", a ,b,a/b);
    break;

    case 5:
     c = a , d = b ;
     res = c%d;
    printf("Modulo of %d and %d is %d", c ,d, c%d );
    break;
    
    default:

    printf("Invalid choice please try again ");
        break;
    }


return 0;
    
}
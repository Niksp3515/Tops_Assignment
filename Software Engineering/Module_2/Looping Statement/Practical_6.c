#include <stdio.h>
void main() {
    int n, num1 = 0, num2 = 1, nextNum;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printf("%d ",num1);
    printf("%d ",num2);

    for (int i = 1; i <= n; i++)
    {
        nextNum = num1+num2;
        printf("%d ",nextNum);
        num1= num2;
        num2= nextNum;
    }
    
}
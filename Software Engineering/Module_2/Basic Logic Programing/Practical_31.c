#include<stdio.h>
void main(){
    int kilometer;
    printf("Enter the distance in kilometers: ");
    scanf("%d",&kilometer);

    int meter = 1000 * kilometer;
    printf("\n%d Kilometers --> %d Meters.",kilometer,meter);
}
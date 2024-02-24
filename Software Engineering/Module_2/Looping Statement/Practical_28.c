#include <stdio.h>
#include <stdbool.h>

void printSeriesSum(int N)
{
    double sum = 0;
    int a = 1;
    int cnt = 0;
    
    bool flag = true;
    
    sum += a;
    while (cnt < N) {
        int nextElement;
        
        if (flag == true) {
            nextElement = a * 2;
            sum += nextElement;
            flag = !flag;
        }
        
        else {
            nextElement = a * 3 / 2;
            sum += nextElement;
            flag = !flag;
        }
        
        a = nextElement;
        cnt++;
    }
    
    printf("%f\n", sum);
}

void main()
{
    int N = 8;
    printSeriesSum(N);
}



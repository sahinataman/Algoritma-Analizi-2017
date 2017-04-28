#include <stdio.h>
#include <stdlib.h>

#define SIZE 400

//Complexity for Fibonacci with Dynamic Programming O(n)

static int array[SIZE];

int fibonacci(int i)
{
    if(i==1)
        return 1;
    if(i<=0)
        return 0;
    if(array[i]!=0)
        return array[i];

    array[i]=fibonacci(i-1)+fibonacci(i-2);

    return array[i];
}

int main()
{
    int result;
    result=fibonacci(10);
    printf("Result: %d",result);

    return 0;
}

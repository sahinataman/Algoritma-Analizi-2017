#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10
#define E (2.7182818284590452353602874713526624977572470937L )
#define PI (3.1415926535897932384626433832795028841971693994L )


int minOfArray(int array[SIZE])
{
    int i,min;
    min=array[0];

    for(i=1;i<SIZE;i++)
    {
        if(array[i]<min)
            min=array[i];
    }
    return min;
}

int maxOfArray(int array[SIZE])
{
    int i,max;
    max=array[0];

    for(i=1;i<SIZE;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    return max;
}

float averageOfArray(int array[SIZE])
{
    int i,sum=0;

    for(i=0;i<SIZE;i++)
    {
        sum+=array[i];
    }

    return sum/(float)SIZE;
}

float varianceOfArray(int array[SIZE])
{
    int i,sum=0,variance;
    for (i=0;i<SIZE;i++)
    {
        sum=sum+pow( (array[i]-averageOfArray(array)),2 );
    }
    variance=sum/(float)SIZE;

    return variance;
}

float stdDeviation(int array[SIZE])
{
    int variance=varianceOfArray(array);
    int std_deviation=sqrt(variance);

    return std_deviation;
}

void normalDistribution(int array[SIZE])
{
    int i;
	float variance = varianceOfArray(array);
	float average = averageOfArray(array);
	for(i=0;i<SIZE;i++)
    {
		 array[i]=(1/variance*sqrt(2*PI)*(pow(E, (-1)*(pow(array[i]-average, 2)/(2*variance*variance)))));
	}
}

int main()
{
    int array[SIZE]={5,8,9,-1,22,33,45,98,10,39};

    printf("Max: %d\n",maxOfArray(array));
    printf("Min: %d\n",minOfArray(array));
    printf("Average: %.2f\n",averageOfArray(array));
    printf("Variance: %.2f\n",varianceOfArray(array));
    printf("Standard Deviation: %.2f\n",stdDeviation(array));
    normalDistribution(array);

    return 0;
}

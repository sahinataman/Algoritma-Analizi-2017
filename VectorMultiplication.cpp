#include <iostream>

using namespace std;

int vectorMultiplication(int *vector1, int *vector2, int vectorSize)
{
    int vector3[10];
    int multiplication=0;

    for(int i=0;i<vectorSize;i++)
    {
        vector3[i]=vector1[i]*vector2[i];
        multiplication+=vector3[i];
    }

    return multiplication;
}

int main()
{
    int vectorSize, result;
    int vector1[3]={1,2,3},vector2[3]={2,4,6};

    vectorSize=sizeof(vector1)/sizeof(vector1[0]);
    result=vectorMultiplication(vector1, vector2, vectorSize);
    cout <<"Result=" <<result;

    return 0;
}

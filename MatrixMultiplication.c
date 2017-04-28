#include <stdio.h>
#include <stdlib.h>

//Karmasikligi O(m.n.p)

void display(int mult[][3], int rowFirst, int columnSecond)
{
	int i,j;
	printf("Vector:\n");
	for(i=0;i<rowFirst;i++)
	{
		for(j=0;j<columnSecond;j++)
		{
			printf("%d ", mult[i][j]);
			if(j==columnSecond-1)
                printf("\n\n");
		}
	}
}

void vectorMultiplication(int v1[][3],int v2[][3])
{
    int i,j,k,r1=3,c1=3,c2=3;
    int mult[3][3]={{0}};

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                mult[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }
    printf("Result ");
    display(mult,3,3);
}

int main()
{
    int vec1[3][3]={ {1,2,3},{4,5,6},{1,2,3} };
    int vec2[3][3]={ {1,2,3},{4,5,6},{1,2,3} };

    display(vec1,3,3);
    display(vec2,3,3);
    vectorMultiplication(vec1,vec2);

    return 0;
}

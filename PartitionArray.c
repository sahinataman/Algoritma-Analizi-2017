#include <stdio.h>
#include <stdlib.h>

int maxSubSum1(int *array,int length)
{
    int i,j,k;
    int thisSum=0,maxSum=0;

    for(i=0;i<length;i++)
    {
        for(j=i;j<length;j++)
        {
            thisSum=0;
            for(k=i;k<=j;k++)
            {
                thisSum+=array[k];
            }
            if(thisSum>maxSum)
            {
                maxSum=thisSum;
            }
        }
    }
    return maxSum;
}

void diziyiBol(int *dizi, int elemanSayisi)
{
    int yeniDizi1[elemanSayisi/2];
    int yeniDizi2[elemanSayisi/2];
    int i, j;
    int orta=elemanSayisi/2;
    int sonuc1=0,sonuc2=0;

    for(i=orta-1;i>=0;i--)
    {
        yeniDizi1[i]=dizi[i];
        printf(" %d ",yeniDizi1[i]);
    }

    printf("\n");

    for(j=orta;j<elemanSayisi;j++)
    {
       yeniDizi2[j-orta]=dizi[j];
    }

    for(j=0;j<orta;j++)
    {
       printf(" %d ",yeniDizi2[j]);
    }

    sonuc1=maxSubSum1(yeniDizi1,sizeof(yeniDizi1)/sizeof(yeniDizi1[0]));
    sonuc2=maxSubSum1(yeniDizi2,sizeof(yeniDizi2)/sizeof(yeniDizi2[0]));

    printf("\nMax Toplam: %d",sonuc1+sonuc2);
}

int main()
{
    int i;
    int dizi[]={4, -3, 2, 1, 6, -1, -2, 4};
    int uzunluk=sizeof(dizi)/sizeof(dizi[0]);

    diziyiBol(dizi,uzunluk);

    return 0;
}


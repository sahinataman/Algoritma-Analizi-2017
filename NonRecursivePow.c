#include <stdio.h>
#include <stdlib.h>

static int adim_sayisi = 0;

long UsAlma(int taban , int us){
    int carpim = 1;
    int e = us;
    int b = taban;
    int step =0;
    int step1 =0;
    if (us==0){
        return 1;
    }

    while(e!=1){
        if (e % 2 ==1){
            carpim*=b;
        }
        b*=b;
        e/=2;
        adim_sayisi++;
    }
    return carpim * b;

}
int main()
{
    int sonuc;
    sonuc = UsAlma(3,62);
    printf("Us Alma Sonucu = %ld", sonuc);
    printf("\n*** Adim Sayisi = %d", adim_sayisi);
    return 0;
}

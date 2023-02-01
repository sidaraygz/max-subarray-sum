#include <stdio.h>
#include <limits.h>
#define SIZE 50

int maximumKazanc(int degerler[], int n, int *bas, int *son)
{
	
    int maxToplam = INT_MIN;
    int toplam = 0;
    int i, j;

    for (i = 0; i < n; i++)
    {

        toplam = 0;
	
        for (j = i; j < n; j++)
        {
            toplam += degerler[j];
            
            if (toplam > maxToplam) {
                *bas = i;
                *son = j;
                maxToplam = toplam;

            }
        }
    }	

    return maxToplam;
}

int main()
{
	
    int degerler[] = { 8, -30, 36, 2, -6, 52, 8, -1, -11, 10, 4};
     //{ 8, -30, 36, 2, -6, 52, 8, -1, -11, 10, 4};
    //{-2, -3, 4, -1, -2, 1, 5, -3};
    //{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(degerler) / sizeof(degerler[0]);
 
	

    int bas = 0;
    int son = 0;
    

    printf("En yuksek kazanc: %d\n", maximumKazanc(degerler, n, &bas, &son));
    printf("Kazilmasi gereken kesintisiz blok butunu: %d - %d", bas, son);

    return 0;
}


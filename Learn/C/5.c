//penggunaan perbandingan
#include <stdio.h>
int a, b, hasil;

int banding(int, int);

int main()
{
    printf("masukkan angka pertama: ");
    scanf("%d", &a);
    printf("masukkan angka kedua: ");
    scanf("%d", &b);
    hasil = banding(a,b);
    printf("angka terkecil adalah %d\n", hasil);
    return 0;
}

int banding(int x, int y)
{
    if (x < y)
        return(x);
    else
        return(y);
}

//rata-rata dengan array dan while loop
#include <stdio.h>

int main (){
    int n, i;
    float num[100],sum = 0, average;
    printf("masukkan jumlah elemen: ");
    scanf("%d", &n);

    while(n > 100 || n <= 0){
        printf("Error! nomor harus berada dalam jarak (1 hingga 100).\n");
        printf("masukkan lagi:  ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("%d. masukkan angka: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    
    average = sum / n;
    printf("rata - rata = %.2f\n", average);

    return 0;
}


//padding zero dengan printf
//maksudnya nambahin angka nol didepan angka sebenarnya
//2017 04 13
//sumber c4learn.com
#include <stdio.h>

int main (){
int a = 10, b = 20;
float c = 10.233;
printf("%05d\n%03d\n%01d\n%03f\n%05.2f\n", a, b, a + 90, c, c);
return 0;
}

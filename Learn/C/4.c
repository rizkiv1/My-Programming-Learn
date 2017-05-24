//fibonacci juga
#include <stdio.h>

int lim, bil=0, has;

int main (){
printf("masukkan batas: ");
scanf("%d",&lim);
while (bil <= lim - 1){
	bil += 1;
	has = bil%2;
	if(has == 1){
		printf("%d\n",bil);
		}
	}
}

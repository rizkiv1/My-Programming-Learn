//fibonacci(?)
#include <stdio.h>

int y=1,x=1,lim;

int main(){
	printf("masukkan batas: ");
	scanf("%d",&lim);
	while(y <= lim){
		printf("%d\n",x);
		printf("%d\n",y);
		x+=y;
		y+=x;
	}
}

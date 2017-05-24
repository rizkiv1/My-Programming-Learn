//percobaan menggunakan switch, dan pengulangan(?)

#include <stdio.h>

int select;
char selection;
float in; 
double result;

int main(){
selection = 'y';
do{	
	printf("Konverter bitcoin\n1. satoshi ke BTC\n2. bits(microbitcoin) ke BTC\n3. millibitcoin(mBTC) ke BTC\n4. centibitcoin(cBTC) ke BTC\n5. BTC ke satoshi\n6. BTC ke bits\n7. BTC ke mBTC\n8. BTC ke cBTC\n\nmasukkan pilihan:");
	scanf("%d",&select);
	if(select < 9){
		printf("masukkan nilai: ");
		scanf("%f",&in);
	}
	if(in <=0){
		printf("salah!!");
		return 0;
	}
	switch(select){
		case 1:
			result = in / 100000000;
			break;
		case 2:
			result = in / 1000000;
			break;
		case 3:
			result = in / 1000;
			break;
		case 4:
			result = in / 100;
			break;
		case 5:
			result = in * 10000000;
			break;
		case 6:
			result = in * 100000;
			break;
		case 7:
			result = in * 1000;
		case 8:
			result = in * 100;
	}
	if(result!=0){
		printf("%e", result);
	}
	printf("\n\n\nulangi??\nY(y) atau T(t)");
	scanf("\n%c",&selection);
	}

while(selection == 'y' || selection == 'Y');
return 0;
}

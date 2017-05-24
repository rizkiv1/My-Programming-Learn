//penggunaan switch, fibonacci, dan pengulangan

#include <stdio.h>

int x = 1, y = 1, bg=0, pil, lim, has, ke;
unsigned long int xy = 1, yx = 1; 
int main(){
printf("1. x+y = z");
printf("\n2. bilangan ganjil(metode for)");
printf("\n3. bilangan ganjil(metode while)");
printf("\n4. fibonacci");
printf("\npilihan: ");
scanf("%d",&pil);

switch (pil){
	case 1:
		printf("\n\nmasukkan batas: ");
		scanf("%d",&lim);
		while(y<=lim){
			printf("%d\t%d\n",x,y);
			x+=y;
			y+=x;}
		break;
	case 2:
		printf("\n\nmasukkan batas: ");
		scanf("%d",&lim);
		for(bg=0;bg <= lim;bg+=1){
			has = bg%2;
			if(has!=1){
				printf("%d\n",bg);
			}
		}
		break;
	case 3:
		printf("\n\nmasukkan batas: ");
		scanf("%d",&lim);
			while(bg <= lim - 1){
				has = bg%2;
				bg += 1;
				if(has == 0){
					printf("%d\n",bg);
				}
			}
		break;
	case 4:
		printf("\n\nmasukkan batas suku: ");
		scanf("%d",&lim);
		printf("\n\n");
		for(ke = 0;ke <= lim - 2;){
			if(ke == 0){
				printf("suku ke %d : %d\n", ke, ke);
			}
			ke+=1;
			printf("suku ke %d : %lu\n", ke, xy);
			ke+=1;
			printf("suku ke %d : %lu\n", ke, yx);
			xy+=yx;
			yx+=xy;
		}
		break;
	default:
		printf("salah!\n");
	}
}

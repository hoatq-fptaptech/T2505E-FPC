#include <stdio.h>
int main(){
	int x = 10;

	while(x>10){
		printf("While....\n");
		x++;
	}

	do{
		printf("Do..while\n");
	}while(x>10);

	int x;
	do{
		printf("Nhap gia tri x>0:");
		scanf("%d",&x);
		if(x<=0){
			printf("Vui long nhap lai gia tri!");
		}
	}while(x<=0);
	
}
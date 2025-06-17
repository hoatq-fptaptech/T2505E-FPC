#include <stdio.h>

int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);

	int b;
	printf("NHap b=");
	scanf("%d",&b);

	int c;
	printf("Nhap c=");
	scanf("%d",&c);

	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				printf("Day la 3 canh cua 1 tam giac");
			}else{
				printf("Khong the tao thanh tam giac");
			}
		}else{
			printf("Khong the tao thanh tam giac");
		}
	}else{
		printf("Khong the tao thanh tam giac");
	}
}
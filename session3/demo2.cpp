#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int t;
	if(n<=50){
		t= n*1678;
		printf("So tien phai nop: %d",t);
	}else{
		if(n<=100){
			t = 50*1678 + (n-50) *1734;
			printf("So tien phai nop: %d",t);
		}else{
			if(n<=200){
				t = 50*1678 + 50 * 1734 + (n-100)*2014;
				printf("So tien phai nop: %d",t);
			}else{
				t= 50*1678 + 50 * 1734 + 100*2014 + (n-200)*2536;
				printf("So tien phai nop: %d",t);
			}
		}
	}
}
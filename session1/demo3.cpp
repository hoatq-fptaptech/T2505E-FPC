#include <stdio.h>

int main(){
	// INPUT num
	int num;
	printf("Nhap num = ");
	scanf("%d",&num);

	int r;
	r = num % 2; // % : lấy dư của phép chia

	if(r == 0){ // == thì máy tính hiểu là so sánh =
		// YES
		printf("Number is even");
	}else{
		// NO
		printf("Number is odd");
	}

}
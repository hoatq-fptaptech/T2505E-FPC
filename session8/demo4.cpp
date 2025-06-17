#include <stdio.h>
int main(){
	// trươc khi khai báo mảng, nhập số lượng
	int n;
	do{
		printf("Nhap số lượng phần tử của mảng: ");
		scanf("%d",&n);
	}while(n<=0);

	int player[n];

	for(int i=0;i<n;i++){
		printf("Nhap pt vao mang:");
		scanf("%d",&player[i]);
	}

	int tm = 0;
	int kl = 0;

	for(int i=0;i<n;i++){
		if(player[i] > 0){
			tm++;
			if(tm > kl){
				kl = tm;
			}
		}else{
			tm = 0;
		}
	}

	printf("Số lượng số dương liên tiếp nhiều nhất: %d",kl);
}
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

	int high = player[0];
	// tim so lon nhat
	for(int i=0;i<n;i++){
		if(player[i]> high){
			high = player[i];
		}
	}
	if(high > 0){
		// mới tìm được số dương nhỏ nhất
		int min = high;
		for(int i=0;i<n;i++){
			if(player[i] > 0 && player[i] < min){
				min = player[i];
			}
		}
		printf("Số dương nhỏ nhất: %d",min);
	}else{
		printf("mảng toàn số âm...");
	}
}	
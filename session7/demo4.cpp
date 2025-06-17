#include <stdio.h>
int main(){
	// trươc khi khai báo mảng, nhập số lượng
	int size;
	do{
		printf("Nhap số lượng phần tử của mảng: ");
		scanf("%d",&size);
	}while(size<=0);

	int player[size];

	for(int i=0;i<size;i++){
		printf("Nhap pt vao mang:");
		scanf("%d",&player[i]);
	}

	int high = player[0];

	for(int i=0;i<size;i++){
		if(player[i] > high){
			high = player[i];
		}
	}

	// diem cao nhat
	printf("MAX: %d",high);

}
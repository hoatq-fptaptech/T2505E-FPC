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

	int s = 0; // tong cac so le
	int c = 0; // so luong các số lẻ

	for(int i=0;i<size;i++){
		if(player[i] %2 == 1){
			s = s + player[i];
			c++;
		}
	}

	if(c > 0){
		float tbc = (float)s/c;
		printf("TBC số lẻ: %f",tbc);
	}else{
		printf("Mảng không có số lẻ");
	}
	

}
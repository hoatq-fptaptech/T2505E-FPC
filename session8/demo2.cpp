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

	int x = 0;

	for(int i=0;i<n;i++){
		if(player[i] %2 == 1){
			x = player[i];
		}
	}
	if(x == 0){
		printf("Mảng toàn số chẵn, không có số lẻ!");
	}else{
		printf("Số lẻ cuối cùng: %d",x);
	}
}
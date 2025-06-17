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

	int x;
	printf("Nhap gia tri cần tìm:");
	scanf("%d",&x);

	int check = 0;
	for(int i=0;i<n;i++){
		if(player[i] == x){
			check = 1;
			break;
		}
	}

	if(check==1){
		printf("%d có trong danh sách",x);
	}else{
		printf("Không tìm thấy!");
	}
}
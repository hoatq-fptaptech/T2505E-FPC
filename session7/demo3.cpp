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

	// VD: tăng giá trị cả nhóm thêm 10
	for(int i=0;i<size;i++){
		player[i] = player[i] + 10;
	}

	printf("Các giá trị vừa nhập:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ",player[i]);
	}
}
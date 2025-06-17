#include <stdio.h>
int main(){
	int player[11];

	player[0] = 5;
	player[2] = 8;
	player[10] = 13;

	// theo lẽ thường
	// printf("Nhap so dau tien:\n");
	// scanf("%d",&player[0]);

	for(int i=0;i<11;i++){
		printf("Nhap pt vao mang:");
		scanf("%d",&player[i]);
	}

	printf("Các giá trị vừa nhập:\n");
	for (int i = 0; i < 11; i++)
	{
		printf("%d ",player[i]);
	}
}
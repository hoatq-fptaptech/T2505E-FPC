#include <stdio.h>

int main(){
	int d;
	printf("Nhap diem hoc sinh:");
	scanf("%d",&d);

	if(d>=9){
		printf("Day la hoc sinh xuat sac");
	}else{
		if(d>=8){
			printf("Day la hoc sinh gioi");
		}else{
			if(d>=7){
				printf("Day la hoc sinh kha");
			}else{
				if(d>=5){
					printf("Day la hoc sinh trung binh");	
				}else{
					printf("Day la hoc sinh yeu");	
				}
			}
		}
	}

}
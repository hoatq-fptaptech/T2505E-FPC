#include <stdio.h>

int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);

	int b;
	printf("Nhap b=");
	scanf("%d",&b);

	if(a==0){
		if(b==0){
			printf("Pt vo so nghiem");
		}else{
			printf("PT vo nghiem");
		}
	}else{
		float c;
		float b2 = (float)b;
		c = -b2/a;// a = 2, b=3 
		// c = -(float)b/a;
		printf("x= %f",c);
	}
}
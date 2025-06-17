#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);

	int b;
	printf("NHap b=");
	scanf("%d",&b);

	int c;
	printf("Nhap c=");
	scanf("%d",&c);

	if(a==0){
		if(b==0){
			if(c==0){
				printf("PT vo so nghiem");
			}else{
				printf("PT vo nghiem");
			}
		}else{
			int x;
			x = -c/b;
			printf("x = %d",x);
		}
	}else{
		int d = b*b-4*a*c;
		if(d<0){
			printf("PT vo nghiem");
		}else{
			if(d==0){
				int x;
				x = -b / (2*a);
				printf("x = %d",x);
			}else{
				float x1,x2;
				x1 = (-b + sqrt(d)) / (2*a);
				x2 = (-b - sqrt(d)) / (2*a);
				printf("x1= %f  x2= %f",x1,x2);
			}
		}
	}

}
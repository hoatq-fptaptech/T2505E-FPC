#include <stdio.h>
int main(){
	int tn;
	printf("Nhap vao thu nhap hang thang:");
	scanf("%d",&tn);
	
	int tntt = tn -11;
	int thue = 0;
	if(tntt <=0){
		printf("Chia buồn, chưa được tính thuế");
	}else if(tntt <= 5){
		thue = tntt * 5/100;
		printf("So tien thue can nop: %d",thue);
	}else if(tntt <= 10){
		thue = 5*5/100 + (tntt - 5) * 10/100;
		printf("So tien thue can nop: %d",thue);
	}else if(tntt <= 18){
		thue = 5*5/100 + 5 * 10/100 + (tntt-10)*15/100;
		printf("So tien thue can nop: %d",thue);
	}else if(tntt <=32){
		thue = 5 * 5/100+ 5*10/100 + 8 *15/100 + (tntt-18)*20/100;
		printf("So tien thue can nop: %d",thue);
	}else if(tntt <= 52){
		thue = 5 * 5/100+ 5*10/100 + 8 *15/100 + 14 * 20/100 + (tntt-32)*25/100;
		printf("So tien thue can nop: %d",thue);
	}else if(tntt <=80){
		thue = 5 * 5/100+ 5*10/100 + 8 *15/100 + 14 * 20/100 + 20*25/100 + (tntt-52) *30/ 100;
		printf("So tien thue can nop: %d",thue);
	}else{
		thue = 5 * 5/100+ 5*10/100 + 8 *15/100 + 14 * 20/100 + 20*25/100 + 28*30/100 + (tntt-80)*35/100;
		printf("So tien thue can nop: %d",thue);
	}

}
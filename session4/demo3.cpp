#include <stdio.h>
int main(){
	int x;
	printf("x = ");
	scanf("%d",&x);

	switch(x+2){
		case 0: printf("A");break;
		case 5: printf("B");break;
		case 10: printf("C");break;
		default: printf("D");
	}

	if(x==0){
		printf("A");
	}else if(x==5){
		printf("B");
	}else if(x==10){
		printf("C");
	}else{
		printf("D");
	}

	if(x > 5){

	}else{

	}



}
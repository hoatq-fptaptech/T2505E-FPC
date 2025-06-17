#include <stdio.h>
int main(){

	int cnt =0;
	while(cnt < 10){
		printf("While print...\n");
		cnt++;
	}


	for(int i=0;i<10;i++){
		printf("For print...\n");
	}
	
	for(int i=0,j=0; i < 10 && j<10; i++,j++){
		printf("i=%d -- j=%d\n",i,j);
	}

	int k = 0;
	for( ;k<10; ){
		printf("k=%d\n",k);
		k++;
	}

	// printf("i = %d",i);

	// int s = 0;
	// for(int i=0;i<100;s+=i,i++);

	int x=0;
	int cnt = 0;
	while(cnt < 100){
		x = x + cnt;
		cnt++;
	}


}
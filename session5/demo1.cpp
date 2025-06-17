#include <stdio.h>
int main(){
	int stk,n;
	int cnt = 0;
	printf("Nhap so tien:");
	scanf("%d",&stk);
	printf("Nhap so nam:");
	scanf("%d",&n);
	while(cnt < n){
		// yes 
		int L;
		L = stk * 6 / 100;
		stk = stk + L; 
		cnt++; // cnt = cnt + 1;
	}
	// no
	printf("Stk: %d",stk);
}
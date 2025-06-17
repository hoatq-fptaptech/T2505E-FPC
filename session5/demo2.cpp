#include <stdio.h>
int main(){
	int stk,n;
	int cnt = 0;
	printf("Nhap so tien:");
	scanf("%d",&stk);
	printf("Nhap so tien mong muon:");
	scanf("%d",&n);
	while(stk < n){
		// yes 
		int L;
		L = stk * 6 / 100;
		stk = stk + L; 
		cnt++; // cnt = cnt + 1;
	}
	// no
	printf("So nam can gui: %d",cnt);
}
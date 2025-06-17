#include <stdio.h>
int main(){
	int m;
	printf("Nhap m=");
	scanf("%d",&m);

	int m500;
	m500 = m/500;

	int r500;
	r500 = m%500;

	int m200;
	m200 = r500/200;

	int r200;
	r200 = r500%200;

	int m100;
	m100 = r200/100;

	int r100;
	r100 = r200%100;

	int m50;
	m50 = r100/50;

	int r50;
	r50 = r100%50;

	int m20;
	m20 = r50/20;

	int r20;
	r20 = r50%20;

	int m10;
	m10 = r20/10;

	printf("Cac menh gia tien: %d tờ 500, %d tờ 200, %d tờ 100, %d tờ 50, %d tờ 20, %d tờ 10",m500,m200,m100,m50,m20,m10);

}
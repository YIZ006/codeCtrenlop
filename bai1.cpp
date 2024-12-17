#include<stdio.h>
#define PI 3.1415
int main(){
	float r,CV,DT;
	printf("Moi nhap ban kinh: ");
	scanf("%f",&r);
	CV=PI*r*2;
	DT=PI*r*r;
	printf("Chu vi hinh tron la: %f\n",CV);
	printf("Dien tich hinh tron la :%f",DT);
	
}
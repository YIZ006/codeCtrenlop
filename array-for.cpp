//Viết chương trình khai báo mảng 9 số nguyên
// và tìm giá trị lớn nhất trong mảng đó.
#include<stdio.h>
int main(){
int songuyen[9]={1,2,3,4,5,6,7,8,9},max;
max=songuyen[0];
	for(int i=0;i<9;i++){
	if(songuyen[i]>max){
		max=songuyen[i];
	}
}
	printf("%d",max);
	return 0;
	}
//5.1
#include<stdio.h>
int main(){
	int n;
	int i;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n<=0){
		printf("Error\n");
		return 0;
	}
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int tong=0;
	for (i=0;i<n;i++){
		printf("%d ",a[n-i-1]);
		tong+=a[i];
	}
	printf("\ntong cac phan tu cua mang :%d ",tong);
}
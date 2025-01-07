#include<stdio.h>
int main(){
	int n;
	long long gt=1;
	do{
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	if(n<0){
		printf("Moi thu lai/n");
	}
	else for(int i=2;i<=n;i++){
	gt*=i;
	}
	printf("%lld",gt);
	}while(n<0);
	
}
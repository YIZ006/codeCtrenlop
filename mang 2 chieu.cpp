#include<stdio.h>
int main(){
	int n,m;
	int i,j;
	int max,min;
	printf("Moi nhap cot : ");
	scanf("%d",&n);
	printf("Moi nhap hang: ");
	scanf("%d",&m);
	int a[n][m];
	for(int i=0;i<n;i++){
	     for(int j=0;j<m;j++){
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
}
	printf("cac phan tu vua nhap trong mang\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		printf("%d ",a[i][j]);
	}
	}
   
   max=a[0][0];
   min=a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(min>a[i][j]){
			min=a[i][j];
		}
		if(max<a[i][j]){
			max=a[i][j];
		}
	}
	}
		printf("\n min =%d",min);
	printf("\n max =%d",max);

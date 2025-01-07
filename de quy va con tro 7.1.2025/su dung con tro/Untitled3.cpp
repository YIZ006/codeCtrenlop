//#include<stdio.h> // su dung con tro
//int result(int n, long long *giaithua){
//	*giaithua=1;
//	
//	for(int i =2;i<=n;i++){
//		*giaithua*=i;
//	}
//}
//int main(){
//	int n;
//	long long giaithua;
//	
//	printf("Nhap so nguyen n: ");
//	scanf("%d",&n);
//	
//	if(n<0){
//		printf("Khong co so am");
//	}
//	else for(int i=0;i<=n;i++){
//		result(n,&giaithua);
//	}
//	printf("%lld",giaithua);
//	
//}
//tinh tong cac so nguyen tu 1-N 
//co su dung ham de quy N nhap vao tu ban phim
int result(int n, long long *sum){
	*sum = 0;
	for(int i =0;i<=n;i++){
		*sum +=i;
	}
}
#include<stdio.h>
int main(){
	int n;
	long long sum;
	printf("Moi nhap n: ");
	scanf("%d",&n);
	if(n<0){
		printf("Moi nhap n > 0 ");
	}
	else{
	result(n,&sum);
	printf("%lld",sum);
}
}
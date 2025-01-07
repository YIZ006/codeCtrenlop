//#include<stdio.h> //su dung dem quy
//long long gt(int n){
//	if(n==0 || n==1 ) return 1;
//	else{
//	return n*gt(n-1);
//}
//}
//int main(){
//	int n;
//	
//	printf("Moi nhap so nguyen n: ");
//	scanf("%d",&n);
//	
//	printf("%lld",gt(n));
//}
//tinh tong cac so nguyen tu 1-N 
//co su dung ham de quy N nhap vao tu ban phim
#include<stdio.h>
long long sum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1); // Đệ quy tính tổng
}
int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Vui long nhap so nguyen duong.\n");
    } else {
        long long result = sum(n);
        printf("Tong tu 1 den %d la: %lld\n", n, result);
    }
    return 0;
}



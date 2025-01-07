#include<stdio.h>

// Hàm đệ quy tính tổng từ 1 đến n
int result(int n, long long *sum) {
    if (n == 1) {  // Điều kiện dừng
        *sum = 1;
        return *sum;
    } else {
        result(n - 1, sum); // Đệ quy
        *sum += n;           // Cộng dồn giá trị của n
        return *sum;
    }
}

int main() {
    int n;
    long long sum = 0;  // Khởi tạo sum là 0
    
    printf("Moi nhap n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Vui long nhap n >= 1\n");
    } else {
        result(n, &sum);  // Gọi hàm tính tổng
        printf("Tong tu 1 den %d la: %lld\n", n, sum);
    }
    
    return 0;
}

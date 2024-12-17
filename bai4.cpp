#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main() {
    int choose;
    do {
        // In menu l?a ch?n
        printf("\nMenu:\n");
        printf("1. Tinh chu vi, dien tich hinh tron\n");
        printf("2. Tinh hoc luc cua sinh vien\n");
        printf("3. Tim gia tri trong mang\n");
        printf("4. Thoat\n");
        printf("Moi ban chon chuc nang (1-4): ");
        scanf("%d", &choose);

        switch(choose) {
            case 1: {
                float r, CV, DT;
                printf("Moi nhap ban kinh hinh tron: ");
                scanf("%f", &r);
                CV = PI * r * 2;
                DT = PI * r * r;
                printf("Chu vi hinh tron la: %.2f\n", CV);
                printf("Dien tich hinh tron la: %.2f\n", DT);
                break;
            }
            case 2: {
                float diem;
                printf("Moi nhap diem sinh vien (0 - 10): ");
                scanf("%f", &diem);
                if (diem >= 8.0) {
                    printf("Hoc luc: Gioi\n");
                } else if (diem >= 6.5) {
                    printf("Hoc luc: Kha\n");
                } else if (diem >= 5.0) {
                    printf("Hoc luc: Trung binh\n");
                } else {
                    printf("Hoc luc: Yeu\n");
                }
                break;
            }
            case 3: {
                int n, x, found = 0;
                printf("Moi nhap so luong phan tu trong mang: ");
                scanf("%d", &n);
                int arr[n];
                printf("Nhap %d phan tu cho mang:\n", n);
                for (int i = 0; i < n; i++) {
                    printf("a[%d] = ", i+1);
                    scanf("%d", &arr[i]);
                }
                printf("Moi nhap gia tri can tim: ");
                scanf("%d", &x);

                for (int i = 0; i < n; i++) {
                    if (arr[i] == x) {
                        printf("Gia tri %d tim thay tai vi tri a[%d]\n", x, i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Khong tim thay gia tri %d trong mang.\n", x);
                }
                break;
            }
            case 4:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
                break;
        }
    } while (choose != 4);
    return 0;
}

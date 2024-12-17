#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.1415
#include <windows.h>

void set_color(int code) {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, code);
}

int main() {
    int choose;
    
    // Mảng các câu ngẫu nhiên
    const char* messages[] = {
        "Chao mung ban den voi chuong trinh!",
        "Chuc ban mot ngay moi vui ve!",
        "Hien tai ban dang trong phan mem.",
        "Xin chao, hy vong ban se co mot ngay tuyet voi!",
        "Chuc ban thanh cong trong moi du an!"
    };

    // Thiết lập hạt giống cho số ngẫu nhiên
    srand(time(NULL));

    do {
        // In câu ngẫu nhiên trước khi in menu
        int random_index = rand() % (sizeof(messages) / sizeof(messages[0]));
        set_color(9); // Màu xanh lam cho câu ngẫu nhiên
        printf("%s\n\n", messages[random_index]);

        set_color(10);
        printf("Menu:\n");
        set_color(14);
        printf("1. Tinh chu vi, dien tich hinh tron\n");
        set_color(15);
        printf("2. Tinh hoc luc cua sinh vien\n");
        set_color(11);
        printf("3. Tim gia tri trong mang\n");
        set_color(12);
        printf("4. Thoat\n");
        set_color(13);
        printf("Moi ban chon chuc nang (1-4): ");
        scanf("%d", &choose);

        switch (choose) {
            case 1: {
                float r, CV, DT;
                set_color(14);
                printf("Moi nhap ban kinh hinh tron: ");
                scanf("%f", &r);
                CV = PI * r * 2;
                DT = PI * r * r;
                printf("Chu vi hinh tron la: %.2f\n", CV);
                printf("Dien tich hinh tron la: %.2f\n", DT);
                set_color(15);
                break;
            }
            case 2: {
                float diem;
                set_color(15);
                do {
                    printf("Moi nhap diem sinh vien (0 - 10): ");
                    scanf("%f", &diem);
                    if (diem < 0 || diem > 10) {
                        printf("Moi nhap lai diem \n");
                    }
                } while (diem < 0 || diem > 10);

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
                set_color(11);
                printf("Moi nhap so luong phan tu trong mang: ");
                scanf("%d", &n);
                int arr[n];
                printf("Nhap %d phan tu cho mang:\n", n);
                for (int i = 0; i < n; i++) {
                    printf("a[%d] = ", i + 1);
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
                set_color(15);
                break;
            }
            case 4:
                set_color(12);
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
                break;
        }

    } while (choose != 4);

    return 0;
}

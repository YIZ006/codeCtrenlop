#include<stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void set_color(int code) {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, code);
}

void tinhTong() {
    int a, b;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Tong cua hai so la: %d\n", a + b);
}

void kiemTraChanLe() {
    int n;
    printf("Nhap mot so: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("So %d la so chan.\n", n);
    } else {
        printf("So %d la so le.\n", n);
    }
}

void kiemTraAmDuong() {
    int n;
    printf("Nhap mot so: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("So %d la so duong.\n", n);
    } else if (n < 0) {
        printf("So %d la so am.\n", n);
    } else {
        printf("So %d la so 0.\n", n);
    }
}

void kiemTraChiaHet() {
    int n;
    printf("Nhap mot so: ");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0) {
        printf("So %d chia het cho ca 3 va 5.\n", n);
    } else {
        printf("So %d khong chia het cho ca 3 va 5.\n", n);
    }
}

void kiemTraHoanHao() {
    int n, tongUoc = 0;
    printf("Nhap mot so: ");
    scanf("%d", &n);
    
    // Tinh tong cac uoc
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tongUoc += i;
        }
    }
    
    if (tongUoc == n) {
        printf("So %d la so hoan hao.\n", n);
    } else {
        printf("So %d khong phai la so hoan hao.\n", n);
    }
}

void timMaxMang() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Gia tri lon nhat trong mang la: %d\n", max);
}

void tinhTrungBinh() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n], tong = 0;
    printf("Nhap cac phan tu mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        tong += arr[i];
    }
    
    printf("Trung binh cong cua cac phan tu la: %.2f\n", (float)tong / n);
}

void docSo() {
    int n;
    printf("Nhap mot so co 1 chu so (0-9): ");
    scanf("%d", &n);
    
    switch (n) {
        case 0: printf("So khong\n"); break;
        case 1: printf("So mot\n"); break;
        case 2: printf("So hai\n"); break;
        case 3: printf("So ba\n"); break;
        case 4: printf("So bon\n"); break;
        case 5: printf("So nam\n"); break;
        case 6: printf("So sau\n"); break;
        case 7: printf("So bay\n"); break;
        case 8: printf("So tam\n"); break;
        case 9: printf("So chin\n"); break;
        default: printf("So khong hop le\n");
    }
}

void inMang() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Cac phan tu mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void tinhTongChan() {
    int n, tong = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            tong += arr[i];
        }
    }
    
    printf("Tong cac gia tri chan trong mang la: %d\n", tong);
}

int main() {
    int chose;
    const char* messages[] = {
        "Chao mung ban den voi chuong trinh!",
        "Chuc ban mot ngay moi vui ve!",
        "Hien tai ban dang trong phan mem.",
        "Xin chao, hy vong ban se co mot ngay tuyet voi!",
        "Chuc ban thanh cong trong moi du an!"
    };

    srand(time(NULL)); // time de su dung ngau nhien
    
    //in ngau nhien cac cau o tren
    int random_index = rand() % (sizeof(messages) / sizeof(messages[0]));
    set_color(9);
    printf("%s\n", messages[random_index]);
    set_color(14);

    while (1) {
    	
        printf("\nMenu:\n");
        printf("1. Tinh tong 2 so\n");
        printf("2. Kiem tra so chan hay le\n");
        printf("3. Kiem tra so am hay duong\n");
        printf("4. Kiem tra chia het cho 3 va 5\n");
        printf("5. Kiem tra so hoan hao\n");
        printf("6. Tim gia tri lon nhat trong mang\n");
        printf("7. Tinh trung binh cong cac phan tu mang\n");
        printf("8. Doc so co 1 chu so\n");
        printf("9. In cac phan tu mang\n");
        printf("10. Tinh tong cac gia tri chan trong mang\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon (0-10): ");
        scanf("%d", &chose);
        
        switch (chose) {
            case 1: tinhTong(); break;
            case 2: kiemTraChanLe(); break;
            case 3: kiemTraAmDuong(); break;
            case 4: kiemTraChiaHet(); break;
            case 5: kiemTraHoanHao(); break;
            case 6: timMaxMang(); break;
            case 7: tinhTrungBinh(); break;
            case 8: docSo(); break;
            case 9: inMang(); break;
            case 10: tinhTongChan(); break;
            case 0: 
                printf("Thoat chuong trinh.\n");
                return 0;
            default: 
                printf("Lua chon khong hop le.\n");
        }
    }

    return 0;
}

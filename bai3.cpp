//cau 3
#include<stdio.h>

int main(){
	int n;
	do{
	printf("Moi nhap n: ");
	scanf("%d",&n);
	if(n<0||n>=20){
	printf("Moi nguoi dung nhap lai");
	}
}while(n<0||n>=20);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i+1);
		scanf("%d",&a[i]);
	}
	int sochandau = 0;  
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {  
            printf("So chan dau tien la: %d\n", a[i]);
            sochandau = 1;
            break;
        }
    }
    
    // Nếu không tìm thấy số chẵn nào
    if (!sochandau) {
        printf("Khong tim thay so chan nao trong mang.\n");
    }
    return 0;
}
//	int index = ChanDau(a, n);
//    if(index != -1){
//        printf("So chan dau tien la a[%d] = %d\n",index + 1,a[index]);
//    } else {
//        printf("Khong tim thay so chan nao trong mang.\n");
//    }
//    return 0;
//}

//    if(ChanDau(a,n)==-1)
//    {
//        printf("\ntrong mảng không có số chẵn\n");
//    }else{
//        printf("\nVi tri so chan dau tien trong mang la: %d\n", ChanDau(a,n));
//    }
//}
//	int ChanDau(int a[],int n){
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]%2 == 0)
//        {
//         return i;
//        }
//    return -1;
//	}
//}
////

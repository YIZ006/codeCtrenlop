#include<stdio.h>
int main(){
	float toan,ly,hoa;
	do{
	printf("Moi nhap diem toan ");
	scanf("%f",&toan);
	if(toan<0||toan>10){
		printf("Moi nhap lai\n ");
	}
}while(toan<0||toan>10);
do{
	printf("Moi nhap diem ly ");
	scanf("%f",&ly);
	if(ly<0||ly>10){
	printf("Moi nhap lai\n");
	}
}while(ly<0||ly>10);
do{
	printf("Moi nhap diem hoa ");
	scanf("%f",&hoa);
	if(hoa<0||hoa>10){
		printf("Moi nhap lai\n");
	}
	}while(hoa<0||hoa>10);
	float TBM=(toan*3+ly*2+hoa)/6.0;
	printf("TBM = %f \n ",TBM);
	if(TBM>=8.0){printf("Xep loai gioi ");
	} else if(TBM<8.0&&TBM>6.5){ printf("Xep loai kha");
	} else if(TBM<6.5&&TBM>=5){ printf("Xep loai trung binh");
	}else printf("Xep loai yeu , thi lai ");
	
}
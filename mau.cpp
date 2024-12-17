#include <stdio.h>
int main(){
    int n;
    printf("Moi nhap so phan tu : ");
    scanf("%d",&n);
    int a[n];
        	if(n<0){printf("Moi nhap lai \n");
    for(int i=0;i<n;i++){
//    	printf("Moi nhap gia tri mang thu %d: ", i+1);
//    	scanf("%d",&a[i]);
    	printf("a[%d]= ",i+1);
    	scanf("%d",&a[i]);

		}
	}
	int tongchan=0;
	// in tong cac so chan
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			printf("Cac so chan trong mang :%d\n",a[i]);
				tongchan+=a[i];
		}
	}
	printf("Tong cac so chan trong Mang la: %d\n",tongchan);
	int tongle=0;
	//in tong cac so le 
	for(int j=0;j<n;j++){
		if(a[j]%2==1){
			printf("Cac so le trong mang :%d\n",a[j]);
			tongle+=a[j];
		}
	}
	printf("Tong cac so le trong Mang la: %d",tongle);

}
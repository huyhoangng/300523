#include <stdio.h>
#include <math.h>

int chu_vi_HCN (int d, int r);
int dien_tich_HCN(int d, int r);
int main (){
	int d,r;
	int CV, DT;
	int i;
printf("Nhap vao gia tri chieu dai:");
scanf ("%d",&d);
printf("\nNhap vao gia tri chieu rong:\n");
scanf("%d", &r);
CV=chu_vi_HCN(d,r);
DT=dien_tich_HCN(d,r);
return 0;
}
int chu_vi_HCN(int d,int r){
	int CV;
	printf("\nTinh chu vi hinh chu nhat:");
	CV = (d+r)*2;
	printf("\nChu vi HCN la %d",CV);
	return (CV);
} 
int dien_tich_HCN(int d, int r){
int DT;
	printf("\nTinh dien tich hinh chu nhat:");
	DT= d*r;
	printf("\nDien tich HCN la %d",DT);
	return (DT);
}


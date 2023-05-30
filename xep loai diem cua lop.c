#include <stdio.h>
#include <math.h>
int xep_loai(int d);
int main (){
	int i;
	int d;
printf("Nhap vao diem cua sinh vien:");
for(i=0;i<=5;i++){
printf("\n%d. ",i+1);
scanf ("%d",&d);
    xep_loai(d);
}
}
int xep_loai(int d){
	if (d>=90&&d<=100){
		printf("\nXep loai A!!! Chuc mung <3");	
	}
	else if (d>=80&&d<90){
		printf("\nXep loai B! Co gang chut nua thoi.");
	}
	else if (d>=70&&d<80){
		printf("\nXep loai C! Co gang len nhe.");
	}
	else if (d>=60&&d<70){
	printf("\nXep loai D! Can co gang nhieu.");
	}
	else{
	printf("\nXep loai F! Can thi lai mon nay.");
	}
}


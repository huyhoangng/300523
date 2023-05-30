#include <stdio.h>
#include <string.h>
int menu1(int a);
int menu2(int a);
int menu3(int a);
int menu4(int a);
void main() {
    int num;
    char pin[5];
    char dung_ma_pin[] = "161001";
    int i = 0;
    int m = 0;
    int a;
    
    do {
        printf("\n Please enter your pin :\n");
        scanf("%s", &pin);
        if (strcmp(pin, dung_ma_pin) == 0) {
            printf("\nBan da nhap dung ma pin!");
                printf("\n-----MENU-----");
            	printf("\n1.Deposit money.");
            	printf("\n2.Withdraw money.");
            	printf("\n3.Checking account balance.");
            	printf("\n4.Exit!!");
            printf("\n Choice num is \n");
            scanf("%d", &num);
            switch (num) {
                case 1 :{
                	menu1(a);
					break;
				}
                case 2: {
                	menu2(a);
					break;
				}
                case 3:{
                	menu3(a);
					break;
				}
                default :{
                	menu4(a);
					break;
				}                
            }
        } else {
            printf("\nBan da nhap sai ma pin!");
            ++m;
            if (m > 5) {
                printf("\n");
                break;
            }
        }
    } while (num==0);
}
int menu1(int a){
	int num, x, N, R, so_du = 100000;
    printf("\nNap tien.");
    printf("\nSo tien can nop: \n");
    scanf("%d", &N);
    x = so_du + N;
    printf("\nGiao dich thanh cong!\n");
    printf("So du hien tai la %d", x);
   }
int menu2(int a){
	int num, x, N, R, so_du = 100000;
    printf("\nRut tien.");
    printf("\nSo tien can rut: \n");
    scanf("%d", &R);
    if (R > so_du) {
        printf("\nSo du hien tai khong du\n");
        printf("\nSo du hien tai la %d", so_du);
                    }
   if (R <= so_du) {
        x = so_du - R;
        printf("\nGiao dich thanh cong!\n");
        printf("So du hien tai la %d\n ", x);
                    }
                  }
int menu3(int a){
	int num, x, N, R, so_du = 100000;
    printf("\nXem so du tai khoan\n");
    printf("\nSo du tai khoan cua ban la %d", so_du);
}
int menu4(int a){
	int num, x, N, R, so_du = 100000;
    printf("\n Error!!");
    }
      

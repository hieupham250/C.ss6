#include<stdio.h>
#include <stdlib.h>

int main(){
	int a,b,i,ucll,bcnn;
	float calculator;
	do{
		printf("nhap 2 so nguyen duong: ");
		scanf("%d %d",&a,&b);
		if(a>0&&b>0){
			printf("	CACULATOR\n");
			printf("1. Tong 2 so\n");
			printf("2. Hieu 2 so\n");
			printf("3. Tich 2 so\n");
			printf("4. Thuong 2 so\n");
			printf("5. So du trong phep chia 2 so\n");
			printf("6. Uoc chung lon nhat\n");
			printf("7. Boi chung nho nhat\n");
			printf("8. thoat\n");
			printf("Lua chon cua ban: ");
			int choice;
			scanf("%d",&choice);
			switch(choice){
				case 1:
					calculator = a+b;
					printf("Tong 2 so %d va %d la: %.f\n",a,b,calculator);
					break;
				case 2:
					calculator = a-b;
					printf("Tong 2 so %d va %d la: %.f\n",a,b,calculator);
					break;
				case 3:
					calculator = a*b;
					printf("Tich 2 so %d va %d la: %.f\n",a,b,calculator);
					break;
				case 4:
					calculator = a/b;
					printf("Thuong 2 so %d va %d la: %.1f\n",a,b,calculator);
					break;
				case 5:
					calculator = a%b;
					printf("So du trong phep chia 2 so %d va %d la: %.f\n",a,b,calculator);
					break;
				case 6:
					for(i=1;i<=a||i<=b;i++){
						if(a%i==0 && b%i==0){
							ucll = i;
						}
					}
					printf("Uoc chung lon nhat cua %d va %d la: %d\n",a,b,ucll);
					break;
				case 7:
					for(i=1;i<=a||i<=b;i++){
						if(a%i==0 && b%i==0){
							ucll = i;
						}
					}
					bcnn = a*b/ucll;
					printf("Boi chung nho nhat cua %d va %d la: %d\n",a,b,bcnn);
					break;
				case 8:
					exit(8);
				default:
	        		printf("Vui long chon tu 1-8\n");
			}
		} else {
			printf("2 so phai lon hon 0. Xin nhap lai!\n");
		}
	} while ("lua chon cua ban");
}

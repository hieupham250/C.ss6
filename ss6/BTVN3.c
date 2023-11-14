#include<stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c;
	int max,min,sum,average;
	do{
		printf("nhap so nguyen thu 1: ");
		scanf("%d",&a);
		printf("nhap so nguyen thu 2: ");
		scanf("%d",&b);
		printf("nhap so nguyen thu 3: ");
		scanf("%d",&c);
		printf("	CACULATOR\n");
		printf("1. Tong 3 so nguyen\n");
		printf("2. Trung binh cong cua 3 so nguyen\n");
		printf("3. so lon nhat, nho nhat trong 3 so\n");
		printf("4. Thoat\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				sum = a+b+c;
				printf("Tong 3 so nguyen la: %d\n",sum);
				break;
			case 2:
				average = (a+b+c)/3;
				printf("Trung binh cong cua 3 so nguyen la: %d\n",average);
				break;
			case 3:
				max = a;
				min = a;
				max=(max>b) ? max : b;
				min=(min>b) ? b : min;
				max=(max>c) ? max : c;
				min=(min>c) ? c : min;
				printf("So lon nhat la: %d\nSo nho nhat la: %d\n",max,min);
				break;
			case 4:
				exit(4);
			default:
        		printf("Vui long chon tu 1-4\n");
		}
	}
	while("lua chon cua ban: ");
}

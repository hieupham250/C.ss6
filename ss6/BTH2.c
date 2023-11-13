#include<stdio.h>

int main(){
	int sum = 0;
	printf("nhap cac so nguyen:\n");
	int number = 1;
	while(number!=0){
		scanf("%d",&number);
		if(number%2!=0){
			sum += number;
		}
	}
	printf("Tong cac so le vua nhap la:%d\n",sum);
}

#include<stdio.h>

int main(){
	int number;
	printf("nhap vao cac so nguyen:\n");
	do{
		scanf("%d",&number);
		if(number==0){
			break;
		}
		if(number%3==0){
			continue;
		}
		printf("so nguyen chia het cho 3\n",number);
	}
	while(1==1);
}

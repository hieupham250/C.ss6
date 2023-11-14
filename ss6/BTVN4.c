#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,n;
	int sum,odd_number,max;
	do{
		printf("\nnhap so nguyen n: ");
		scanf("%d",&n);
		if(n>0){
			printf("	PRACTICE\n");
			printf("1. In day so chia het cho 2 và giam dan (n >= so >= 2)\n");
			printf("2. In cac so nho hon n và tinh tong\n");
			printf("3. In ra cac uoc so chan cua n\n");
			printf("4. In ra cac uoc so le va so luong cac uoc le cua n \n");
			printf("5. In ra uoc so le lon nhat cua n\n");
			printf("6. Thoat\n");
			printf("Lua chon cua ban: ");
			int choice;
			scanf("%d",&choice);
			switch(choice){
				case 1:
					printf("day so chia het cho 2 va giam dan:\n");
					for(i = n; i >= 1;i--){
						if(i%2==0){
							printf("%d\t",i);
						}
					}
				break;
				case 2:
					sum = 0;
					printf("day so nho hon n la:\n");
					for(i = n; i >= 1;i--){
						if(i<n){
							printf("%d\t",i);
							sum +=i;
						}
					}
					printf("\ntong cac so nho hon n: %d",sum);
				break;
				case 3:
					printf("Cac uoc so chan cua %d: ",n);
                	for (i = 1; i <= n; i++) {
                    	if (n % i == 0 && i % 2 == 0) {
                        	printf("%d ", i);
                    	}
                	}
                break;
                case 4:
                	odd_number = 0; 
                	printf("Cac uoc so le cua %d: ",n);
                	for (i = 1; i <= n; i++) {
                    	if (n % i == 0 && i % 2 != 0) {
                        	printf("%d ", i);
                        	odd_number++;
                    	}
                	}
                	printf("\nSo luong cac uoc le cua n: %d",odd_number);
                case 5:
					i=n;
					max=0;
				do{
					i--;
					if(i%2!=0&&n%i==0){
						if(max<i){
							max=i;
						}
					}
					}while(i>=2);
						printf("uoc le lon nhat cua n la: %d\n",max);
				break;
				case 6:
					exit(6);
				default:
	        		printf("Vui long chon tu 1-6\n");
			}
		} else {
			printf("so n phai lon hon 0. Xin nhap lai!");
		}
	}
	while("lua chon cua ban");
}

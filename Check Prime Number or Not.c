#include<stdio.h>
int main() {
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	int temp=2, flag=0;
	for(temp ; temp<=(num/2) ; temp++){
		if(num%temp==0){
			flag++;
		}
	}
	if(flag==0){
		if(num==0 || num==1)
			return 0;
		printf("Number is prime.");
	}
	else if(flag!=0){
			if(num<=1)
				return 0;
		printf("Number is not prime.");
	}
}

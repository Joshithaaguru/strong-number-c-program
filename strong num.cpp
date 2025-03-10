#include<stdio.h>
int main()
{
	int num,digit,temp,sum=0,fact,i;
	printf("enter the number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		digit=temp%10;
		fact=1;
		i=digit;
		while(i>0){
			fact*=i;
			i--;
		}
		sum+=fact;
		temp/=10;
	}
	if(sum==num){
		printf("%d is a strong number.\n",num);
	}else{
		printf("%d is not a strong number.\n",num);
	}
	return 0;
}

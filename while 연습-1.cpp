#include <stdio.h>
main(){
	int n=0;
	
	while(n<5)
	{
		printf("Hi~\n ");
		n++;
	 }
	printf("n=%d\n", n);
	printf("======================\n");
	
	int i=1;
	while(i<=10)
	{
		printf("i");
		i++;
	}
	printf("\n");
	printf("======================\n");
	
	int num = 1;
	while(num<=5)
	{
		printf("반복내용 : %d \n", num);
		num++;
	}
	printf("======================\n");	
	
	int minus = 30;
	while(minus >= 10)
	{
		printf("%d \n", minus);
		minus = minus-2;
	}
	printf("======================\n");
	
	int sum =0;
	i = 1;
	while(i <= 10){
		sum = sum + i;
		i++;
	}
	printf("1부터 10까지의 합 : %d\n" , sum);
	printf("======================\n");
	
} 

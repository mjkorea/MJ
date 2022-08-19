#include <stdio.h>
main()
{
	int i = 1, sum = 0, num;
	printf("끝 수를 입력하시오 : ");
	scanf("%d", &num) ;
	while(1)
	{
		sum += i;
		i += 2;
		if(i>num) break;
	}
	printf("1부터 %d까지의 홀수의 합 = %d\n", num, sum);
	
	printf("=========================================================================================================\n");
}

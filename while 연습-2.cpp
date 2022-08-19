#include <stdio.h>
main()
{
	int i, n, sum = 0 ;
	
	printf("합을 구할 시작 수 입력 : ");
	scanf("%d", &i);
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d", &n);
	printf("%d부터 %d까지의 합은 ", i, n);
	while(n >= i)
	{
	sum = sum + i;
	i++;
	 }
	printf("%d입니다\n", sum);
}

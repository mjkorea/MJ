#include <stdio.h>
main()
{
	int i, n, sum = 0 ;
	
	printf("���� ���� ���� �� �Է� : ");
	scanf("%d", &i);
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d", &n);
	printf("%d���� %d������ ���� ", i, n);
	while(n >= i)
	{
	sum = sum + i;
	i++;
	 }
	printf("%d�Դϴ�\n", sum);
}

#include <stdio.h>

exam1(){
	int i;
	for (i=0; i<=6; i++)
		printf("i = %d\n", i);
	
}

exam2(){
	int i, sum = 0;
	for(i = 1; i<=10; i++)
		sum = sum + i;
	printf("1~10������ �� : %d", sum);
}

exam3(){
	int i, even, odd;
	even = odd = 0;
	
	for(i = 1; i<=100; i++){
			if(i%2==0)
				even+=i;
			else
				odd+=i;
	}
	
	printf("¦���� �� : %d Ȧ���� ��  %d", even, odd);
}

exam4(){
	int i;
	for(i = 1; i <= 9; i++)
		printf("2 * %d = %d\n", i, 2 * i);
}

exam5(){
	
}
exam6(){
	int i, count = 0, sum = 0;
	for(i = 3; i <=50; i+=3){
		printf("%4d", i);	
		sum+=i;
		++count;
		if(count%5==0)
			printf("\n");
	}
	printf("\nsum=%d\n", sum);
}

exam7(){
	char ch;
	for(ch = 'F'; ch >= 'A'; ch--)
	{
		printf("%c ", ch);
	}
}

exam8(){
	int i, n, fact = 1;
	scanf("%d", &n);
	for(i = 1; i<=n; i++)
		fact = fact*i;
	
	printf("%d! = %d\n", n, fact);
	
}

exam9(){
	int i, dan;
	printf("���ϴ� ����?");
	scanf("%d", &dan); 
	for(i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", dan, i, dan * i);
}

exam10(){
	int n1, n2, i;
	printf("�� �� �Է� : ");
	scanf("%d %d", &n1, &n2);
	if(n1<n2)
	{
		for(i = n1; i <= n2; i++)
			printf("%d ", i);
			
	}else{
		for(i=n2; i<=n1; i++)
			printf("%d ", i);
	}
	}
exam11(){
	int num1, num2, i;
	
	printf("������� ���� �� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);
	
	for(i = 1; i <= 100 ; i++)
		if(i % num1 == 0 and i % num2 == 0)
			printf("%d ", i);
}
exam12(){
/*	int sum = 0, i;
	for(i = 0; i<100 &&sum<2000; i++){
		sum = sum + i;
			printf("%d %d\n", i, sum);	
			}*/
	int num = 1, sum = 0;
	for(;;){
		sum+=num;
		printf("%d������ �� : %d\n", num, sum);
		num++;
		if(num==5444444444)
			break;
		
	}
}

exam13(){
	
}
exam14(){
	
}
exam15(){
	
}

	


main()
{
	int no;
	
	while(1){
		printf("\n������ȣ : ");
		scanf("%d", &no);
		printf("%d�� ����============================================\n", no); 
		switch(no){
			case 1 : exam1(); break;
			case 2 : exam2(); break;
			case 3 : exam3(); break;
			case 4 : exam4(); break;
			case 5 : exam5(); break;
			case 6 : exam6(); break;
			case 7 : exam7(); break;
			case 8 : exam8(); break;
			case 9 : exam9(); break;
			case 10 : exam10(); break;
			case 11 : exam11(); break;
			case 12 : exam12(); break;
			case 13 : exam13(); break;
			case 14 : exam14(); break;
			case 15 : exam15(); break;
		} 
		
	}
}

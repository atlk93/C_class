#include <Stdio.h>

int main()
{
	while(1)
	{
	int num;
	scanf("%d", &num);
	
	switch (num)
	{
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		case 6:
			printf("Six\n");
			break;
		case 7:
			printf("Seven\n");
			break;
		case 8:
			printf("Eight\n");
			break;
		case 9:	
			printf("Nine\n");
			break;
		case 0:
			return 0;
		}
	
	}	
	return 0;
	
	//int a=1, b=10;
	//int t=a;
	
	int a=1, b=100, t;
	int result=0;
	
	
	printf("�� �� �Է�\n");
	scanf("%d %d", &a, &b); 
	printf("%d���� %d ������ 5�� ����� \n", a, b);
/*
	a=10;
	b=20;
	
	result=a+b;

	printf("a = %d\nb= %d\n",a,b);
	printf("�� ���� ���� ����� result = %d + %d = %d\n",a,b,result);
*/

	
	t=a; // a�� �ʱⰪ ���� 
	
	int res1=0, res2=0; // res1 Ȧ����, res2 ¦���� 
	int res3=0, res4=0, res5=0, res6=0, res7=0, res8=0, res9=0;
	
	for(int i=a;i<=b;i++)
	{
/*		if(i%2==0) //¦�� (i%2�� ���� i%2�� 0�� �ƴҶ��� ���� ��) 
		{
			res2 += i;
		} 
		else //Ȧ�� 
		{
			res1 += i;
		}
		if(i%5==0) //5�� ���
		{
			printf("%7d", i);
		} 
*/
		if(i%9==0) res9+=i; //9�� ����� �߷�����
		else if(i%8==0) res8+=i;
		else if(i%7==0) res7+=i;
		else if(i%6==0) res6+=i;
		else if(i%5==0) res5+=i;
		else if(i%4==0) res4+=i;
		else if(i%3==0) res3+=i;
		else if(i%2==0) res2+=i;
		else res1+=i;
	}
	//printf("\n�Դϴ�.\n\n");
	
	printf("�ݺ����� �̿��� ���� ���\n");
	printf("a = %d\nb = %d\n", t, b);
	printf("9�� ����� �� = %d\n", res9);
	printf("8�� ����� �� = %d\n", res8);
	printf("7�� ����� �� = %d\n", res7);
	printf("6�� ����� �� = %d\n", res6);
	printf("5�� ����� �� = %d\n", res5);
	printf("4�� ����� �� = %d\n", res4);
	printf("3�� ����� �� = %d\n", res3);
	printf("2�� ����� �� = %d\n", res2);
	printf("���������� �� = %d\n", res1);
	
	return 0;
	
	
	
	
	
	
	
	 
	
	while(a<=b)
	{
		result = result + a;
		a = a + 1;
		//result += a++;
	}
	
	printf("[while]���� �̿��� ���� ���\n");
	printf("a = %d\nb = %d\n", t, b);
	printf("result = %d\n", result);
	
	//=========================================//
	
	result=0;
	
	int n;
	for(n=a;a<=b;a++)
	{
		result+= a;
	}	
	
	printf("[for]���� �̿��� ���� ���\n");
	printf("a = %d\nb= %d\n",n,b);
	printf("result = %d\n",result);
	
	//if(a>5) //a�� 5���� ū�� ?
	//if(a<10) //a�� 10���� ������? 
	
	return 0;
	//�Լ��� ������ return�� �����ֱ�.
	//�����ص� ������ ������ �鿩�ֱ�. 
}

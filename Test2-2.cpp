#include <stdio.h>

int main()
{
	int Num;
	
	for(int i;i<=9;i++)
	{
		switch(i)
		{
			case 1:
				printf(">1 : One\n");
				break;
			case 2:
				printf(">2 : Two\n");
				break;
			case 3:
				printf(">3 : Three\n");
				break;
			case 4:
				printf(">4 : Four\n");
				break;
			case 5:
				printf(">5 : Five\n");
				break;
			case 6:
				printf(">6 : Six\n");
				break;
			case 7:
				printf(">7 : Seven\b");
				break;
			case 8:
				printf(">8 : Eight\n");
				break;
			case 9:
				printf(">9 : Nine\n");
				break;
			default:
				printf("�����ϼ̽��ϴ�\n");
				break;
		}
	}
	
	while(1)
	{
		printf("���� Ű�� ��������. �����÷��� '0' Ű�� ��������. ");
		scanf("%d", &Num);
		
		if(Num==0) break;
		
		switch(Num)
		{
			case 1:
				printf(">1 : One\n");
				break;
			case 2:
				printf(">2 : Two\n");
				break;
			case 3:
				printf(">3 : Three\n");
				break;
			case 4:
				printf(">4 : Four\n");
				break;
			case 5:
				printf(">5 : Five\n");
				break;
			case 6:
				printf(">6 : Six\n");
				break;
			case 7:
				printf(">7 : Seven\b");
				break;
			case 8:
				printf(">8 : Eight\n");
				break;
			case 9:
				printf(">9 : Nine\n");
				break;
			default:
				printf("�����ϼ̽��ϴ�\n");
				break;
		}
	}
	
	return 0;
}

#include <stdio.h>

int main()
{
	
	printf("My age : %d \n", 20);
	printf("%d is my point \n", 100);
	printf("Good \nmorning \neverybody\n");
	
	printf("�� �̸��� %s �̱���\n\n", "ȫ�浿");
	printf("�� ���̴¿� %d�Դϴ�.", 9);

	printf("\\a : ����� �߻�\n\n\n\n");
	
	printf("%-8d %d %8d \n",123,456,789);
	printf("�Ǽ��� ��� : %8.2f %10.3f \n\n\n\n",3.14159265,456.789123);
	//%8.2f���� 8�� �Ҽ������� ���Ե� �迭 
	//��� : 3.14 456.789 / 456.789�� �� 7�ڸ��� �տ� ������ 3�ڸ��� ���� ___456.789
	 
	printf("data type �� byte ��(char) : %d \n",sizeof(char));
	printf("data type �� byte ��(int) : %d \n",sizeof(int));
	printf("data type �� byte ��(long) : %d \n",sizeof(long));
	printf("data type �� byte ��(float) : %d \n",sizeof(float));
	printf("data type �� byte ��(double) : %d \n",sizeof(double));
		
} 

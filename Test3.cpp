#include <stdio.h>
#include "MyHeader.h"

int main()
{
	int key; //�Է¹ޱ� ���� ���� ����
	int i,j,k; //���� ��� ����
	
	while(1)
	{
		//while���� ���鋚 break������ ���� ����� �� ��(���� ����ؾ� �� ��)
		
		scanf("%c", &key); //%s�� ���ڿ�
		// scanf �Լ��� [Enter] Ű�� �Է��� ���� �˻�
		// ���� ���� ���� ó���� �ι� �Է����� ó�� 
		if(key == 'z') break;
		if(key != 13)func1(key); // [Enter] ����
		// Ű���� ���ۿ� �����ִ� [Enter] ó����� 
	} 
	
	return 0;
}

void func1(int k)
{
	if(k>='A' && k<='Z') //�빮������ �˻�
	{
		int a;
		a=k-32;
		
		printf(">%c : �빮��", a);
	
	} 
}

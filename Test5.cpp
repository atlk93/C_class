#include <stdio.h>
#include <string.h>
#include <stdlib.h>


	// �Լ��� ���� : 
	// �Լ��� : sorting 
	// return type : int : 0 (normal) : -1 (ERROR)
	// input : int array ���� �迭, count �迭��� ���� 
	// 
	//sorting : �������� ����
	// 1,3,5,7,9,2,4,6,8,0  -> 0,1,2,...7,8,9
	// ��(��)��ó�� : ����,��� �������� ��� ����
	//             --> ������� ��� 
	// 1. �迭�� �����͸� ž�� --> �Է�, ���� �ε�, DB
	// 2. �ε����� ���� ������ �����Ϳ� ��
	//        --> ���� ���� (ū) ���� swap
	// 3. �迭 ��ü�� ���Ͽ� 2�� ������ �ݺ�

/*
int sorting(int *array, int count)
{
	int i,j,k;

	for(int i=0;i<count-1;i++) //�迭�� �� ��� 
	{
		for(j=i+1;j<count;j++) //�迭�� ������ 
		{
			if(*(array+i) > *(array+j)) // array[i]
			swap(array+i, array+j);
		}
	}
}	
*/ 

	// �Լ��� : int Prompt (char *pt, int *ret)
	// return type : int : �Էµ� ������, ������ ���� ret�ε� ���� 
	// input : char *pt : ��� ���ڿ�(�ȳ�����),
	//		   int *ret : ��ȯ�� ���� ������ �ּ� 
	/*
		pt�� ���޵� ���ڿ��� ����ϰ�(�ȳ�����)
		�Էµ� ���� ���ڿ��� ���ڷ� ��ȯ�Ͽ� ret ������ ��ȯ.
		+ �Լ��� return ������ ó��
		ex) Scanf(" %d", &r);
		    A = r;
			====> a = Prompt(" �Է��ϼ��� : ", &r); 
	*/
	
int Prompt(char *pt, int *ret)
{
	char buf[254];
	printf("%s", pt);
	
	fgets(buf, 254, stdin);
	*ret = atoi(buf);
	return *ret;
}

	// �Լ��� : int chrPos (char *str, char chr)
	// return type : int : chr������ ��ġ, ���ٸ� -1 
	// input : char *str : ��� ���ڿ� 
	//		   char chr : ã�� ���� 
	/*
		��� : str�� ���޵� ���ڿ� �߿��� chr ���ڸ� 
			   �˻��Ͽ� �ش� ��ġ�� ��ȯ(zero base)
			   �˻����� ������ -1�� ��ȯ  
	*/
int chrPos(char *str, char chr)
{ // *str = "abcdefghijklmn"; chr='d'; 
	for(int i=0;*(str+i)!=NULL;i++)
	{
		if(*(str+i) == chr) return i;
	}
	return -1;
	
	/* while�� ���� 
	int i,j,k;
	i=0;
	while(*(str+i))
	{
		if(*(str+i++) == chr) return i-1;
	}
	
	return -1;	
	*/
}  
	// �Լ��� : int strPos (char *str, char *s1);
	// return type : int : s1 ������ ��ġ, ���ٸ� -1 
	// input : char *str : ��� ���ڿ� 
	//		   char s1 : ã�� ���� 
	/* === ���� ���� ================================= 
		��� : str�� ���޵� ���ڿ��߿��� s1 ���ڿ���
			   �˻��Ͽ� �ش� ��ġ�� ��ȯ(zero base)
			   �˻����� ������ -1�� ��ȯ 
		1. str���� s1�� ù���ڰ� �ִ� ��ġ�� �˻�.
		2. �ش� ��ġ���� strncmp�� �̿��Ͽ� ��
		   ������ return i; �ƴϸ� �ٽ� 1��.
		3. ���� ������ ������ -1 
		
	*/
	
	
	
int strPos(char *str, char *s1)
{	//	*str = "abcdefghijklmn"; s1="acdb"; 
	int i,j,k,p;
	
	for(int i=0;*(str+i); i+=p)
	{
		p = chrPos(str+i,*s1);
		if (p == -1) return -1;
		if(strncmp(str+p,s1,strlen(s1)) == 0) return p+i;
	}
	return -1;
}


int main()
{

	int a,b,c;
	char *str = "abcdefgacdbhijklmn";
	char *s1 = "acdb";
	printf("���ڿ� : %s\n",str);
	printf("%c�� ��ġ�� %d�Դϴ�\n",'e',chrPos(str,'e'));
	printf("%c�� ��ġ�� %d�Դϴ�\n",'s1',strPos(str,s1));
		
	/* chrPos
	int a,b,c;
	char *str = "abcdefghijklmn";
	printf("���ڿ� : %s\n", str);
	printf("%c�� ��ġ�� %d�Դϴ�\n", 'e', chrPos(str,'e')); //4
	printf("%c�� ��ġ�� %d�Դϴ�\n", 'o', chrPos(str,'o')); //-1
	*/
	
	/*prompt���� 
	int a,b, c;
	Prompt("A�� �Է��ϼ���", &a);
	c = Prompt("B�� �Է��ϼ���", &b);
	
	printf("A:%d  B:%d  C:%d", a,b,c);
	*/
	
	/* sort
	int i,j,k;
	int arr[] = { 1,3,5,7,9,2,4,0,8,6};
	
	int n = sizeof(arr) / sizeof(int); // macro function
	printf("�� ������ : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	
	sorting(arr,n);
	
	printf("���� ������ : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	*/
	 
	// ASCII �ڵ�ǥ�� ����ϴ� ���α׷�
	// printf �Լ��� ��ȯ�� (%c) �̿� 
	// 7,8,9,10,13 �ڵ� ���� ó�� -----> ' ' (���鹮�ڸ� �־��ش�.) 
	/*
	//ASCII CODE �����ٷ� ����ϱ� 
	int i,j,k,m,m1;
	int n = 4; //ĭ �� 
	k = (128-1) /n + 1; // (��°���-1)/n+1 
	
	for(i=0;i<k;i++) // 1ĭ���� ��� --- 4ĭ Ȥ�� nĭ���� .. 
	{
		for(j=0;j<n;j++) //for(j=i;j<128;j+=k)
		{
			m = i+j*k; // i�� jĭ�� ��µ� ���� 
			m1 = m;
			// m1 = m = i+j*k;
			if(m == 7 || m == 8 || m == 9 || m == 10 || m == 13) m1 = 0x20;
			if(m<128) printf("%3d [%02x]: %c     ", m, m, m1); 	// ���� ���� ��� 
		} // m == (7||8||9)
		printf("\n"); 
	}
	*/
	
	/* ASCII CODE ���ٷ� ����ϱ� 
	for(i=0;i<128;i++)
	{
		printf("%3d [%02x]: %c\n", i, i, i); // %3d > �ϳ��Ǽ��ڸ��� 3�ڸ��� 10������ ����Ѵ� 
	}
	*/
	return 0;
	
} 

#include <stdio.h>

// �����ͺκ�
/* 
int main(void)
{
	int aa=2000;
	int a=2005;
	int b=2021;
	int *pA=&a;
	void *vp;
	
	printf("pA : %08x \n", pA); // %08x : 8�ڸ��� 16���� ǥ�� 
	printf("&a : %08x \n", &a); //        �� ������ 0���� ä�� (�տ� 0�� ���༭) 
	
	(*pA)++; //a++�� ���� �ǹ̸� ���Ѵ�. 
	
	printf("*a   : %d \n", a);
	printf("*pA  : %d \n", *pA);
	
	vp = pA++; // a ���� ������ �ּ� 
	printf("pA   : %08x \n", pA); // %08x : 8�ڸ��� 16���� ǥ�� 
	printf("*pA  : %d \n", *pA);
	printf("vp   : %08x \n", vp++);
	printf("vp   : %08x \n", vp++);
	
	return 0;
}
*/


/*������2,swap 
int GetMin(int *p, int n) 
{
	int min=*p;
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
		if(min > *(p+i)) min = *(p+i);
		//if(min > p[i]) min = p[i];
	}	
	
	return min;
}

void swap(int *a, int *b)
{
	// a�� b ������ ��ȯ(swap) 
	int c=*a;
	*a=*b;
	*b=c;
} 

int main()
{
	int arr[5];
	int min;
	 
	printf("5���� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d %d %d %d", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4]); //������ �ּҸ� �����ֱ� 
	
	min = GetMin(arr, 5); //arr�� 5���� �����Ͱ��� �ִ� 
	printf("�Էµ� ������ ���� ���� ���� %d�Դϴ�\n", min);
	
	printf("-------------------------------------\n");
	printf("�Էµ� ������ ó�� �� ���� %d�� %d�Դϴ�\n", arr[0],arr[1]);
	
	swap(arr,arr+1);
	//swap(&arr[0],&arr[1]); //&swap���� �����ͷ� �ޱ⶧���� �ּҸ� ������ 
	printf("�Էµ� ������ �� ���� ��ȯ�ϸ� %d�� %d�Դϴ� \n",arr[0],arr[1]);
	
	
	return 0;
}
*/
int GetCD(int num, int *arr)
{
	int i,j,k;
	
	for(i=1,j=0;i<=num;i++)
	{
		if(num%i == 0)
		{
			*(arr+j) = i;
			j++;
			// *arr++=i; 
		}
	}
	
	return j;
}

int GetGCD(int *arr1, int n1, int *arr2, int n2)
{
	int i,j,k;
	
	for(i=n1-1;i>=0;i--) //for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(*(arr1+i) == *(arr2+j)) return *(arr1+i);
		}
	}
	
	return -1; //error�߻� ��� 
}

int GetGCD2(int n1, int n2)
{	
	for(int i=n1;i>0;i--)
	{
		if(n1%i == 0 && n2%1 == 0) return i;
	}	
}

int main()
{
	int num1, num2;
	int n1, n2, MaxNum;
	int arr1[100],arr2[100];
	
	printf("2���� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d",&num1,&num2);
	
	n1 = GetCD(num1, arr1); // n1 : 1st ���� ��� ���� 
	n2 = GetCD(num2, arr2); // n2 : 2st ���� ��� ���� 
	
	MaxNum = GetGCD(arr1,n1,arr2,n2);
	
	// num1�� ����� num2�� ��� ��� 
	printf("%d�� ��� : ", num1);
	for(int i=0;i<n1;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n%d�� ��� : ", num2);
	for(int i=0;i<n2;i++)
	{
		printf("%d ",arr2[i]);
	}
	
	printf("\n\n%d�� %d�� �ִ������� %d�Դϴ�.\n", num1, num2, MaxNum);
	
	return 0;
} 

#include <stdio.h>

// 포인터부분
/* 
int main(void)
{
	int aa=2000;
	int a=2005;
	int b=2021;
	int *pA=&a;
	void *vp;
	
	printf("pA : %08x \n", pA); // %08x : 8자리의 16진수 표기 
	printf("&a : %08x \n", &a); //        빈 공간은 0으로 채움 (앞에 0을 써줘서) 
	
	(*pA)++; //a++와 같은 의미를 지닌다. 
	
	printf("*a   : %d \n", a);
	printf("*pA  : %d \n", *pA);
	
	vp = pA++; // a 변수 다음의 주소 
	printf("pA   : %08x \n", pA); // %08x : 8자리의 16진수 표기 
	printf("*pA  : %d \n", *pA);
	printf("vp   : %08x \n", vp++);
	printf("vp   : %08x \n", vp++);
	
	return 0;
}
*/


/*포인터2,swap 
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
	// a와 b 변수의 교환(swap) 
	int c=*a;
	*a=*b;
	*b=c;
} 

int main()
{
	int arr[5];
	int min;
	 
	printf("5개의 숫자를 입력하세요.\n");
	scanf("%d %d %d %d %d", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4]); //변수의 주소를 보내주기 
	
	min = GetMin(arr, 5); //arr에 5개의 데이터값이 있다 
	printf("입력된 숫자중 가장 작은 값은 %d입니다\n", min);
	
	printf("-------------------------------------\n");
	printf("입력된 숫자중 처음 두 수는 %d와 %d입니다\n", arr[0],arr[1]);
	
	swap(arr,arr+1);
	//swap(&arr[0],&arr[1]); //&swap에서 포인터로 받기때문에 주소를 보내줌 
	printf("입력된 숫자중 두 수를 교환하면 %d와 %d입니다 \n",arr[0],arr[1]);
	
	
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
	
	return -1; //error발생 고려 
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
	
	printf("2개의 숫자를 입력하세요.\n");
	scanf("%d %d",&num1,&num2);
	
	n1 = GetCD(num1, arr1); // n1 : 1st 수의 약수 갯수 
	n2 = GetCD(num2, arr2); // n2 : 2st 수의 약수 갯수 
	
	MaxNum = GetGCD(arr1,n1,arr2,n2);
	
	// num1의 약수와 num2의 약수 출력 
	printf("%d의 약수 : ", num1);
	for(int i=0;i<n1;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n%d의 약수 : ", num2);
	for(int i=0;i<n2;i++)
	{
		printf("%d ",arr2[i]);
	}
	
	printf("\n\n%d와 %d의 최대공약수는 %d입니다.\n", num1, num2, MaxNum);
	
	return 0;
} 

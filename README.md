# C_class
IoT-2021-1 Class resource
2021-03-02 IoT Class daily report

2021/03/03_2일차

```
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
				printf("수고하셨습니다\n");
				break;
		}
	}
	
	while(1)
	{
		printf("숫자 키를 누르세요. 끝내시려면 '0' 키를 누르세요. ");
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
				printf("수고하셨습니다\n");
				break;
		}
	}
	
	return 0;
}
```

2021/03/04 3일차
```
Test3
#include <stdio.h>
#include "MyHeader.h"

int main()
{
	int key; //입력받기 위한 변수 선언
	int i,j,k; //내부 사용 변수
	
	while(1)
	{
		//while문을 만들떄 break조건을 먼저 만들어 줄 것(가장 고려해야 할 점)
		
		scanf("%c", &key); //%s는 문자열
		// scanf 함수는 [Enter] 키로 입력의 끝을 검사
		// 따라서 단일 문자 처리시 두번 입력으로 처리 
		if(key == 'z') break;
		if(key != 13)func1(key); // [Enter] 무시
		// 키보드 버퍼에 남아있는 [Enter] 처리방법 
	} 
	
	return 0;
}

void func1(int k)
{
	if(k>='A' && k<='Z') //대문자인지 검사
	{
		int a;
		a=k-32;
		
		printf(">%c : 대문자", a);
	
	} 
}
```
```
Test3-2
#include <stdio.h>
#include "MyHeader.h"

int main()
{
	int key; //입력받기 위한 변수 선언
	int i,j,k; //내부 사용 변수
	
	while(1)
	{
		//while문을 만들떄 break조건을 먼저 만들어 줄 것(가장 고려해야 할 점)
		
		scanf("%c", &key); //%s는 문자열
		// scanf 함수는 [Enter] 키로 입력의 끝을 검사
		// 따라서 단일 문자 처리시 두번 입력으로 처리 
		if(key == 'z') break;
		if(key != 13)func1(key); // [Enter] 무시
		// 키보드 버퍼에 남아있는 [Enter] 처리방법 
	} 
	
	return 0;
}

void func1(int k)
{
	if(k>='A' && k<='Z') //대문자인지 검사
	{
		int a;
		a=k-32;
		
		printf(">%c : 대문자", a);
	
	} 
}
```
```
MyHader.h
void func1(int k);
```



2021/03/05 4일차
```
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
```

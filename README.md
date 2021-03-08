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

2021/03/08 5일차
```
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


	// 함수명 정의 : 
	// 함수명 : sorting 
	// return type : int : 0 (normal) : -1 (ERROR)
	// input : int array 정수 배열, count 배열요소 갯수 
	// 
	//sorting : 데이터의 정렬
	// 1,3,5,7,9,2,4,6,8,0  -> 0,1,2,...7,8,9
	// 성(실)적처리 : 총점,평균 기준으로 등수 판정
	//             --> 순서대로 출력 
	// 1. 배열에 데이터를 탑재 --> 입력, 파일 로드, DB
	// 2. 인덱스에 따라 이후의 데이터와 비교
	//        --> 가장 작은 (큰) 값과 swap
	// 3. 배열 전체에 대하여 2번 과정을 반복

/*
int sorting(int *array, int count)
{
	int i,j,k;

	for(int i=0;i<count-1;i++) //배열의 비교 대상 
	{
		for(j=i+1;j<count;j++) //배열의 나머지 
		{
			if(*(array+i) > *(array+j)) // array[i]
			swap(array+i, array+j);
		}
	}
}	
*/ 

	// 함수명 : int Prompt (char *pt, int *ret)
	// return type : int : 입력된 정수값, 동일한 값이 ret로도 전달 
	// input : char *pt : 출력 문자열(안내문자),
	//		   int *ret : 반환할 정수 변수의 주소 
	/*
		pt로 전달된 문자열을 출력하고(안내문자)
		입력된 정수 문자열을 숫자로 변환하여 ret 값으로 반환.
		+ 함수의 return 값으로 처리
		ex) Scanf(" %d", &r);
		    A = r;
			====> a = Prompt(" 입력하세요 : ", &r); 
	*/
	
int Prompt(char *pt, int *ret)
{
	char buf[254];
	printf("%s", pt);
	
	fgets(buf, 254, stdin);
	*ret = atoi(buf);
	return *ret;
}

	// 함수명 : int chrPos (char *str, char chr)
	// return type : int : chr문자의 위치, 없다면 -1 
	// input : char *str : 대상 문자열 
	//		   char chr : 찾을 문자 
	/*
		기능 : str로 전달된 문자열 중에서 chr 문자를 
			   검색하여 해당 위치를 반환(zero base)
			   검색되지 않으면 -1을 반환  
	*/
int chrPos(char *str, char chr)
{ // *str = "abcdefghijklmn"; chr='d'; 
	for(int i=0;*(str+i)!=NULL;i++)
	{
		if(*(str+i) == chr) return i;
	}
	return -1;
	
	/* while문 버전 
	int i,j,k;
	i=0;
	while(*(str+i))
	{
		if(*(str+i++) == chr) return i-1;
	}
	
	return -1;	
	*/
}  
	// 함수명 : int strPos (char *str, char *s1);
	// return type : int : s1 문자의 위치, 없다면 -1 
	// input : char *str : 대상 문자열 
	//		   char s1 : 찾을 문자 
	/* === 로직 구현 ================================= 
		기능 : str로 전달된 문자열중에서 s1 문자열을
			   검색하여 해당 위치를 반환(zero base)
			   검색되지 않으면 -1을 반환 
		1. str에서 s1의 첫문자가 있는 위치를 검색.
		2. 해당 위치에서 strncmp를 이용하여 비교
		   같으면 return i; 아니면 다시 1번.
		3. 만일 끝까지 없으면 -1 
		
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
	printf("문자열 : %s\n",str);
	printf("%c의 위치는 %d입니다\n",'e',chrPos(str,'e'));
	printf("%c의 위치는 %d입니다\n",'s1',strPos(str,s1));
		
	/* chrPos
	int a,b,c;
	char *str = "abcdefghijklmn";
	printf("문자열 : %s\n", str);
	printf("%c의 위치는 %d입니다\n", 'e', chrPos(str,'e')); //4
	printf("%c의 위치는 %d입니다\n", 'o', chrPos(str,'o')); //-1
	*/
	
	/*prompt관련 
	int a,b, c;
	Prompt("A를 입력하세요", &a);
	c = Prompt("B를 입력하세요", &b);
	
	printf("A:%d  B:%d  C:%d", a,b,c);
	*/
	
	/* sort
	int i,j,k;
	int arr[] = { 1,3,5,7,9,2,4,0,8,6};
	
	int n = sizeof(arr) / sizeof(int); // macro function
	printf("원 데이터 : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	
	sorting(arr,n);
	
	printf("정렬 데이터 : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	*/
	 
	// ASCII 코드표를 출력하는 프로그램
	// printf 함수의 변환자 (%c) 이용 
	// 7,8,9,10,13 코드 예외 처리 -----> ' ' (공백문자를 넣어준다.) 
	/*
	//ASCII CODE 여러줄로 출력하기 
	int i,j,k,m,m1;
	int n = 4; //칸 수 
	k = (128-1) /n + 1; // (출력갯수-1)/n+1 
	
	for(i=0;i<k;i++) // 1칸으로 출력 --- 4칸 혹은 n칸으로 .. 
	{
		for(j=0;j<n;j++) //for(j=i;j<128;j+=k)
		{
			m = i+j*k; // i줄 j칸에 출력될 문자 
			m1 = m;
			// m1 = m = i+j*k;
			if(m == 7 || m == 8 || m == 9 || m == 10 || m == 13) m1 = 0x20;
			if(m<128) printf("%3d [%02x]: %c     ", m, m, m1); 	// 단일 문자 출력 
		} // m == (7||8||9)
		printf("\n"); 
	}
	*/
	
	/* ASCII CODE 한줄로 출력하기 
	for(i=0;i<128;i++)
	{
		printf("%3d [%02x]: %c\n", i, i, i); // %3d > 하나의숫자리를 3자리로 10진수로 출력한다 
	}
	*/
	return 0;
	
} 
```

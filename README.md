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

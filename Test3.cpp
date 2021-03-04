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

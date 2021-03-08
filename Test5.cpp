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

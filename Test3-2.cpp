#include <stdio.h>
#include <conio.h>

void ConvertChr(char buf[])
{
	for(int i=0;buf[i]!=0;i++)
	{
		char a=buf[i];
		printf("%c",a);
	}
} 
 
void CharPos(char buf[], int n)
{
	printf("%s (%d) ---> %c \n\n", buf, n, *(buf+n)); // *(buf+n) 은 buf[n]으로 쓸 수 있음 
}
/*
void ConvertChr(char buf[])
{
	int i,j,k;
	
	for(i=0;buf[i]!=0;i++) // buf[i]번째 있는 데이터가 0이면 끝내라는 뜻 char 형식에서는 for를 이런식으로 씀 
	{
		char a=buf[i];
		if(a>96 && a<123) a-=32; // a가 소문자이면 
		printf("%c ", a); 
	}
}
*/

int main(void)
{
	
	char buf[1024];
	int i,j,k;
	
	scanf("%s", buf); // [Enter] 키를 눌러서 값을 되돌림
	printf("입력 문자열은 %s입니다\n\n\n\n", buf);
	ConvertChr(buf);
	
	while(1)
	{
		char ch=getch(); // 단일 키값을 되돌림. 
		if(ch<48 || ch>57) break; 
		CharPos(buf, ch-48); // ch-48 : 숫자 키값을 인덱스 값으로 변환 
	}
	
	return 0;
	
	/*
	char str1[5]="Good";
	char str2[]="morning";
	
	printf("%s \n", str1);
	printf("%s %s \n", str1, str2);
	*/
	
	int a[3][2]={ {1, 2}, {3, 4}, {5, 6}};
	
	printf("a[0]    : %d \n", a[0]);
	printf("*(a+0)  : %d \n", *(a+0));
	
	printf("a[1]    : %d \n", a[1]);
	printf("*(a+1)  : %d \n", *(a+1));
	
	printf("a[2]    : %d \n", a[2]);
	printf("*(a+2)  : %d \n", *(a+2));
	
	printf("%d, %d \n", a[1][0], (*(a+1))[0]);
	printf("%d, %d \n", a[1][2], *(a[1]+2));
	printf("%d, %d \n", a[2][1], *(*(a+2)+1));
	
	return 0;
}

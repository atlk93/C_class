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
	printf("%s (%d) ---> %c \n\n", buf, n, *(buf+n)); // *(buf+n) �� buf[n]���� �� �� ���� 
}
/*
void ConvertChr(char buf[])
{
	int i,j,k;
	
	for(i=0;buf[i]!=0;i++) // buf[i]��° �ִ� �����Ͱ� 0�̸� ������� �� char ���Ŀ����� for�� �̷������� �� 
	{
		char a=buf[i];
		if(a>96 && a<123) a-=32; // a�� �ҹ����̸� 
		printf("%c ", a); 
	}
}
*/

int main(void)
{
	
	char buf[1024];
	int i,j,k;
	
	scanf("%s", buf); // [Enter] Ű�� ������ ���� �ǵ���
	printf("�Է� ���ڿ��� %s�Դϴ�\n\n\n\n", buf);
	ConvertChr(buf);
	
	while(1)
	{
		char ch=getch(); // ���� Ű���� �ǵ���. 
		if(ch<48 || ch>57) break; 
		CharPos(buf, ch-48); // ch-48 : ���� Ű���� �ε��� ������ ��ȯ 
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

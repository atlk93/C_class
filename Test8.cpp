#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i,j,k;
	char *str = "..........";
	char ch = '|';
	
	while(1)
	{
		k = getch() - 0x30;	// '0' ~ '9' : 30h~39h
		if(k<0 || k>9) break;
		
		for(i=0;i<10;i++)
		{
			if(i == k) printf("%c", ch);
			else	   printf("%c",*(str+i));
		}
		printf("\r");
		//printf("%c",13);
	}
	
	return 0;
}

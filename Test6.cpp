#include <stdio.h>
#include <io.h>

int main()
{
	FILE *fp = fopen("C:\\C_Class\\Data\\test.txt","rb");
	//c에서는 \를 두개씩 써줘야 한다.
	//문자열 사이에 \가 나오면 특수변환자로 해석하기 때문.
	//해당 경로에 test.txt를 생성한다. 
	 
	// 아래는 ab일 경우 
	// fprintf(fp, "Hello Everybody!");
	
	char buf[256];
	
	for(int i=0;i<4;i++)
	{
		fscanf(fp, "%s", buf);
		printf("%s\n",buf);
	}
	
	fclose(fp);	
}

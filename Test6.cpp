#include <stdio.h>
#include <io.h>

int main()
{
	FILE *fp = fopen("C:\\C_Class\\Data\\test.txt","rb");
	//c������ \�� �ΰ��� ����� �Ѵ�.
	//���ڿ� ���̿� \�� ������ Ư����ȯ�ڷ� �ؼ��ϱ� ����.
	//�ش� ��ο� test.txt�� �����Ѵ�. 
	 
	// �Ʒ��� ab�� ��� 
	// fprintf(fp, "Hello Everybody!");
	
	char buf[256];
	
	for(int i=0;i<4;i++)
	{
		fscanf(fp, "%s", buf);
		printf("%s\n",buf);
	}
	
	fclose(fp);	
}

void func1(int k);
void swap(int *a, int *b);
int chrPos(char *str, char chr);

void swap(int *a, int *b)
{
	// a�� b ������ ��ȯ(swap) 
	int c=*a;
	*a=*b;
	*b=c;
} 

int chrPos(char *str, char chr)
{ // *str = "abcdefghijklmn"; chr='d'; 
	for(int i=0;*(str+i)!=NULL;i++)
	{
		if(*(str+i) == chr) return i;
	}
	return -1;	
	
	/* while�� ���� 
	int i,j,k;
	i=0;
	while(*(str+i))
	{
		if(*(str+i++) == chr) return i-1;
	}
	
	return -1;	
	*/
} 

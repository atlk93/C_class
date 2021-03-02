#include <stdio.h>

int main()
{
	
	printf("My age : %d \n", 20);
	printf("%d is my point \n", 100);
	printf("Good \nmorning \neverybody\n");
	
	printf("내 이름은 %s 이구요\n\n", "홍길동");
	printf("제 나이는요 %d입니다.", 9);

	printf("\\a : 경고음 발생\n\n\n\n");
	
	printf("%-8d %d %8d \n",123,456,789);
	printf("실수의 출력 : %8.2f %10.3f \n\n\n\n",3.14159265,456.789123);
	//%8.2f에서 8은 소수점까지 포함된 배열 
	//출력 : 3.14 456.789 / 456.789는 총 7자리로 앞에 공백이 3자리가 있음 ___456.789
	 
	printf("data type 별 byte 수(char) : %d \n",sizeof(char));
	printf("data type 별 byte 수(int) : %d \n",sizeof(int));
	printf("data type 별 byte 수(long) : %d \n",sizeof(long));
	printf("data type 별 byte 수(float) : %d \n",sizeof(float));
	printf("data type 별 byte 수(double) : %d \n",sizeof(double));
		
} 

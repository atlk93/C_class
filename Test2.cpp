#include <Stdio.h>

int main()
{
	while(1)
	{
	int num;
	scanf("%d", &num);
	
	switch (num)
	{
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		case 6:
			printf("Six\n");
			break;
		case 7:
			printf("Seven\n");
			break;
		case 8:
			printf("Eight\n");
			break;
		case 9:	
			printf("Nine\n");
			break;
		case 0:
			return 0;
		}
	
	}	
	return 0;
	
	//int a=1, b=10;
	//int t=a;
	
	int a=1, b=100, t;
	int result=0;
	
	
	printf("두 수 입력\n");
	scanf("%d %d", &a, &b); 
	printf("%d에서 %d 사이의 5의 배수는 \n", a, b);
/*
	a=10;
	b=20;
	
	result=a+b;

	printf("a = %d\nb= %d\n",a,b);
	printf("두 수의 덧셈 결과는 result = %d + %d = %d\n",a,b,result);
*/

	
	t=a; // a의 초기값 저장 
	
	int res1=0, res2=0; // res1 홀수합, res2 짝수합 
	int res3=0, res4=0, res5=0, res6=0, res7=0, res8=0, res9=0;
	
	for(int i=a;i<=b;i++)
	{
/*		if(i%2==0) //짝수 (i%2만 쓰면 i%2가 0이 아닐때와 같은 뜻) 
		{
			res2 += i;
		} 
		else //홀수 
		{
			res1 += i;
		}
		if(i%5==0) //5의 배수
		{
			printf("%7d", i);
		} 
*/
		if(i%9==0) res9+=i; //9의 배수만 추려내기
		else if(i%8==0) res8+=i;
		else if(i%7==0) res7+=i;
		else if(i%6==0) res6+=i;
		else if(i%5==0) res5+=i;
		else if(i%4==0) res4+=i;
		else if(i%3==0) res3+=i;
		else if(i%2==0) res2+=i;
		else res1+=i;
	}
	//printf("\n입니다.\n\n");
	
	printf("반복문을 이용한 누적 계산\n");
	printf("a = %d\nb = %d\n", t, b);
	printf("9의 배수의 합 = %d\n", res9);
	printf("8의 배수의 합 = %d\n", res8);
	printf("7의 배수의 합 = %d\n", res7);
	printf("6의 배수의 합 = %d\n", res6);
	printf("5의 배수의 합 = %d\n", res5);
	printf("4의 배수의 합 = %d\n", res4);
	printf("3의 배수의 합 = %d\n", res3);
	printf("2의 배수의 합 = %d\n", res2);
	printf("나머지수의 합 = %d\n", res1);
	
	return 0;
	
	
	
	
	
	
	
	 
	
	while(a<=b)
	{
		result = result + a;
		a = a + 1;
		//result += a++;
	}
	
	printf("[while]문을 이용한 누적 계산\n");
	printf("a = %d\nb = %d\n", t, b);
	printf("result = %d\n", result);
	
	//=========================================//
	
	result=0;
	
	int n;
	for(n=a;a<=b;a++)
	{
		result+= a;
	}	
	
	printf("[for]문을 이용한 누적 계산\n");
	printf("a = %d\nb= %d\n",n,b);
	printf("result = %d\n",result);
	
	//if(a>5) //a가 5보다 큰가 ?
	//if(a<10) //a가 10보다 작은가? 
	
	return 0;
	//함수의 끝에는 return을 적어주기.
	//생략해도 되지만 습관을 들여주기. 
}

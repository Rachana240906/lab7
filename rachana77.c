#include<stdio.h>
void palindrome(int n);
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	palindrome(n);
	return 0;
}
int reverse(int n)
{
	int reverse=0;
	while(n!=0)
	{
	int digit=n%10;
	reverse=(reverse*10)+digit;
	n=n/10;
	}
	return reverse;
}

void palindrome(int n)
{
	int i=reverse(n);
	if(n==i)
	{
		printf("It is palindrome number");
	}
	else
	{
		printf("it is not palindrome number");
	}
}

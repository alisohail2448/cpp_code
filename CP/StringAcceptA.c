#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = {"ababba"};
	int length = strlen(str);
	if (str[length - 1] == 'a')
	{
		printf("Accepted");
	}
	else
	{
		printf("Rejected");
		return 0;
	}
}
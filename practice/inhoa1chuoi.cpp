#include<stdio.h>
#include<string.h>
void upperCase (char str[])
	{
		for (int i=0;i<strlen(str);i++)
		if (str[i]>=97&&str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
int main ()
{
	char str[50];
	printf ("Enter String: ");
	gets(str);
	upperCase(str);
	printf ("String after uppercase: %s",str);
}

#include <stdio.h>

int isSpecial(char c)
{
	if (c == '$' || c == '#' || c == '!' || c == '&' || c == '@' || c == '%' || c == '*')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//remove all the special chars from a string
int main()
{
	int len = 0;
	scanf("%i", &len);
	char pass[len];	//password
	char parsedPass[len];	//password without special chars
	scanf("%s", pass);
	//incrementally scan the characters and check for special chars. Copy and skip special chars
	int i, k;
	for (i = 0, k = 0; i < len && k < len;)
	{
		if (!isSpecial(pass[i]))
		{
			parsedPass[i++] = pass[k++];
		}
		else
		{ ++k;
		}
	}
	printf("%s", parsedPass);

	return 0;
}

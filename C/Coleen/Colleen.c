#include <stdio.h>

void	outside_function()
{
	// Outside function comment
}

int main()
{
	// Inside main comment
	char *str="#include <stdio.h>%c%cvoid%coutside_function()%c{%c%c// Outside function comment%c}%c%cint main()%c{%c%c// Inside main comment%c%cchar *str=%c%s%c;%c%cprintf(str, 10, 10, 9, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 10);%c%creturn 0;%c}%c";

	printf(str, 10, 10, 9, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 10);
	return 0;
}

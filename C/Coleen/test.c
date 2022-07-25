#include <stdio.h>
char	*outside_function()
{
	// Outside function comment
	return "#include <stdio.h>%cchar%c*outside_function()%c{%c%c// Outside function comment%c%creturn %c%s%c;%c}%c%cint%cmain()%c{%c%c// Inside main comment%c%cchar%c*str=outside_function();%c%cprintf(str, 10, 9, 10, 10, 9, 10, 9, 34, str, 34, 10, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c%creturn 0;%c}%c";
}

int	main()
{
	// Inside main comment
	char	*str=outside_function();
	printf(str, 10, 9, 10, 10, 9, 10, 9, 34, str, 34, 10, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);
	return 0;
}

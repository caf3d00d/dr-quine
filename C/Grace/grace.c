#include <stdio.h>

#define start main

int	start()
{
	// Inside main comment
	FILE	*fp = fopen("Grace_kid.c", "w");
	char	*str = "#include <stdio.h>%c%c#define start main%c%cint%cstart()%c{%c%c// Inside main comment%c%cFILE%c*fp = fopen(%cGrace_kid.c%c, %cw%c);%c%cchar%c*str = %c%s%c;%c%cfprintf(fp, str, 10, 10, 10, 10, 9, 10, 10, 9, 10, 9, 9, 34, 34, 34, 34, 10, 9, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 10);%c%cfclose(fp);%c%creturn 0;%c}%c";
	fprintf(fp, str, 10, 10, 10, 10, 9, 10, 10, 9, 10, 9, 9, 34, 34, 34, 34, 10, 9, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 10);
	fclose(fp);
	return 0;
}

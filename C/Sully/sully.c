#include <stdio.h>
#include <stdlib.h>

int x = 5;

int main()
{
	char	name[10];
	sprintf(name, "sully_%d.c", x);
	FILE	*fp = fopen(name, "w");
	char	*str = "#include <stdio.h>%c#include <stdlib.h>%c%cint x = %d;%c%cint main()%c{%c%cchar%cname[10];%c%csprintf(name, %csully_%cd.c%c, x);%c%cFILE%c*fp = fopen(name, %cw%c);%c%cchar%c*str = %c%s%c;%c%cfprintf(fp, str, 10, 10, 10, x - 1, 10, 10, 10, 10, 9, 9, 10, 9, 34, 37, 34, 10, 9, 9, 34, 34, 10, 9, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 9, 9, 9, 10, 9, 9, 34, 37, 36, 37, 36, 37, 36, 34, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c%cfclose(fp);%c%cif (x > 0) {%c%c%cchar%ccmd[100];%c%c%csprintf(cmd, %cgcc -Wall -Wextra -Werror sully_%c1%cd.c -o Sully_%c1%cd ; ./Sully_%c1%cd%c, x);%c%c%csystem(cmd);%c%c}%c%creturn(0);%c}%c";
	fprintf(fp, str, 10, 10, 10, x - 1, 10, 10, 10, 10, 9, 9, 10, 9, 34, 37, 34, 10, 9, 9, 34, 34, 10, 9, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 9, 9, 9, 10, 9, 9, 34, 37, 36, 37, 36, 37, 36, 34, 10, 9, 9, 10, 9, 10, 9, 10, 10);
	fclose(fp);
	if (x > 0) {
		char	cmd[100];
		sprintf(cmd, "gcc -Wall -Wextra -Werror sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d", x);
		system(cmd);
	}
	return(0);
}

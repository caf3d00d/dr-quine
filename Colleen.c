#include <stdio.h>
int main(){
	char*str="#include <stdio.h>%cint main(){%cchar*str=%c%s%c;%cprintf(s, 10, 34, str, 34, 10);return 0;}";
	printf(str, 10, 10, 34, str, 34, 10);return 0;}

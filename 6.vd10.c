#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char line[80];
	printf("helloa\n");
	scanf("%s[^\n]",&line);
	printf("%s",line);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("The number 55 in various forms:\n");
	printf("Without any modifer: \n");
	printf("[%d]\n",555);
	printf("With - modifier :\n");
	printf("[%-d]\n",555);
	printf("With digit string 10 as modifier :\n");
	printf("[%10d]\n",555);
	printf("With 0 as modiflier : \n");
	printf("[%0d]\n",555);
	printf("With 0 and digt arting 10 as modifiers : \n");
	printf("[%010d]\n",555);
	printf("With -, 0 and digit string 10 as modifiers : \n");
	printf("[%-010d]\n",555);
	
	return 0;
}

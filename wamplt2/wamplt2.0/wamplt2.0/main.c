#include <stdio.h>
#include <windows.h>

int main(void) {
	char cmd[500];
	printf("All rights reserved (c) wolfy and mac");
	printf("\n");
	printf("\n");
	printf("Enter a command or path >>> ");
	scanf("%s", cmd);
	printf("\n");
	printf("\n");
	system(cmd);
	return 0;
}
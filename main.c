#include<stdio.h>
#include<process.h>
#include"str.h"
int main() {
	char a[8];
	setString(a,"ABC"); //aにabcをコピー
	printf("%s", a);
	system("pause > 0");
	return 0;
}
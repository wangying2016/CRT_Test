// test2Main.cpp
// compile with: cl /EHsc /W4 /MT test2Main.cpp test2dll.lib
#include <stdlib.h>
#include <stdio.h>

void readEnv();

int main(void)
{
	_putenv("MYLIB=c:\\mylib;c:\\yourlib");
	readEnv();
	system("pause");
}
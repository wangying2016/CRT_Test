// test2Dll.cpp
// compile with: cl /EHsc /W4 /MT /LD test2Dll.cpp
#include <stdio.h>
#include <stdlib.h>

__declspec(dllexport) void readEnv()
{
	char *libvar;
	size_t libvarsize;

	/* Get the value of the MYLIB enviroment variable. */
	_dupenv_s(&libvar, &libvarsize, "MYLIB");

	if (libvar != NULL)
		printf("New MYLIB variable is: %s\n", libvar);
	else
		printf("MYLIB has not been set.\n");
	free(libvar);
}
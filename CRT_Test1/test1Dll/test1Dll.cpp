// test1Dll.cpp
// compile with: cl /EHsc /W4 /MD /LD test1Dll.cpp
#include <stdio.h>

__declspec(dllexport) void writeFile(FILE *stream)
{
	char s[] = "this is a string\n";
	fprintf(stream, "%s", s);
	fclose(stream);
}
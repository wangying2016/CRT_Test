// test1Main.cpp
// compile with: cl /EHsc /W4 /MD test1Main.cpp test1Dll.lib
#include <stdio.h>
#include <process.h>
#include <stdlib.h>

void writeFile(FILE *stream);

int main(void)
{
	FILE *stream;
	errno_t err = fopen_s(&stream, "fprintf.out", "w");
	writeFile(stream);
	system("type fprintf.out");
	system("pause");
	return 0;
}
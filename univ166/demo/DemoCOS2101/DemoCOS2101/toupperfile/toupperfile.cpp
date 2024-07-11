#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	FILE   *in, *out;
	char   c1;

	in = fopen("D:/mydoc/cos2101/DemoCOS2101/Debug/test1.txt", "r");
	out = fopen("D:/mydoc/cos2101/DemoCOS2101/Debug/test1.out", "w");

	while ((c1 = getc(in)) != EOF) {
		char c2 = toupper(c1);
		putc(c2, out);
		printf("%c", c2);
	}
	fclose(in);
	fclose(out);

}

 
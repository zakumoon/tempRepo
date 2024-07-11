#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
line-1 10 c 10.5 text-info-1
line-2 20 c 20.51 text-info-2
line-3 30 c 31.5 text-info-3
*/
int main()
{
	FILE   *in, *out;
	char   c1;

	in = fopen("D:/mydoc/cos2101/DemoCOS2101/Debug/format.txt", "rt");
	out = fopen("D:/mydoc/cos2101/DemoCOS2101/Debug/format.out", "w");

	while ( !feof(in) ) {
		//line-1 10 c 10.5 text-info-1
		char txt1[100];
		int i1;
		char c1;
		float d1;
		char txt2[100];
		fscanf(in,"%s %d %c %f %s\n", txt1, &i1, &c1, &d1, txt2);
		fprintf(out, "%s %d %c %f %s\n", txt1, i1, c1, d1, txt2);
		fprintf(stdout, "%s %d %c %f %s\n", txt1, i1, c1, d1, txt2);
	}
	fclose(in);
	fclose(out);

}


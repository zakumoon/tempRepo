#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct prod {
	int cat_num;
	float cost;
};

int main()
{
	FILE *fp;
	struct prod product;

	struct prod a[3] = { {2,20.1},{4,40.1},{6,60.1} };
	struct prod k, *p = &k;

	fp = fopen("D:/mydoc/cos2101/DemoCOS2101/Debug/fread1.txt", "w+");
	// write the entire array into the file pointed to by fp
	fwrite(a, sizeof(product), 3, fp);
	// prepare for reading from the beginning of the file
	fseek(fp, SEEK_SET, 0);
	// read from the file one product at a time
	for (int i = 0; i < 3; i++) {
		fread(p, sizeof(product), 1, fp);
		printf(" product %d, cat_num=%d, cost=%f\n", i, p->cat_num, p->cost);
	}
	fclose(fp);
}




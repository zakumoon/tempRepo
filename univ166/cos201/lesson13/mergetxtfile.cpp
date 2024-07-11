#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int main()
{
	FILE *fileA,  /* first input file */
		*fileB,  /* second input file */
		*fileC; /*  output file to be created */
	int num1,  /* number to be read from first file */
		num2;  /* number to be read from second file */
	int f1, f2;

	/* Open files for processing */
	fileA = fopen("/home/zk/univ166/cos201/lesson13/classFile/class.txt", "r");
	fileB = fopen("/home/zk/univ166/cos201/lesson13/classFile/class1.txt", "r");
	fileC = fopen("/home/zk/univ166/cos201/lesson13/classFile/class2.txt", "w");

	/* As long as there are numbers in both files,
		read and compare numbersone by one.
		Write the smaller number to the output file and read the next number in the file from which the smaller number is read.
	*/
	float fnum1 , fnum2;
	f1 = fscanf(fileA, "%d %f", &num1, &fnum1);
	f2 = fscanf(fileB, "%d %f", &num2, &fnum2);
	while ((f1 != EOF) && (f2 != EOF)) {
		if (num1 < num2) {
			fprintf(fileC, "%d %f\n", num1);
			f1 = fscanf(fileA, "%d %f", &num1, &fnum1);
		}
		else if (num2 < num1) {
			fprintf(fileC, "%d %f\n", num2);
			f2 = fscanf(fileB, "%d %f ", &num2, &fnum2);
		}
		else {  /* numbs are equal:read from both files*/
			fprintf(fileC, "%d %f\n", num1);
			f1 = fscanf(fileA, "%d %f", &num1 , &fnum1);
			f2 = fscanf(fileB, "%d %f", &num2, &fnum2);
		}
	}
    fclose(fileA);
    fclose(fileB);
    fclose(fileC);
}




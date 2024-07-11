// simplereadfile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

 
int main()
{
	char ch;
	FILE *fp1 = fopen( "/home/zk/Downloads/demo/text/class1.txt", "r");
	if (fp1 == NULL) {
		printf("cannot open file !!\n");
		return 0;
	}
	do {
		long pos = ftell(fp1);
		ch = getc(fp1);
		printf("%c \t  %x \t %d \n",ch, ch , pos);
	} while (ch != EOF);

	fclose(fp1);

}


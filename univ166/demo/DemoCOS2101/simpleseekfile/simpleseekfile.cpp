#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
	char ch;
	FILE *fp1 = fopen("/home/zk/Downloads/demo/text/test1.txt", "rb");
	if (fp1 == NULL) {
		printf("cannot open file !!");
		return 0;
	}

	do {
		long pos1;
		printf("seek position (-1 exit) : ");
		scanf("%d", &pos1);
		if (pos1 < 0) {
			break;
		}
		fseek(fp1, pos1, SEEK_SET);
		long pos2 = ftell(fp1);
		ch = getc(fp1);
		printf("%c \t  %x \t %d \n", ch, ch, pos2);
	} while (true);

	fclose(fp1);

}

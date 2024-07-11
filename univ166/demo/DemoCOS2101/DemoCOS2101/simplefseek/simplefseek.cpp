#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct mystruct {
	int i;
	char ch;
	char str[3];
};

int main(void)
{
	FILE *stream;
	//read/write where the file pointer location is at begining of file
	if ((stream = fopen("D:/mydoc/cos2101/DemoCOS2101/Debug/TEST.$$$", "a+b")) == NULL) {
		fprintf(stderr, "Cannot open output file.\n");
		return 1;
	}

	while (true)
	{
		struct mystruct itm;
		int recordno = 0;

		cout << "\nfinding record  no. (0=terminate) (1-9) : ";
		cin >> recordno;
		recordno -= 1;
		if (recordno < 0)
			break;

		fseek(stream, recordno * sizeof(struct mystruct), SEEK_SET);
		fread( &itm, sizeof(struct mystruct), 1, stream);

		printf("\n%d, %c , %s -> record no : ", itm.i, itm.ch, itm.str, recordno);

	}
	fclose(stream); /* close file */

	return 0;
}

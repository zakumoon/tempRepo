#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

#include <iostream>
 
struct mystruct {
	int i;			//4
	char ch;		//1
	char str[3];	//3
};

int main()
{
	FILE *stream;
	struct mystruct s[10] = { 0 };
	if ((stream = fopen("/home/zk/univ166/cos201/lesson13/classFile/hello.txt", "rb")) == NULL) {
		fprintf(stderr, "Cannot open output file.\n");
		return 1;
	}
	//-----
	int ni = 0;
	while (feof(stream)==false) {
		int sz = fread(&s[ni], sizeof(struct mystruct), 1, stream);
		printf("\nsz =  %d", sz);
		ni++;
	}

	//-----
	for (int i = 0; i < ni; i++) {
		printf(" %d  \t  %c  \t %s \n",
			s[i].i, s[i].ch, s[i].str);
	}
	return 0;

}

int main_read()
{
	FILE *stream;
	struct mystruct s[10] = { 0 };
	if ((stream = fopen("D:/temp1/TEST.in", "rb")) == NULL) {
		fprintf(stderr, "Cannot open output file.\n");
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		fread(&s[i], sizeof(struct mystruct), 1, stream);
	}

	/* write struct s to file */
	fread(&s[3], sizeof(struct mystruct), 7, stream);
	fclose(stream); /* close file */

	for (int i = 0; i < 10; i++) {
		printf(" %d  \t  %c  \t %s \n",
			s[i].i, s[i].ch, s[i].str);
	}
	return 0;
}

int main_write(void)
{
	FILE *stream;
	struct mystruct s[10] = { 0 };
	if ((stream = fopen("D:/temp1/TEST.in", "wb")) == NULL) {
		fprintf(stderr, "Cannot open output file.\n");
		return 1;
	}
	for (int i = 0; i < 10; i++) {
		s[i].i = i;
		s[i].ch = 'A' + i;
		strcpy(s[i].str, "12");
		printf("\n%d, %c , %s", s[i].i, s[i].ch, s[i].str);
	}
	for (int i = 0; i < 5; i++) {
		fwrite(&s[ i ], sizeof(struct mystruct), 1, stream);
	}

	/* write struct s to file */
	fwrite(&s[5], sizeof(struct mystruct), 5 , stream);
	fclose(stream); /* close file */
	return 0;

}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
 
struct mystruct {
	int i;
	char ch;
	char str[3];
};

int main(void)
{
	FILE *stream;
	struct mystruct s[10] = { 0 };
	if ((stream = fopen("D:/mydoc/cos2101/DemoCOS2101/Debug/TEST.$$$", "wb")) == NULL) {
		fprintf(stderr, "Cannot open output file.\n");
		return 1;
	}
	for (int i = 0; i < 10; i++) {
		s[i].i = i;
		s[i].ch = 'A' + i;
		strcpy(s[i].str, "12");
		printf("\n%d, %c , %s", s[i].i, s[i].ch, s->str);
	}
	for (int i = 0; i < 5; i++) {
		fwrite(&s[ i ], sizeof(struct mystruct), 1, stream);
	}

	/* write struct s to file */
	fwrite(&s[5], sizeof(struct mystruct), 5 , stream);
	fclose(stream); /* close file */
	return 0;

}

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
	if ((stream = fopen("D:/mydoc/cos2101/DemoCOS2101/Debug/TEST.$$$", "rb")) == NULL) {
		fprintf(stderr, "Cannot open output file.\n");
		return 1;
	}

	/* write struct s to file */
	fread(&s[0], sizeof(struct mystruct), 3, stream);

	int i = 3;
	while(!feof(stream)) {
		fread(&s[i], sizeof(struct mystruct), 1, stream);
		i++;
	}

	fclose(stream); /* close file */

	for (int i = 0; i < 10; i++) {
		printf("\n%d, %c , %s", s[i].i, s[i].ch, s->str);
	}

	return 0;

}

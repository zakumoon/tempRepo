#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include<iomanip>
#include <cstring>
using namespace std;
#if 0
int main(){
    fstream myFile;
        myFile.open("/home/zk/test1.txt", ios::out);
        if (myFile.is_open()){
            myFile <<"Hello ";
            myFile <<"who ";
        myFile.close();
        }
        else {
            printf("No file");
            myFile.close();
        }
    
    return 0;
}

#endif

 
 
struct mystruct {
	int i;			//4
	char ch;		//1
	char str[3];	//3
};

int main()
{
	FILE *stream;
	struct mystruct s[10] = { 0 };
	if ((stream = fopen("/home/zk/univ166/cos201/lesson13/classFile", "rb")) == NULL) {
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
/*
}

int main(void)
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

	/* write struct s to file 
	fwrite(&s[5], sizeof(struct mystruct), 5 , stream);
	fclose(stream); /* close file 
	return 0;
}
    */

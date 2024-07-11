#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
	char c1;

	FILE *in = fopen("/home/zk/Downloads/demo/text/test1.txt", "r");
	FILE *out = fopen("/home/zk/Downloads/demo/text/test1.txt", "w");
    fseek(out, 0, SEEK_SET);

    while ((c1 = getc(in)) != EOF){
        char c2 = toupper(c1);
        putc(c2, out);
        printf("%c", c2);
}
    fclose(in);
    fclose(out);        

}

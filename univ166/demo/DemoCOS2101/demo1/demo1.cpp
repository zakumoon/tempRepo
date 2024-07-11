#include <iostream>

struct emp {
	int c;
	char x[100];
};

int main()
{
	char a[10] = "abcdef";
	char *pa1 = a;
	char *pa2 = &a[1];
	printf("\n &a = %p", &a);
	printf("\n pa1 = %p", pa1);
	printf("\n pa2 = %p", pa2);

	printf("\n *(pa1+1) = %c", *(pa1+1) );
	printf("\n *(pa1 + 2) = %c", *(pa1 + 2));



/*
	int x=10;
	int* px = &x;
	int z = 20;

	double y=2.2;
	double *py = &y;

	char c = 'A';
	char *pc = &c;

	struct emp em;
	struct emp *pem = &em;


	printf("\n &em = %p", &em);
	printf("\n pem = %p", pem);
	printf("\n &pem = %p", &pem);

	printf("\n pem + 1 = %p", pem + 1);
	printf("\n pem + 2 = %p", pem + 2);

	printf("\n sizeof(pem) = %d", sizeof(pem));
	printf("\n sizeof(em) = %d", sizeof(em));

	printf("\n &x = %p", &x);
	printf("\n x  = %d", x);
	printf("\n px = %p", px);
	printf("\n &px = %p", &px);

	printf("\n px + 1 = %p", px + 1);
	printf("\n px + 2 = %p", px + 2);

	printf("\n *px = %d", *px);
	printf("\n sizeof(px) = %d", sizeof(px) );
	printf("\n sizeof(x) = %d", sizeof(x));



	x = 100;
	printf("\n *px = %d", *px);
	printf("\n   x = %d",  x );

	*px = 200;
	printf("\n *px = %d", *px);
	printf("\n   x = %d", x);
*/
/*
	px = &z;
	z = 30;
	printf("\n &z = %p", &z);
	printf("\n z  = %d", z);
	printf("\n px = %p", px);
	printf("\n &px = %p", &px);
	printf("\n *px = %d", *px);
*/
/*
	printf("\n &y = %p", &y);
	printf("\n y = %f", y);
	printf("\n py = %p", py);
	printf("\n &py = %p", &py);
	printf("\n *py = %f", *py);
	printf("\n sizeof(py) = %d", sizeof(py) );
	printf("\n sizeof(y) = %d", sizeof(y));
	printf("\n py + 1 = %p", py + 1);
	printf("\n py + 2 = %p", py + 2);

	printf("\n &c=  %p", &c);
	printf("\n c = %c", c);
	printf("\n pc= %p", pc);
	printf("\n &pc= %p", &pc);
	printf("\n *pc= %c", *pc);
	printf("\n sizeof(pc) = %d", sizeof(pc) );
	printf("\n sizeof(c) = %d", sizeof(c));
	printf("\n pc + 1 = %p", pc + 1);
	printf("\n pc + 2 = %p", pc + 2);
*/
	return 0;

}

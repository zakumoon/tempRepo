#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

#if 0

int main(){

int a = 5;
int *pa = &a;

double b = 5.83;
double *pb = &b;

char c = 'C';
char *pc = &c;

printf("\n &a = %p", &a);
printf("\n a = %d", a);
printf("\n *pa = %d", *pa);
printf("\n &pa = %d", &pa);
printf("\n sizeof(pa) = %d", sizeof(pa));


printf("\n &b = %p", &b);
printf("\n b = %f", b);
printf("\n *pb = %f", *pb);
printf("\n &pb = %f", &pb);
printf("\n sizeof(pb) = %d", sizeof(pb));

a = 39;
pa = &a;
printf("\n &c = %p", &c);
printf("\n c = %c", c);
printf("\n *pc = %c", *pc);
printf("\n &pc = %c", &pc);
printf("\n sizeof(pc) = %d", sizeof(pc));


printf("\n &pa = %p", &pa);
printf("\n *pa = %d", *pa);
printf("\n sizeof(pa) = %d", sizeof(pa));
printf("\n sizeof(a) = %d", sizeof(a));

cout<<endl;






struct emp {
	int c;
	char x[100];
};


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

/*
	px = &z;
	z = 30;
	printf("\n &z = %p", &z);
	printf("\n z  = %d", z);
	printf("\n px = %p", px);
	printf("\n &px = %p", &px);
	printf("\n *px = %d", *px);
*/

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





    char a[10] = "abcdef";
	char *pa1 = a;
	char *pa2 = &a[1];
	printf("\n &a = %p", &a);
	printf("\n pa1 = %p", pa1);
	printf("\n pa2 = %p", pa2);

	printf("\n *(pa1+1) = %c", *(pa1+1) );
    printf("\n p1 + 1 = %p", pa1 + 1);
	printf("\n *(pa1 + 2) = %c", *(pa2 + 2));
    printf("\n &p2 + 2 = %p", pa2 + 2);


int x = 43;
int &z = x;

cout<<"&z = "<<x<<endl;
cout<<"&z = "<<&x<<endl;


x = 12;
cout<<"x = "<<x<<endl;
cout<<"&z = "<<z<<endl;
cout<<"&z = "<<&z<<endl;








return 0;
}
#endif

void p_swap(int *, int *);
void r_swap(int&, int&);

int main (void){
 int v = 5, x = 10;
 cout << v << x << endl;
 p_swap(&v,&x);
 cout << v << x << endl;
 r_swap(v,x);
 cout << v << x << endl;
 return 0;
}

void p_swap(int *a, int *b)
{
 int temp;
  temp = *a;	 
  *a = *b;	 
  *b = temp;
}  

void r_swap(int &a, int &b)
{
 int temp;
 temp = a;	 
 a = b;	 
 b = temp;
}

#if 0
 struct point {
     int x;
     int y;
 };

int main()
{
    struct point p1 = { 20,30 }, *p2;
    p2 = &p1;

    printf("\n p1.x = %d , p1.y = %d", p1.x,  p1.y);
    printf("\n p2->x = %d , p2->y = %d", p2->x,  p2->y);
    printf("\n (*p2).x = %d , (*p2).y = %d", (*p2).x,  (*p2).y);

}
#endif

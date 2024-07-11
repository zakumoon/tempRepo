#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

struct node  {
    char d;
    int x,y;
    struct node *next;
};

void show(struct node * e, struct node *a, struct node *b,struct node *c,struct node *d){
  printf("%p \t\t\t\t %c \t\t\t%d \t\t\t%d \t\t\t%p \n",
            e, e->d, e->x, e->y, e->next);
}
int main(){
    struct node a = {'a', 10, 11};
    struct node b = {'b', 12, 13};
    struct node c = {'c', 14, 15};
    struct node d = {'d', 16, 17};
        a.next = &b;
        b.next = &c;
        c.next = &d;
        d.next = NULL;
        struct node *p = &a;

        while (p!= NULL){
          show(p, a.next, b.next, c.next, d.next);
                      p = p->next;
        }
    return 0;
}

#if 0

int main()
{
  int i,N;
  float *height;
  float sum=0,avg;

  printf("Input no. of students\n");
  scanf("%d", &N);

  height = (float *) 
       malloc(N * sizeof(float));

printf("Input heights for %d students \n",N);

  for (i=0; i<N; i++) {
    scanf ("%f", &height[i]);   //recive height until n 
 }

  for(i=0;i<N;i++)
    sum += height[i];       //sum

  avg = sum / (float) N;

  printf("Average height = %f \n",
               avg);
  free (height);
  return 0;
}

 typedef  struct {   
           char name[20];
           int roll;
           float SGPA[2], CGPA;
  } person;
int main()
 {  
      person *student;
      int i, j, n;
      printf("input number of person (n): ");
      scanf("%d", &n);
      student = (person *)malloc( n*sizeof(person) );
      for ( i=0 ;  i<n ;  i++ ) {
          printf("input name (s): ");
          scanf( "%s", student[i].name );
          printf("input roll (n): ");
          scanf( "%d", &student[i].roll );
          for( j=0; j<2 ; j++) { 
          printf("input SGPA [%d] (f): " , j+1);
             scanf("%f", &student[i].SGPA[j] );
          }
          printf("input CPGA (f) : ");
          scanf("%f", &student[i].CGPA);
          printf("---- \n");
      }
      free (student);  
 }
 
#endif

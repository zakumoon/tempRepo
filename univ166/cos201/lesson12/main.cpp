#include <iostream>
#include <stdlib.h>
using namespace std;


struct node{
    int value;
    struct node *next;
};
struct node *head;

int main(){
    struct node *q = new node();
    q->value = value;
    q->next = NULL;
    struct node *n = head;
    struct node *p = NULL;
    while (n != NULL){
        if(n->value > value){
            break;
        }
        p = n;
        n = n->next}

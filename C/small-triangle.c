#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void swap(triangle* a,triangle* b)
{
    triangle temp=*a;
    *a=*b;
    *b=temp;
}
int cmp(triangle tr)
{
    int a=tr.a;
    int b=tr.b;
    int c=tr.c;
    return (a+b+c)*(a-b+c)*(a+b-c)*(-a+b+c);
}
void sort_by_area(triangle* tr, int n) {
     for(int i=0;i<n;i++)
    {
        int swapped=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(cmp(tr[j])>cmp(tr[j+1]))
             swap(&tr[j],&tr[j+1]);
            swapped=1;
        }
        if(swapped==0)
            break;
    }
	
}
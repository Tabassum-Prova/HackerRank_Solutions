#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j,m;
    double e;
    char s1[200];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &j);
    scanf("%lf", &e);
    scanf("%*[\n]%[^\n]s", s1);
  
  
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i+j);
    
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d+e);
    
    // Concatenate and print the String variables on a new line
    printf("%s%s",s,s1);
    // The 's' variable above should be printed first.
    
   

    return 0;
}
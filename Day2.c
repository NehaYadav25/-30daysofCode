#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
#define MAX_LIMIT 150
    int x;
    scanf("%d", &x);

    double e;
    scanf("%lf", &e);

    char c[150];
    scanf(" %[^\n]s", &c);
   
    printf("%d\n", i+x);
    printf("%.1lf\n", d+e);
    printf("%s%s",s,c);
   // fputs(str, stdout);
    
    
    return 0;
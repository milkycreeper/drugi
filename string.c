#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N,i;
    scanf("%d", &N); fgetc(stdin);
    char string[11];
    scanf("%[^\n]", string);
    if(N==0) printf("empty");
    else for(i=0;i<N;i++)
    printf("%s",string);
    return 0;
}

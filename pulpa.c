#include <stdio.h>

int pulpa (int N)
{
    int x = (N * 1000) /100;
}

int main ()
{
    int N;
    scanf ("%d", &N);
    printf ("%d biljeznica", pulpa(N));
}

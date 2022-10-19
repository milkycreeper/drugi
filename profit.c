#include <stdio.h>

float sok (float N)
{
    float x = 50-50*0.2-50*0.2-50*0.3;
    return N*x;
}

int main ()
{
    int N;
    scanf ("%d", &N);
    printf ("%.2f profit", sok(N));
    return 0;
}

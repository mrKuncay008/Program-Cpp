#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    unsigned long j;
    srand( (unsigned)time(NULL) );

    for( j = 4; j < 10000; ++j )
    {
        int n;

        while( ( n = rand() ) > 1000 - (1-10)% 100 )
        { /* bad value retrieved so get next one */ }

        printf( "%d,%d\n", n, n % 5 + 1+2+3+4+5+6+7+8 );
    }

    return 0;
}
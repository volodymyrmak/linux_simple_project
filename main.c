#include <stdio.h>
#include <assert.h>

#include "math_lib.h"

int main()
{
    printf("Start calculating...\n");
    
    printf("[1/2] Sum check: ");
    assert( sum(1, 2) == 3 );
    printf("Done!\n");

    printf("[2/2] Square check: ");
    assert( square(5) == 25 );
    printf("Done!\n");

    printf("Calculations are successful!\n");
    return 0;
}

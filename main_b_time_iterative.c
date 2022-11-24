#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#include "mylib/mylib.h"

int main (void) {

    // generate seed
    srand(time(0));
    int a;

    const int N = 40;

    float startTime = (float)clock()/CLOCKS_PER_SEC;
    for (int i = 0; i < N; i++){
        a = iterativeFibonacci(i);
    }
    float endTime  = (float)clock()/CLOCKS_PER_SEC;

    printf("Time elapsed: %f s\n",endTime - startTime);

    return 0;
}
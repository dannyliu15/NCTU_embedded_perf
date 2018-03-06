#include HEADER
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
#if defined(PI)
    printf("pid: %d\n", getpid());
    sleep(10);
    compute_pi_baseline(50000000);
#elif defined(MATRIX)
    static int array[10000][10000] = {0};
    matrix(10000,10000,array);
#elif defined(BRANCH)
    int size = 1000000;
    int src1[1000000];
    int src2[1000000];
    int dst[2000000];
    for (int i = 0; i < size; i++) {
        src1[i] = (rand() % 1000)+1;
        src2[i] = (rand() % 1000)+1;
    }
    merge(src1, src2, dst, size);

#endif
    return 0;

}



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
    int size = 10000;
    int src1[10000];
    int src2[10000];
    int dst[20000];
    for (int i = 0; i < size; i++) {
        src1[i] = (rand() % 10)+10*i;
        src2[i] = (rand() % 10)+10*i;
    }
    merge(src1, src2, dst, size);

#endif
    return 0;

}



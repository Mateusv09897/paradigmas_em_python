#include <stdio.h>
#include <time.h>
int main() {
    clock_t start = clock();
    long sum = 0;
    for(long i = 1; i <= 100000000; i++) sum += i;
    clock_t end = clock();
    printf("Tempo C: %f segundos\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}

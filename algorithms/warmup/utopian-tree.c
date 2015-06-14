#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d",&T);

    int N, cycle, height, i;
    for (i = 0; i < T; i++) {
        scanf("%d",&N);
        height = 1;
        for (cycle = 0; cycle < N; cycle++) {
            height = (cycle % 2) ? height + 1 : height * 2;
        }
        printf("%d\n", height);
    }


    return 0;
}





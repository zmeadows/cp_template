#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);

    int M[N][N];

    int i, j;
    int sum = 0;
    for ( i = 0;i < N; i++ ) {
        for (j = 0; j < N; j++) {
            scanf("%d",&M[i][j]);
            if (i == j) {
                sum += M[i][j];
            }
            if (i + j == N - 1) {
                sum -=M[i][j];
            }
        }
    }

    printf("%d\n", abs(sum));
    return 0;
}



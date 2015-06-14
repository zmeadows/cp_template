#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, T;
    scanf("%d %d",&N, &T);

    int widths[N];

    int i;
    for (i=0; i<N; i++) {
        scanf("%d",&widths[i]);
    }


    int in, out, min, j;
    for (i = 0; i < T; i++) {
        min = 3;
        scanf("%d %d",&in, &out);
        for (j = in; j <= out; j++) {
            if (widths[j] < min) { min = widths[j]; }
        }
        printf("%d\n", min);
    }

    return 0;
}

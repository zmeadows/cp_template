#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);

    int pos = 0; int neg = 0; int zero = 0;
    int i, temp;
    for (i = 0; i < N; i++) {
            scanf("%d",&temp);
            if (temp <0) {
                neg++;
            } else if (temp > 0) {
                pos++;
            } else {
                zero++;
            }
    }

    double pos_frac = (double)pos / N;
    double neg_frac = (double)neg / N;
    double zero_frac = (double)zero / N;

    printf("%.3e\n", pos_frac);
    printf("%.3e\n", neg_frac);
    printf("%.3e\n", zero_frac);

    return 0;
}




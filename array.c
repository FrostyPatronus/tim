#include <stdio.h>
#define N 5

double compareMax(double val1, double val2) {
    if (val1 > val2) {
        return val1;
    } else {
        return val2;
    }
}

double maximum(int n, double * list) {
    if (n == 2) {
        return compareMax(list[0], list[1]);
    }
    return compareMax(list[0], maximum(n - 1, list + 1));
}

int main() {
    double list[N] = {-99, 12, 34, 43, 321};
    maximum(N, list);
    
    printf("Max: %f", maximum(N, list));
}

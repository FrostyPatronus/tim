#include <stdio.h>
#include <math.h>

int main() {
    int bytes = 0b01001010;
    printf("Number: %d\n", bytes);
    
    // print bytes of var bytes
    printf("Bytes: ");
    int i;

    for (i = 7; i >= 0; i--) {
        int masked = (bytes & (int) pow(2, i));
        int place = (int) pow(2, i);
        printf("%d", masked / place );
    }
}

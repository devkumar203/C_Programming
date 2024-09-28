#include <stdio.h>

int main() {
    int x = 10, y = 4;
    
    // Expression with multiple operators
    printf("Result of (%d * %d) - (%d / %d) is: %d\n", x, y, x, y, (x * y) - (x / y));

    return 0;
}

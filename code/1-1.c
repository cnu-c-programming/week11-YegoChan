#include <stdio.h>

typedef struct {
    int x, y;
} Point;

int main() {
    Point p = {1, 2};

    printf("%d %d\n", p.x, p.y);

    return 0;
}
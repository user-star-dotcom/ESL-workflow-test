#include <stdio.h>
#include "vector.h"

int main() {
    Vector3 a = {1, 2, 3};
    Vector3 b = {4, 5, 6};

    Vector3 sum = vector_sum(a, b);
    printf("Sum: (%.1f, %.1f, %.1f)\n", sum.x, sum.y, sum.z);
  
    Vector3 sub = vector_sub(a, b);
    printf("Subtraction: (%.1f, %.1f, %.1f)\n", sub.x, sub.y, sub.z);

    float dot = vector_dot(a, b);
    printf("Dot Product: %.1f\n", dot);

    Vector3 cross = vector_cross(a, b);
    printf("Cross Product: (%.1f, %.1f, %.1f)\n", cross.x, cross.y, cross.z);

    return 0;
}

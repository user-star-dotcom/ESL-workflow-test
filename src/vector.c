#include "vector.h"

Vector3 vector_sum(Vector3 a, Vector3 b) {
    return (Vector3){a.x+b.x, a.y+b.y, a.z+b.z};
}

Vector3 vector_sub(Vector3 a, Vector3 b) {
    return (Vector3){a.x-b.x, a.y-b.y, a.z-b.z};
}

float vector_dot(Vector3 a, Vector3 b) {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

Vector3 vector_cross(Vector3 a, Vector3 b) {
    return (Vector3){
        a.y*b.z - a.z*b.y,
        a.z*b.x - a.x*b.z,
        a.x*b.y - a.y*b.x
    };
}

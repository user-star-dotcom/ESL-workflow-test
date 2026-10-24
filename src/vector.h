#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float x;
    float y;
    float z;
} Vector3;

Vector3 vector_sum(Vector3 a, Vector3 b);
Vector3 vector_sub(Vector3 a, Vector3 b);
float vector_dot(Vector3 a, Vector3 b);
Vector3 vector_cross(Vector3 a, Vector3 b);

#endif

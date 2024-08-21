#include "vectors.h"

struct Vector2 AddVectors2(struct Vector2 vector1, struct Vector2 vector2)
{
    struct Vector2 result;

    result.x = vector1.x + vector2.x;
    result.y = vector1.y + vector2.y;

    return result;
}
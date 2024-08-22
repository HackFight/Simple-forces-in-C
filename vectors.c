#include <math.h>
#include "vectors.h"

struct Vector2 AddVector2(struct Vector2 v1, struct Vector2 v2)
{
    struct Vector2 result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}

struct Vector2 SubVector2(struct Vector2 v1, struct Vector2 v2)
{
    struct Vector2 result;

    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;

    return result;
}

struct Vector2 MultVector2(struct Vector2 v, double k)
{
    struct Vector2 result;

    result.x = v.x * k;
    result.y = v.y * k;

    return result;
}

double DotVector2(struct Vector2 v1, struct Vector2 v2)
{
    double result;

    result = v1.x * v2.x + v1.y * v2.y;

    return result;
}

double MagnitudeVector2(struct Vector2 v)
{
    double result;

    result = sqrt(pow(v.x, 2) + pow(v.y, 2));

    return result;
}

struct Vector2 NormalizedVector2(struct Vector2 v)
{
    struct Vector2 result;

    result = MultVector2(v, 1 / MagnitudeVector2(v));

    return result;
}

void PrintVector(struct Vector2 v)
{
    printf("(%lf", v.x);
    printf(", %lf", v.y);
    printf(")\n");
}
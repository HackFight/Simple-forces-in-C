#ifndef __VECTORS_H__

#define __VECTORS_H__

struct Vector2
{
    double x;
    double y;
};

struct Vector2 AddVector2(struct Vector2 v1, struct Vector2 v2);

struct Vector2 SubVector2(struct Vector2 v1, struct Vector2 v2);

struct Vector2 MultVector2(struct Vector2 v, double k);

double DotVector2(struct Vector2 v1, struct Vector2 v2);

double MagnitudeVector2(struct Vector2 v);

struct Vector2 NormalizedVector2(struct Vector2 v);

void PrintVector(struct Vector2 v);

#endif // __VECTORS_H__
#include <stdio.h>
#include <math.h>

// vectors.c ################################
struct Vector2
{
    double x;
    double y;
};

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

// main.c ###################################

int main()
{
    struct Vector2 v1 = {1.0, 0.0};
    struct Vector2 v2 = {0.0, 2.0};
    double k = 10.0;

    struct Vector2 vResult;
    double dResult;

    vResult = AddVector2(v1, v2);
    printf("Add v1 & v2: ");
    PrintVector(vResult);

    vResult = SubVector2(v1, v2);
    printf("Sub v2 to v1: ");
    PrintVector(vResult);

    vResult = MultVector2(v1, k);
    printf("Multiply v1 by 10: ");
    PrintVector(vResult);

    vResult = NormalizedVector2(v2);
    printf("Normalize v2: ");
    PrintVector(vResult);

    dResult = DotVector2(v1, v2);
    printf("Dot of v1 & v2: %lf\n", dResult);

    dResult = MagnitudeVector2(v1);
    printf("Magnitude of v1: %lf\n", dResult);
}
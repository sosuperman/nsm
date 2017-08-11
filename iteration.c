/*
NAME- SHRABAN KARMAKAR.
COURSE-MCA
ROLL NO.-MCA/10048/2016
SEMESTER-1st
SUBJECT-NSM LAB
TOPIC- ITERATION METHOD.
PROGRAMME- PROGRAM OF FINDING ROOT USING ITERATION METHOD.
Date- 6Th August 2016.
 */

#include<math.h>
float f, l;

float fun(float x) {
    return (x * x * x - 1 + x * x);
}

float dfun(float x) {
    return (1 / (sqrt(x + 1)));
}

void main() {
    float ans, temp;
    int n;
    for (n = 0; n <= 10; n++) {
        if (fun(n) < 0 && fun(n + 1) > 0) {
            f = n;
            l = n + 1;
        }

        if (fun(n) > 0 && fun(n + 1) < 0) {
            l = n;
            f = n + 1;
        }
    }

    printf("interval is %f %f with %f %f", f, l, fun(f), fun(l));
    ans = 0.75;

xx:
    temp = ans;
    ans = dfun(ans);
    printf("\n%f", ans);

    if (fabs(temp - ans) > 0.00001)
        goto xx;

    printf("\nans=%f with f(x)=%f\n\n", ans, fun(ans));
}

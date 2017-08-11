/*
NAME- SHRABAN KARMAKAR.
COURSE-MCA
ROLL NO.-MCA/10048/2016
SEMESTER-1st
SUBJECT-NSM LAB
TOPIC- REGULA FALSI METHOD.
PROGRAMME- FINDING ROOT USING REGULA FALSI METHOD.
Date- 18Th August 2016.
 */

#include<math.h>

float l, f, temp, mid;
;

float fun(float x) {
    return (x * x * x - 2 * x - 5);
}

void main() {
    int n;

    for (n = 0; n <= 10; n++) {
        if (fun(n) < 0 && fun(n + 1) > 0) {
            f = n;
            l = (n + 1);
        }
        if (fun(n) > 0 && fun(n + 1) < 0) {
            l = fun(n);
            f = fun(n + 1);
        }

    }

    printf("\ninterval is %f %f with %f %f\n\n", f, l, fun(f), fun(l));

xx:
    temp = mid;
    mid = ((f * fun(l) - l * fun(f)) / (fun(l) - fun(f)));
    printf("\n%f", mid);

    if (mid < 0)
        f = mid;
    else if (mid > 0)
        l = mid;

    if (fabs(temp - mid) > 0.000001)
        goto xx;

    printf("\nans is %f with f(x) %f", mid, fun(mid));
}

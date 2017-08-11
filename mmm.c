/*
NAME- SHRABAN KARMAKAR.
COURSE-MCA
ROLL NO.-MCA/10048/2016
SEMESTER-1st
SUBJECT-NSM LAB
TOPIC- MEAN, MEDIAN, MODE.
PROGRAMME- PROGRAM TO FIND MEAN, MEDIAN AND MODE.
Date- 2ND SEP 2016.
 */


//3median=2mean+mode

void main() {

    short n, a[100], x, y, temp, m;
    float sum, med;
    printf("\n input number of input want.");
    scanf("%d", &n);

    for (x = 0; x < (n); x++) {
        scanf("%d", &a[x]);
        sum = sum + a[x];
    }
    sum = sum / n;
    printf("\nmean=%f", sum);

    //sort
    for (x = 0; x < n; x++) {
        for (y = x + 1; y < n; y++) {
            if (a[y] < a[x]) {
                temp = a[y];
                a[y] = a[x];
                a[x] = temp;
            }
        }
        printf("\n%d", a[x]);
    }


    if (n % 2 == 0) {
        m = n / 2;
        med = (float) (a[m - 1] + a[m]) / 2;

        printf("\nmedian=%f", med);

    } else {
        m = n / 2;
        printf("\nmedian=%d", a[m]);
    }

    int f[30];

    for (x = 0; x < n; x++) {
        f[x] = 0;
        for (y = 0; y < n; y++) {
            if (a[x] == a[y]) {
                f[x]++;
                if (x != y)
                    f[y] = -100;
            }

        }
    }

    for (x = 0; x < n; x++) {
        printf("\n%d", f[x]);
    }

    int max = 0, c;
    for (x = 0; x < n; x++) {
        if (f[x] > max) {
            max = f[x];
            c = x;
        }
    }
    int count = 0;
    for (x = 0; x < n; x++) {
        if (max == f[x])
            count++;
    }
    if (count >= 1) {
        printf("\n mode=%d", a[c]);
    }
    printf("\n mode=%f", 3 * med - 2 * sum);

}

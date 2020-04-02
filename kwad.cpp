#include <math.h>
#include "kwad.h"

using INT = uint_fast32_t; // wydajnieszy 32-bitowy(4 bajty) typ unsigned int
using INT64 = uint_fast64_t; // wydajnieszy 64-bitowy(8 bajtów) typ unsigned int

INT abs(INT param) { // przeci¹¿y³em funkcjê abs dla typu INT
    if (param >= 0)
        return param;
    else return -1 * param;
}

INT64 abs(INT64 param) { // przeci¹¿y³em funkcjê abs dla typu INT
    if (param >= 0)
        return param;
    else return -1 * param;
}

// oblicza calke metoda trapezow
double trapez(double from, double to, double (*pf)(double), INT n){
    double h = (to - from) / (n - 1);
    double sum = 0.5 * (pf(from) + pf(to));
    double x = from;

    for (int i = 1; i < n - 1; ++i){
        x += h;
        sum += pf(x);
    }
    return sum * h;
}

long double trapez(long double from, long double to, long double(*pf)(long double), INT64 n) {
    long double h = (to - from) / (n - 1);
    long double sum = 0.5 * (pf(from) + pf(to));
    long double x = from;

    for (INT64 i = 1; i < n - 1; ++i) {
        x += h;
        sum += pf(x);
    }
    return sum * h;
}

long double simpson(long double from, long double to, long double(*pf)(long double), INT64 n){//dla du¿ych liczb
    long double   x = from;
    INT64         nc = abs((n - 2) / 2 + 1) * 2 + 1;  // poprawione n tak by bylo nieparzyste i >= n_old
    long double   h = (to - from) / (nc - 1);             // dla du¿ych liczb,du¿y koszt
    long double   h2 = h * 2;
    long double   sum = pf(from) + 4. * pf(from + h) + pf(to);

    for (INT64 i = 3; i < nc; i += 2) {
        x += h2;
        sum += 2. * pf(x) + 4. * pf(x + h);
    }
    return sum * h / 3.;
}

// oblicza calke metoda simpsona
double simpson(double from, double to, double (*pf)(double), INT n){
    double   x = from;
    INT      nc = abs((n - 2) / 2 + 1) * 2 + 1;  // poprawione n tak by bylo nieparzyste i >= n_old
    double   h = (to - from) / (nc - 1);            
    double   h2 = h * 2;
    double   sum = pf(from) + 4. * pf(from + h) + pf(to);

    for (INT i = 3; i < nc; i += 2){
        x += h2;
        sum += 2. * pf(x) + 4. * pf(x + h);
    }
    return sum * h / 3.;
}

// oblicza calke metoda simpsona
double simpson(double from, double to, double (*pf)(double), int n){
    double  x = from;
    int     nc = abs((n - 2) / 2 + 1) * 2 + 1;  // poprawione n tak by bylo nieparzyste i >= n_old
    double  h = (to - from) / (nc - 1);
    double  h2 = h * 2;
    double  suma = pf(from) + 4. * pf(from + h) + pf(to);

    for (int i = 3; i < nc; i += 2){
        x += h2;
        suma += 2. * pf(x) + 4. * pf(x + h);
    }
    return suma * h / 3.;
}



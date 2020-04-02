#include <math.h>
#include "nonlin.h"

long double bisec(long double from, long double to, long double(*pf)(long double), 
	long double precision, INT& iterNmbr){
	long double f_from{0.0}, f_to{0.0}, solution{0.0}, solution_value{0.0};
	INT i{ 0 };
	f_from = pf(from);
	f_to = pf(to);

	if (f_from * f_to > 0.0) {
		iterNmbr = -1;
		return 0;
	}

	for ( i = 1; i <= 1000; ++i) {
		solution = (from + to) / 2.;
		solution_value = pf(solution);

		if (f_from * solution_value < 0.) {
			to = solution;
			f_to = solution_value;
		}
		else {
			from = solution;
			f_from = solution_value;
		}

		if (fabs(solution_value) < precision && fabs(to - from) < precision)
			break;
	}
	iterNmbr = i;
	return solution;
}

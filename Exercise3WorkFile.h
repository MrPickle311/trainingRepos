#pragma once
#include "nonlin.h"
#include <vector>

struct point {
	long double precision = 0.0;
	INT iterationsNmbr = 0;
};

long double fun(long double x);

bool getChartData(long double from, long double to, long double function(long double),
	std::vector<point>& points, long double& solution);
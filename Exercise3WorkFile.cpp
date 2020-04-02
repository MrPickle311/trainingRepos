#include "Exercise3WorkFile.h"
#include <cmath>

long double fun(long double x){
	return cos(x) - x;
}

// bool to zmienna przechowuj¹ca wartoœci true albo false
bool getChartData(long double from, long double to, long double function(long double),
	std::vector<point>& points, long double& solution) {
	if (fun(from) * fun(to) < 0) {
		points.insert(points.begin(), 18, point{});//wstawiam tyle elementów ,by ostatni wyk³adnik potêgi by³ równy -3
		int guardian{ -20 }; // tutaj u¿ywam zwyk³ego inta ,gdy¿ potrzebne mi wartoœci ujemne,a inkrementacja go 18
		for (auto& point : points) {//razy spowoduje ma³y narzut
			point.precision = pow(2, guardian);
			solution = bisec(from, to, function, point.precision, point.iterationsNmbr);
			++guardian;
		}
		return true;
	}
	else return false;
	
}//zmienne points,solution oraz wartoœæ zwracana przez funkcjê wêdruj¹ do kodu interfejsu

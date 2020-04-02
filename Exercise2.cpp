#include "Exercise2.h"

Exercise2::Exercise2(QWidget* parent) : QDialog(parent), mainCharts{ QList<Chart2*>{} },
trapezCharts{ QList<Chart2*>{} },simpsonCharts{ QList<Chart2*>{} },
currentChart{ QList<Chart2*>::iterator{} }, chartView{ new QChartView{this}},
grabberChannel{ new QObject{this} }{
	ui.setupUi(this);
	for (INT i = 0; i < 6; ++i) {
		this->mainCharts.insert(this->mainCharts.end(), new Chart2{ this });
		this->trapezCharts.insert(this->trapezCharts.end(), new Chart2{ this });
		this->simpsonCharts.insert(this->simpsonCharts.end(), new Chart2{ this });
	}
	this->currentChart = this->mainCharts.begin();
	this->chartView->setRenderHints(QPainter::Antialiasing);
	this->ui.chartLayout->addWidget(this->chartView);
	connect(this->ui.chartsComboBox, QOverload<int>::of(&QComboBox::activated), this, &Exercise2::changeChart);
	connect(this->ui.chartsComboBox_2, QOverload<int>::of(&QComboBox::activated), this, &Exercise2::changeMethod);
	connect(this->ui.computeAndWriteButton, &QPushButton::pressed, this, &Exercise2::computeValuesAndDrawChart);
	//this->debug->show();
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("CP852"));
}

Exercise2::~Exercise2(){

}

void Exercise2::computeValuesAndDrawChart() {
	if (this->ui.nodeNmbrTextEdit->toPlainText() == "" || this->ui.toTextEdit->toPlainText() == "" ||
		this->ui.fromTextEdit->toPlainText() == "")
		QMessageBox::warning(this, tr("B³¹d").toUtf8(), tr("Nie uzupe³niono wszystkich pól").toUtf8(),
			QMessageBox::StandardButton::Ok);
	else {
		std::vector<Point> mainChartPoints = std::vector<Point>{};
		mainChartPoints = std::move(this->getFunctionValues());
		QSplineSeries* series{ new QSplineSeries{this} };
		for (auto& point : mainChartPoints)
			series->append(point.x, point.y);
		(*this->currentChart)->addSeries(series);
		(*this->currentChart)->createDefaultAxes();
		this->chartView->setChart(*this->currentChart);//w¹tpliwa linijka
		(*this->currentChart)->data.isComputed = true;
		this->printDataBase();
	}
}

void Exercise2::changeChart(int idx){
	this->chartNmbr = idx;
	this->currentChart = this->mainCharts.begin();
	setupCharts();
}

void Exercise2::setupCharts() {
	for (int i = 0; i < this->chartNmbr; ++i)
		++this->currentChart;
	this->chartView->setChart(*this->currentChart);
	this->printDataBase();
}

void Exercise2::setupMainAxis(){
	
	
}

void Exercise2::setupTrapezAxis(const QSplineSeries& series){
}

void Exercise2::setupSimpsonAxis(){

}

void Exercise2::changeMethod(int idx){
	switch (idx){
	case 0:
		this->changeChart(this->chartNmbr);//straszny b³¹d!
		break;
	case 1:
		this->currentChart = this->trapezCharts.begin();
		setupCharts();
		break;
	case 2:
		this->currentChart = this->simpsonCharts.begin();
		setupCharts();
		break;
	default:
		QMessageBox::warning(this, tr("B³¹d").toUtf8(), tr("Krytyczny b³¹d aplikacji ,który wyst¹pi³\n  w "
			"funkcji changeMethod(int idx)").toUtf8(),
			QMessageBox::StandardButton::Ok);
		break;
	}
}

std::vector<Point> Exercise2::getFunctionValues(){
	long double from{ std::stold(this->ui.fromTextEdit->toPlainText().toStdString()) };
	long double to{ std::stold(this->ui.toTextEdit->toPlainText().toStdString()) };
	INT64 nodes{ static_cast<INT64>(std::stol(this->ui.nodeNmbrTextEdit->toPlainText().toStdString())) };
	(*this->currentChart)->data.from = from;
	(*this->currentChart)->data.to = to;
	(*this->currentChart)->data.maxNodesCount = nodes;
	(*this->currentChart)->data.precision = 1080;
	std::vector<attempt> trapezAttempts{};
	std::vector<attempt> simpsonAttempts{};
	switch (this->chartNmbr) {
	case 0:
		(*this->currentChart)->data.analiticResult = function_1_INTEGRAL(from, to);
		(*this->currentChart)->data.trapezResult = trapez(from, to, function_1, pow(2,nodes));
		(*this->currentChart)->data.simpsonResult = simpson(from, to, function_1, pow(2, nodes));
		trapezAttempts = rtrnTrapezAttempts(from, to, (*this->currentChart)->data.maxNodesCount, 
			function_1, function_1_INTEGRAL);
		simpsonAttempts = rtrnSimpsonAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_1, function_1_INTEGRAL);
		setupNumericCharts(trapezAttempts, simpsonAttempts);
		return computeFunctionValues(from, to, function_1);
		break;
	case 1:
		(*this->currentChart)->data.analiticResult = function_2_INTEGRAL(from, to);
		(*this->currentChart)->data.trapezResult = trapez(from, to, function_2, pow(2, nodes));
		(*this->currentChart)->data.simpsonResult = simpson(from, to, function_2, pow(2, nodes));
		trapezAttempts = rtrnTrapezAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_2, function_2_INTEGRAL);
		simpsonAttempts = rtrnSimpsonAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_2, function_2_INTEGRAL);
		setupNumericCharts(trapezAttempts, simpsonAttempts);
		return computeFunctionValues(from, to, function_2);
		break;
	case 2:
		(*this->currentChart)->data.analiticResult = function_3_INTEGRAL(from, to);
		(*this->currentChart)->data.trapezResult = trapez(from, to, function_3, pow(2, nodes));
		(*this->currentChart)->data.simpsonResult = simpson(from, to, function_3, pow(2, nodes));
		trapezAttempts = rtrnTrapezAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_3, function_3_INTEGRAL);
		simpsonAttempts = rtrnSimpsonAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_3, function_3_INTEGRAL);
		setupNumericCharts(trapezAttempts, simpsonAttempts);
		return computeFunctionValues(from, to, function_3);
		break;
	case 3:
		(*this->currentChart)->data.analiticResult = function_4_INTEGRAL(from, to);
		(*this->currentChart)->data.trapezResult = trapez(from, to, function_4, pow(2, nodes));
		(*this->currentChart)->data.simpsonResult = simpson(from, to, function_4, pow(2,nodes));
		trapezAttempts = rtrnTrapezAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_4, function_4_INTEGRAL);
		simpsonAttempts = rtrnSimpsonAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_4, function_4_INTEGRAL);
		setupNumericCharts(trapezAttempts, simpsonAttempts);
		return computeFunctionValues(from, to, function_4);
		break;
	case 4:
		(*this->currentChart)->data.analiticResult = function_5_INTEGRAL(from, to);
		(*this->currentChart)->data.trapezResult = trapez(from, to, function_5, pow(2, nodes));
		(*this->currentChart)->data.simpsonResult = simpson(from, to, function_5, pow(2, nodes));
		trapezAttempts = rtrnTrapezAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_5, function_5_INTEGRAL);
		simpsonAttempts = rtrnSimpsonAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_5, function_5_INTEGRAL);
		setupNumericCharts(trapezAttempts, simpsonAttempts);
		return computeFunctionValues(from, to, function_5);
		break;
	case 5:
		(*this->currentChart)->data.analiticResult = function_6_INTEGRAL(from, to);
		(*this->currentChart)->data.trapezResult = trapez(from, to, function_6, pow(2, nodes));
		(*this->currentChart)->data.simpsonResult = simpson(from, to, function_6, pow(2, nodes));
		trapezAttempts = rtrnTrapezAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_6, function_6_INTEGRAL);
		simpsonAttempts = rtrnSimpsonAttempts(from, to, (*this->currentChart)->data.maxNodesCount,
			function_6, function_6_INTEGRAL);
		for (auto& atempt : trapezAttempts) {
			debug->debugWrite(std::to_string(atempt.msrError).c_str());
		}
		setupNumericCharts(trapezAttempts, simpsonAttempts);
		return computeFunctionValues(from, to, function_6);
		break;
	default:
		QMessageBox::warning(this, tr("B³¹d").toUtf8(), tr("Krytyczny b³¹d funkcji \n getFunctionValues()").toUtf8(),
			QMessageBox::StandardButton::Ok);
		break;
	}
	return std::vector<Point>{};
}

void Exercise2::setupNumericCharts(std::vector<attempt>& trapezAttempts, std::vector<attempt>& simpsonAttempts){
	QValueAxis* axisY{ new QValueAxis{this} };
	QFont* font{ new QFont("Arial") };

	QList<Chart2*>::iterator itr{ this->trapezCharts.begin() };
	QSplineSeries* trapezSeries{ new QSplineSeries{this} };
	for (auto& attempt : trapezAttempts)
		trapezSeries->append(attempt.nodeNmbr, attempt.msrError);
	for (INT i = 0; i < chartNmbr; ++i,++itr){}
	(*itr)->addSeries(trapezSeries);
	(*itr)->data = (*this->currentChart)->data;
	QLogValueAxis* axisX{ new QLogValueAxis{this} };
	axisX->setTitleFont(*font);
	axisX->setTitleText(tr("Proba").toUtf8());
	axisX->setBase(2);
	axisX->setLabelFormat("%i");
	axisX->setMin(2);
	axisX->setMax(pow(2, (*itr)->data.maxNodesCount));
	axisX->setMinorTickCount((*itr)->data.maxNodesCount);
	(*itr)->addAxis(axisX, Qt::AlignBottom);
	trapezSeries->attachAxis(axisX);

	
	axisY->setTitleFont(*font);
	axisY->setTitleText(tr("Blad\nbezwzgledny").toUtf8());
	axisY->setLabelFormat("%lf");
	axisY->setMin(0.0);
	axisY->setMax(trapezAttempts[0].msrError);
	(*itr)->addAxis(axisY, Qt::AlignLeft);
	trapezSeries->attachAxis(axisY);

	QSplineSeries* simpsonSeries{ new QSplineSeries{this} };
	itr = this->simpsonCharts.begin();
	for (auto& attempt : simpsonAttempts)
		simpsonSeries->append(attempt.nodeNmbr, attempt.msrError);

	for (INT i = 0; i < chartNmbr; ++i, ++itr) {}
	(*itr)->addSeries(simpsonSeries);
	(*itr)->data = (*this->currentChart)->data;
	QLogValueAxis* axisXS{ new QLogValueAxis{this} };
	axisXS->setTitleFont(*font);
	axisXS->setTitleText(tr("Proba").toUtf8());
	axisXS->setBase(2);
	axisXS->setLabelFormat("%i");
	axisXS->setMin(2);
	axisXS->setMax(pow(2,(*itr)->data.maxNodesCount));
	axisXS->setMinorTickCount((*itr)->data.maxNodesCount);
	(*itr)->addAxis(axisXS, Qt::AlignBottom);
	simpsonSeries->attachAxis(axisXS);

	QValueAxis* axisYS{ new QValueAxis{this} };
	axisYS->setTitleFont(*font);
	axisYS->setTitleText(tr("Blad\nbezwzgledny").toUtf8());
	axisYS->setLabelFormat("%lf");
	axisYS->setMin(0.0);
	axisYS->setMax(trapezAttempts[0].msrError);
	(*itr)->addAxis(axisYS, Qt::AlignLeft);
	simpsonSeries->attachAxis(axisYS);
}

void Exercise2::printDataBase(){//pamiêtaj ¿eby uzupe³niæ rysunki wzorów wykresu
	QList<Chart2*>::iterator itr{this->mainCharts.begin()};
	for (INT i = 0; i < chartNmbr; ++i)
		++itr;
	if ((*itr)->data.isComputed) {
		this->ui.nodeNmbrTextEdit->setText(std::to_string((*this->currentChart)->data.maxNodesCount).c_str());
		this->ui.fromTextEdit->setText(std::to_string((*this->currentChart)->data.from).c_str());
		this->ui.toTextEdit->setText(std::to_string((*this->currentChart)->data.to).c_str());
		this->ui.analiticTextBrowser->setText(std::to_string((*this->currentChart)->data.analiticResult).c_str());
		this->ui.trapezTextBrowser->setText(std::to_string((*this->currentChart)->data.trapezResult).c_str());
		this->ui.simpsonTextBrowser->setText(std::to_string((*this->currentChart)->data.simpsonResult).c_str());
	}
	else {
		this->ui.nodeNmbrTextEdit->setText("");
		this->ui.fromTextEdit->setText("");
		this->ui.toTextEdit->setText("");
		this->ui.analiticTextBrowser->setText("");
		this->ui.trapezTextBrowser->setText("");
		this->ui.simpsonTextBrowser->setText("");
	}
}



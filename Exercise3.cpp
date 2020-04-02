#include "Exercise3.h"

Exercise3::Exercise3(QWidget* parent) : QWidget(parent), charts{ QList<Chart3*> {} },
currentChart{ QList<Chart3*>::iterator{} }, chartView{ new QChartView{this} }{
	ui.setupUi(this);
	this->ui.chartLayout->addWidget(this->chartView);
	for (INT i{ 0 }; i < 3; ++i) 
		this->charts.insert(this->charts.end(), new Chart3{ this });
	this->currentChart = charts.begin();
	this->chartView->setChart(this->charts[0]);
	connect(this->ui.searchButton, &QPushButton::clicked, this, &Exercise3::drawChart);
}

Exercise3::~Exercise3(){
}

void Exercise3::changeChart(int idx) {
}

void Exercise3::drawChart() {
	if (this->ui.fromTextEdit->toPlainText() == "" || this->ui.fromTextEdit->toPlainText() == "")
		QMessageBox::warning(this, tr("B³¹d").toUtf8(), tr("Nie uzupe³niono wszystkich pól").toUtf8(),
			QMessageBox::StandardButton::Ok);
	else {
		(*this->currentChart)->data.from = std::stold(this->ui.fromTextEdit->toPlainText().toStdString());
		(*this->currentChart)->data.to = std::stold(this->ui.toTextEdit->toPlainText().toStdString());
		std::vector<point> points{};
		if (getChartData((*this->currentChart)->data.from, (*this->currentChart)->data.to, fun
			, points, (*this->currentChart)->data.solution)) {
			for (auto& point : points) {
				debug->debugWrite(QString::fromStdString(std::to_string(point.iterationsNmbr)));
				debug->debugWrite(QString::fromStdString(std::to_string(point.precision)));
			}
			debug->show();

			QSplineSeries* series{ new QSplineSeries{this} };
			for (auto& point : points)
				series->append(point.precision, point.iterationsNmbr);
			(*this->currentChart)->addSeries(series);

			QLogValueAxis* axisX{ new QLogValueAxis{this} };
			axisX->setTitleText(tr("Dokladnosc").toUtf8());
			axisX->setBase(2);
			axisX->setLabelFormat("%lf");
			axisX->setMinorTickCount(18);
			(*this->currentChart)->addAxis(axisX, Qt::AlignBottom);
			series->attachAxis(axisX);

			QValueAxis* axisY{ new QValueAxis{this} };
			axisY->setTitleText(tr("Liczba iteracji").toUtf8());
			axisY->setLabelFormat("%i");
			//axisY->setMinorTickCount(18);
			(*this->currentChart)->addAxis(axisY, Qt::AlignLeft);
			series->attachAxis(axisY);
			this->ui.solutionTextBrowser->setText(std::to_string((*this->currentChart)->data.solution).c_str());
		}
		else 
			QMessageBox::warning(this, tr("B³¹d").toUtf8(), tr("Funkcja na koñcach tego przedzia³u\n"
				"przyjmuje wartoœci tego samego znaku").toUtf8(),
				QMessageBox::StandardButton::Ok);
	}
}
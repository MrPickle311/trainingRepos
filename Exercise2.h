#pragma once

#include <QDialog>

#include "ui_Exercise2.h"
#include "Exercise2WorkFile.h"

#include <qlist.h>
#include <qiterator.h>

#include <qmessagebox.h>

#include <list>
#include <iostream>

#include "Chart.h"
#include <QtCharts/qsplineseries.h>
#include <QtCharts/qchartview.h>
#include <QtCharts/qvalueaxis.h>
#include <QtCharts/qlogvalueaxis.h>

#include <QTextCodec>
#include "DebugDialog.h"

QT_CHARTS_USE_NAMESPACE

class Exercise2 : public QDialog{
	Q_OBJECT
public:
	Exercise2(QWidget *parent = Q_NULLPTR);
	~Exercise2();
private:
	DebugDialog* debug{ new DebugDialog{this} };
	Ui::Exercise2 ui;
	QList<Chart2*> mainCharts;
	QList<Chart2*> trapezCharts;
	QList<Chart2*> simpsonCharts;
	QList<Chart2*>::iterator currentChart;
	QChartView* chartView = Q_NULLPTR;
private slots:
	void computeValuesAndDrawChart();
	void changeChart(int idx);
	void changeMethod(int idx);
private:
	INT chartNmbr = 0;
	std::vector<Point> getFunctionValues();
	void setupNumericCharts(std::vector<attempt>&,std::vector<attempt>&);
	void printDataBase();
	void setupCharts();
	void setupMainAxis();
	void setupTrapezAxis(const QSplineSeries&);
	void setupSimpsonAxis();
private: 
	QObject* grabberChannel = Q_NULLPTR;
};

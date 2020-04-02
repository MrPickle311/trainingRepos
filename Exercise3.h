#pragma once

#include <QWidget>
#include "ui_Exercise3.h"
#include "Exercise3WorkFile.h"
#include <QtCharts/qchart.h>
#include <QtCharts/qchartview.h>
#include <QtCharts/qsplineseries.h>
#include <QtCore/qlist>
#include <QtCore/qiterator.h>
#include <QtCharts/qlogvalueaxis.h>
#include <QtCharts/qvalueaxis.h>
#include "Chart.h"
#include <qmessagebox.h>
#include "DebugDialog.h"

QT_CHARTS_USE_NAMESPACE

class Exercise3 : public QWidget{
	Q_OBJECT
private:
	DebugDialog* debug{ new DebugDialog{this} };///
	QList<Chart3*> charts;
	QList<Chart3*>::iterator currentChart;
	QChartView* chartView;
private slots:
	void drawChart();
	void changeChart(int idx);
public:
	Exercise3(QWidget *parent = Q_NULLPTR);
	~Exercise3();
private:
	Ui::Exercise3 ui;
};

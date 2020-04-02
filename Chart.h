#pragma once

#include <QtCharts/qchart.h>
#include "Exercise2WorkFile.h"

QT_CHARTS_USE_NAMESPACE

struct DataBase2 {
	bool  isComputed = false;
	INT64 maxNodesCount = 0;
	long double from = 0.0;
	long double to = 0;
	INT precision = 1080;
	long double analiticResult = 0.0;
	long double trapezResult = 0.0;
	long double simpsonResult = 0.0;
};

class Chart2 : public QChart{
	Q_OBJECT
public:
	DataBase2 data;
	Chart2(QObject *parent);
	~Chart2();
};

struct DataBase3 {
	long double from = 0.0;
	long double to = 0.0;
	long double solution = 0.0;
	long double precision = 0.0;
	INT iterationsNmbr = 0;
};

class Chart3 : public QChart{
	Q_OBJECT
public:
	DataBase3 data;
	Chart3(QObject *parent);
	~Chart3();
};
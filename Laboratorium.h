#pragma once

#include <QtWidgets/QDialog>
#include "ui_Laboratorium.h"
#include "Exercise2.h"
#include "Exercise3.h"
#include <qstackedwidget.h>

class Laboratorium : public QDialog{
	Q_OBJECT
public :
	
public:
	Laboratorium(QWidget *parent = Q_NULLPTR);
private:
	Ui::LaboratoriumClass ui;
	QStackedWidget* exercisesWidgets = Q_NULLPTR;
	Exercise2* exercise2 = Q_NULLPTR;
	Exercise3* exercise3 = Q_NULLPTR;
private slots:
	void showNextExercise();
};

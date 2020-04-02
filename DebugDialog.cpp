#include "DebugDialog.h"
#include <qsplineseries.h>

DebugDialog::DebugDialog(QWidget* parent) : QDialog(parent), view{ new QChartView{this} }, 
button{ new QPushButton{this} }, chart1{ new QChart{} }, chart2{ new QChart{} }, 
debugLayout{ new QGridLayout{} },debugTextEdit{ new QTextEdit{this} }{
	debugLayout->addWidget(debugTextEdit);
}

void DebugDialog::changeChart() {
	view->setChart(chart2);
}

void DebugDialog::debugWrite(QString text){
	QString oldText{ this->debugTextEdit->toPlainText() };
	oldText += text + "\n";
	this->debugTextEdit->setText(oldText);
}

DebugDialog::~DebugDialog(){
}

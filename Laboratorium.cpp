#include "Laboratorium.h"

Laboratorium::Laboratorium(QWidget* parent) : QDialog(parent), exercisesWidgets{ new QStackedWidget{this} }, 
exercise2{ new Exercise2{this} }, exercise3{ new Exercise3{this} }{
	ui.setupUi(this);
	this->ui.mainLayout->addWidget(this->exercisesWidgets);
	exercisesWidgets->addWidget(exercise2);
	exercisesWidgets->addWidget(exercise3);
	connect(this->ui.nextButton, &QPushButton::pressed, this, &Laboratorium::showNextExercise);
}

void Laboratorium::showNextExercise() {
	//if (this->exercisesWidgets->currentIndex() < 1) {
	//}
	 this->exercisesWidgets->setCurrentWidget(exercise3);
}

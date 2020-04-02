/********************************************************************************
** Form generated from reading UI file 'Laboratorium.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABORATORIUM_H
#define UI_LABORATORIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LaboratoriumClass
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *mainLayout;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *exerciseLabel;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *LaboratoriumClass)
    {
        if (LaboratoriumClass->objectName().isEmpty())
            LaboratoriumClass->setObjectName(QString::fromUtf8("LaboratoriumClass"));
        LaboratoriumClass->resize(1098, 780);
        LaboratoriumClass->setMinimumSize(QSize(1098, 780));
        LaboratoriumClass->setMaximumSize(QSize(1098, 780));
        gridLayoutWidget_2 = new QWidget(LaboratoriumClass);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 40, 1101, 701));
        mainLayout = new QGridLayout(gridLayoutWidget_2);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget = new QWidget(LaboratoriumClass);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(280, 0, 531, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        exerciseLabel = new QLabel(gridLayoutWidget);
        exerciseLabel->setObjectName(QString::fromUtf8("exerciseLabel"));

        gridLayout->addWidget(exerciseLabel, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(LaboratoriumClass);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 740, 1101, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        prevButton = new QPushButton(gridLayoutWidget_3);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));

        gridLayout_2->addWidget(prevButton, 1, 0, 1, 1);

        nextButton = new QPushButton(gridLayoutWidget_3);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        gridLayout_2->addWidget(nextButton, 1, 1, 1, 1);

        line = new QFrame(gridLayoutWidget_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 0, 1, 1);

        line_2 = new QFrame(gridLayoutWidget_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 1, 1, 1);


        retranslateUi(LaboratoriumClass);

        QMetaObject::connectSlotsByName(LaboratoriumClass);
    } // setupUi

    void retranslateUi(QDialog *LaboratoriumClass)
    {
        LaboratoriumClass->setWindowTitle(QCoreApplication::translate("LaboratoriumClass", "Laboratorium", nullptr));
        exerciseLabel->setText(QString());
        prevButton->setText(QCoreApplication::translate("LaboratoriumClass", "Poprzednie \304\207wiczenie", nullptr));
        nextButton->setText(QCoreApplication::translate("LaboratoriumClass", "Nast\304\231pne \304\207wiczenie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LaboratoriumClass: public Ui_LaboratoriumClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABORATORIUM_H

/********************************************************************************
** Form generated from reading UI file 'Exercise3.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISE3_H
#define UI_EXERCISE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exercise3
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *chartLayout;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTextEdit *toTextEdit;
    QPushButton *searchButton;
    QTextBrowser *solutionTextBrowser;
    QLabel *label_2;
    QTextEdit *fromTextEdit;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *Exercise3)
    {
        if (Exercise3->objectName().isEmpty())
            Exercise3->setObjectName(QString::fromUtf8("Exercise3"));
        Exercise3->resize(1092, 632);
        Exercise3->setMinimumSize(QSize(1092, 632));
        Exercise3->setMaximumSize(QSize(1092, 632));
        gridLayoutWidget = new QWidget(Exercise3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 1091, 541));
        chartLayout = new QGridLayout(gridLayoutWidget);
        chartLayout->setSpacing(6);
        chartLayout->setContentsMargins(11, 11, 11, 11);
        chartLayout->setObjectName(QString::fromUtf8("chartLayout"));
        chartLayout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(Exercise3);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 540, 1091, 91));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        toTextEdit = new QTextEdit(gridLayoutWidget_2);
        toTextEdit->setObjectName(QString::fromUtf8("toTextEdit"));
        toTextEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout_2->addWidget(toTextEdit, 0, 4, 1, 1);

        searchButton = new QPushButton(gridLayoutWidget_2);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        gridLayout_2->addWidget(searchButton, 0, 2, 1, 1);

        solutionTextBrowser = new QTextBrowser(gridLayoutWidget_2);
        solutionTextBrowser->setObjectName(QString::fromUtf8("solutionTextBrowser"));
        solutionTextBrowser->setMaximumSize(QSize(16777215, 30));

        gridLayout_2->addWidget(solutionTextBrowser, 0, 6, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 3, 1, 1);

        fromTextEdit = new QTextEdit(gridLayoutWidget_2);
        fromTextEdit->setObjectName(QString::fromUtf8("fromTextEdit"));
        fromTextEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout_2->addWidget(fromTextEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 5, 1, 1);


        retranslateUi(Exercise3);

        QMetaObject::connectSlotsByName(Exercise3);
    } // setupUi

    void retranslateUi(QWidget *Exercise3)
    {
        Exercise3->setWindowTitle(QCoreApplication::translate("Exercise3", "Exercise3", nullptr));
        searchButton->setText(QCoreApplication::translate("Exercise3", "Szukaj rozwi\304\205zania", nullptr));
        label_2->setText(QCoreApplication::translate("Exercise3", "Dok\304\205d szuka\304\207 rozwi\304\205zania ?:", nullptr));
        label->setText(QCoreApplication::translate("Exercise3", " Odk\304\205d szuka\304\207 rozwi\304\205zania ? :", nullptr));
        label_3->setText(QCoreApplication::translate("Exercise3", "Rozwi\304\205zanie :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exercise3: public Ui_Exercise3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISE3_H

/********************************************************************************
** Form generated from reading UI file 'Exercise2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISE2_H
#define UI_EXERCISE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exercise2
{
public:
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QTextEdit *chartPrecisionTextEdit;
    QLabel *label_9;
    QGraphicsView *graphicsView;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QTextBrowser *analiticTextBrowser;
    QTextBrowser *simpsonTextBrowser;
    QLabel *label_7;
    QLabel *label_6;
    QTextBrowser *trapezTextBrowser;
    QComboBox *chartsComboBox_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QPushButton *computeAndWriteButton;
    QLabel *label_3;
    QTextEdit *nodeNmbrTextEdit;
    QTextEdit *toTextEdit;
    QComboBox *chartsComboBox;
    QTextEdit *fromTextEdit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *chartLayout;

    void setupUi(QDialog *Exercise2)
    {
        if (Exercise2->objectName().isEmpty())
            Exercise2->setObjectName(QString::fromUtf8("Exercise2"));
        Exercise2->resize(1092, 632);
        gridLayoutWidget_4 = new QWidget(Exercise2);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(-1, 519, 1091, 62));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridLayoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(130, 16777215));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        chartPrecisionTextEdit = new QTextEdit(gridLayoutWidget_4);
        chartPrecisionTextEdit->setObjectName(QString::fromUtf8("chartPrecisionTextEdit"));
        chartPrecisionTextEdit->setMaximumSize(QSize(40, 30));

        gridLayout_2->addWidget(chartPrecisionTextEdit, 0, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(130, 16777215));

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        graphicsView = new QGraphicsView(gridLayoutWidget_4);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMaximumSize(QSize(350, 60));

        gridLayout_2->addWidget(graphicsView, 0, 3, 1, 1);

        gridLayoutWidget_3 = new QWidget(Exercise2);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 580, 1091, 51));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setMaximumSize(QSize(130, 16777215));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setLineWidth(1);

        gridLayout_3->addWidget(label_5, 0, 4, 1, 1);

        analiticTextBrowser = new QTextBrowser(gridLayoutWidget_3);
        analiticTextBrowser->setObjectName(QString::fromUtf8("analiticTextBrowser"));
        analiticTextBrowser->setMaximumSize(QSize(100, 30));

        gridLayout_3->addWidget(analiticTextBrowser, 0, 1, 1, 1);

        simpsonTextBrowser = new QTextBrowser(gridLayoutWidget_3);
        simpsonTextBrowser->setObjectName(QString::fromUtf8("simpsonTextBrowser"));
        simpsonTextBrowser->setMaximumSize(QSize(100, 30));

        gridLayout_3->addWidget(simpsonTextBrowser, 0, 5, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(label_6, 0, 2, 1, 1);

        trapezTextBrowser = new QTextBrowser(gridLayoutWidget_3);
        trapezTextBrowser->setObjectName(QString::fromUtf8("trapezTextBrowser"));
        trapezTextBrowser->setMaximumSize(QSize(100, 30));

        gridLayout_3->addWidget(trapezTextBrowser, 0, 3, 1, 1);

        chartsComboBox_2 = new QComboBox(gridLayoutWidget_3);
        chartsComboBox_2->addItem(QString());
        chartsComboBox_2->addItem(QString());
        chartsComboBox_2->addItem(QString());
        chartsComboBox_2->setObjectName(QString::fromUtf8("chartsComboBox_2"));
        chartsComboBox_2->setMaximumSize(QSize(230, 16777215));

        gridLayout_3->addWidget(chartsComboBox_2, 0, 6, 1, 1);

        gridLayoutWidget = new QWidget(Exercise2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 480, 1091, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(130, 16777215));

        gridLayout->addWidget(label_4, 0, 6, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        computeAndWriteButton = new QPushButton(gridLayoutWidget);
        computeAndWriteButton->setObjectName(QString::fromUtf8("computeAndWriteButton"));
        computeAndWriteButton->setMaximumSize(QSize(190, 16777215));

        gridLayout->addWidget(computeAndWriteButton, 0, 8, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(130, 16777215));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        nodeNmbrTextEdit = new QTextEdit(gridLayoutWidget);
        nodeNmbrTextEdit->setObjectName(QString::fromUtf8("nodeNmbrTextEdit"));
        nodeNmbrTextEdit->setMaximumSize(QSize(40, 30));

        gridLayout->addWidget(nodeNmbrTextEdit, 0, 3, 1, 1);

        toTextEdit = new QTextEdit(gridLayoutWidget);
        toTextEdit->setObjectName(QString::fromUtf8("toTextEdit"));
        toTextEdit->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(toTextEdit, 0, 5, 1, 1);

        chartsComboBox = new QComboBox(gridLayoutWidget);
        chartsComboBox->addItem(QString());
        chartsComboBox->addItem(QString());
        chartsComboBox->addItem(QString());
        chartsComboBox->addItem(QString());
        chartsComboBox->addItem(QString());
        chartsComboBox->addItem(QString());
        chartsComboBox->setObjectName(QString::fromUtf8("chartsComboBox"));
        chartsComboBox->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(chartsComboBox, 0, 1, 1, 1);

        fromTextEdit = new QTextEdit(gridLayoutWidget);
        fromTextEdit->setObjectName(QString::fromUtf8("fromTextEdit"));
        fromTextEdit->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(fromTextEdit, 0, 7, 1, 1);

        gridLayoutWidget_2 = new QWidget(Exercise2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 1091, 481));
        chartLayout = new QGridLayout(gridLayoutWidget_2);
        chartLayout->setSpacing(6);
        chartLayout->setContentsMargins(11, 11, 11, 11);
        chartLayout->setObjectName(QString::fromUtf8("chartLayout"));
        chartLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Exercise2);

        QMetaObject::connectSlotsByName(Exercise2);
    } // setupUi

    void retranslateUi(QDialog *Exercise2)
    {
        Exercise2->setWindowTitle(QCoreApplication::translate("Exercise2", "Exercise2", nullptr));
        label_8->setText(QCoreApplication::translate("Exercise2", "Dok\305\202adno\305\233\304\207 wykresu:", nullptr));
        chartPrecisionTextEdit->setHtml(QCoreApplication::translate("Exercise2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1080</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Exercise2", "Wz\303\263r funkcji:", nullptr));
        label_5->setText(QCoreApplication::translate("Exercise2", "Wynik metody Simpsona", nullptr));
        label_7->setText(QCoreApplication::translate("Exercise2", "Wynik analityczny : ", nullptr));
        label_6->setText(QCoreApplication::translate("Exercise2", "Wynik metody trapez\303\263w: ", nullptr));
        chartsComboBox_2->setItemText(0, QCoreApplication::translate("Exercise2", "Wykres funkcji", nullptr));
        chartsComboBox_2->setItemText(1, QCoreApplication::translate("Exercise2", "Wykres dok\305\202adno\305\233\304\207i metod\304\205 trapez\303\263w", nullptr));
        chartsComboBox_2->setItemText(2, QCoreApplication::translate("Exercise2", "Wykres dok\305\202adno\305\233ci metod\304\205 Simpsona", nullptr));

        label_2->setText(QCoreApplication::translate("Exercise2", "Maksymalna liczba w\304\231z\305\202\303\263w: 2^", nullptr));
        label_4->setText(QCoreApplication::translate("Exercise2", "Dolna granica ca\305\202kowania:", nullptr));
        label->setText(QCoreApplication::translate("Exercise2", "Wykres:", nullptr));
        computeAndWriteButton->setText(QCoreApplication::translate("Exercise2", "Rysuj wykres funkcji  i oblicz warto\305\233ci", nullptr));
        label_3->setText(QCoreApplication::translate("Exercise2", "G\303\263rna granica ca\305\202kowania:", nullptr));
        chartsComboBox->setItemText(0, QCoreApplication::translate("Exercise2", "1", nullptr));
        chartsComboBox->setItemText(1, QCoreApplication::translate("Exercise2", "2", nullptr));
        chartsComboBox->setItemText(2, QCoreApplication::translate("Exercise2", "3", nullptr));
        chartsComboBox->setItemText(3, QCoreApplication::translate("Exercise2", "4", nullptr));
        chartsComboBox->setItemText(4, QCoreApplication::translate("Exercise2", "5", nullptr));
        chartsComboBox->setItemText(5, QCoreApplication::translate("Exercise2", "6", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Exercise2: public Ui_Exercise2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISE2_H

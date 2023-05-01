/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *caloryCount;
    QLabel *caloryCountLabel;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *timeLabel;
    QDoubleSpinBox *timeSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *slopeLabel;
    QComboBox *slopeComboBox;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightLabel;
    QDoubleSpinBox *weightSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *speedLabel;
    QDoubleSpinBox *speedSpinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(680, 199);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        caloryCount = new QLabel(Widget);
        caloryCount->setObjectName("caloryCount");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        caloryCount->setFont(font);

        horizontalLayout_7->addWidget(caloryCount);

        caloryCountLabel = new QLabel(Widget);
        caloryCountLabel->setObjectName("caloryCountLabel");
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        caloryCountLabel->setFont(font1);
        caloryCountLabel->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(caloryCountLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        timeLabel = new QLabel(Widget);
        timeLabel->setObjectName("timeLabel");
        QFont font2;
        font2.setPointSize(12);
        timeLabel->setFont(font2);

        horizontalLayout->addWidget(timeLabel);

        timeSpinBox = new QDoubleSpinBox(Widget);
        timeSpinBox->setObjectName("timeSpinBox");
        timeSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(timeSpinBox);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        slopeLabel = new QLabel(Widget);
        slopeLabel->setObjectName("slopeLabel");
        slopeLabel->setFont(font2);

        horizontalLayout_3->addWidget(slopeLabel);

        slopeComboBox = new QComboBox(Widget);
        slopeComboBox->addItem(QString());
        slopeComboBox->setObjectName("slopeComboBox");

        horizontalLayout_3->addWidget(slopeComboBox);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        weightLabel = new QLabel(Widget);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setFont(font2);

        horizontalLayout_2->addWidget(weightLabel);

        weightSpinBox = new QDoubleSpinBox(Widget);
        weightSpinBox->setObjectName("weightSpinBox");
        weightSpinBox->setValue(70.000000000000000);

        horizontalLayout_2->addWidget(weightSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        speedLabel = new QLabel(Widget);
        speedLabel->setObjectName("speedLabel");
        speedLabel->setFont(font2);

        horizontalLayout_4->addWidget(speedLabel);

        speedSpinBox = new QDoubleSpinBox(Widget);
        speedSpinBox->setObjectName("speedSpinBox");
        speedSpinBox->setValue(6.000000000000000);

        horizontalLayout_4->addWidget(speedSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Calory Counter", nullptr));
        caloryCount->setText(QCoreApplication::translate("Widget", "Calory Count :", nullptr));
        caloryCountLabel->setText(QCoreApplication::translate("Widget", "100", nullptr));
        timeLabel->setText(QCoreApplication::translate("Widget", "Time (h):", nullptr));
        slopeLabel->setText(QCoreApplication::translate("Widget", "Slope:", nullptr));
        slopeComboBox->setItemText(0, QCoreApplication::translate("Widget", "Level", nullptr));

        weightLabel->setText(QCoreApplication::translate("Widget", "Weight (Kg):", nullptr));
        speedLabel->setText(QCoreApplication::translate("Widget", "Speed (Km/h):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

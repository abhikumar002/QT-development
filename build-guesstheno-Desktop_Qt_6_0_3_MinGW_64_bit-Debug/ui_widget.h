/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label1;
    QSpinBox *spinBox;
    QPushButton *guess;
    QPushButton *start;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(580, 424);
        Widget->setLayoutDirection(Qt::LeftToRight);
        label1 = new QLabel(Widget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(150, 60, 261, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label1->setFont(font);
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(100, 180, 81, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        spinBox->setFont(font1);
        spinBox->setLayoutDirection(Qt::LeftToRight);
        spinBox->setAutoFillBackground(false);
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        guess = new QPushButton(Widget);
        guess->setObjectName(QString::fromUtf8("guess"));
        guess->setGeometry(QRect(230, 190, 101, 31));
        start = new QPushButton(Widget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(360, 190, 101, 31));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 300, 401, 41));
        label->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label1->setText(QCoreApplication::translate("Widget", "GUESS THE NUMBER", nullptr));
        guess->setText(QCoreApplication::translate("Widget", "Guess", nullptr));
        start->setText(QCoreApplication::translate("Widget", "Start Over", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Text Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

/********************************************************************************
** Form generated from reading UI file 'stat.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_H
#define UI_STAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stat
{
public:
    QPushButton *Back;
    QLabel *label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *myform;
    QVBoxLayout *verticalLayout_5;
    QLabel *title_1;
    QLabel *result_1_cor;
    QLabel *result_1_incor;
    QLabel *result_1;
    QVBoxLayout *verticalLayout_4;
    QLabel *title_2;
    QLabel *result_2_cor;
    QLabel *result_2_incor;
    QLabel *result_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *title_3;
    QLabel *result_3_cor;
    QLabel *result_3_incor;
    QLabel *result_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *title_4;
    QLabel *result_4_cor;
    QLabel *result_4_incor;
    QLabel *result_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *title_5;
    QLabel *result_5_cor;
    QLabel *result_5_incor;
    QLabel *result_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Stat)
    {
        if (Stat->objectName().isEmpty())
            Stat->setObjectName("Stat");
        Stat->resize(666, 477);
        Back = new QPushButton(Stat);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(540, 420, 93, 29));
        label = new QLabel(Stat);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 70, 201, 81));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        horizontalLayoutWidget_3 = new QWidget(Stat);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(120, 160, 411, 231));
        myform = new QHBoxLayout(horizontalLayoutWidget_3);
        myform->setObjectName("myform");
        myform->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        title_1 = new QLabel(horizontalLayoutWidget_3);
        title_1->setObjectName("title_1");

        verticalLayout_5->addWidget(title_1);

        result_1_cor = new QLabel(horizontalLayoutWidget_3);
        result_1_cor->setObjectName("result_1_cor");

        verticalLayout_5->addWidget(result_1_cor);

        result_1_incor = new QLabel(horizontalLayoutWidget_3);
        result_1_incor->setObjectName("result_1_incor");

        verticalLayout_5->addWidget(result_1_incor);

        result_1 = new QLabel(horizontalLayoutWidget_3);
        result_1->setObjectName("result_1");

        verticalLayout_5->addWidget(result_1);


        myform->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        title_2 = new QLabel(horizontalLayoutWidget_3);
        title_2->setObjectName("title_2");

        verticalLayout_4->addWidget(title_2);

        result_2_cor = new QLabel(horizontalLayoutWidget_3);
        result_2_cor->setObjectName("result_2_cor");

        verticalLayout_4->addWidget(result_2_cor);

        result_2_incor = new QLabel(horizontalLayoutWidget_3);
        result_2_incor->setObjectName("result_2_incor");

        verticalLayout_4->addWidget(result_2_incor);

        result_2 = new QLabel(horizontalLayoutWidget_3);
        result_2->setObjectName("result_2");

        verticalLayout_4->addWidget(result_2);


        myform->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        title_3 = new QLabel(horizontalLayoutWidget_3);
        title_3->setObjectName("title_3");

        verticalLayout_6->addWidget(title_3);

        result_3_cor = new QLabel(horizontalLayoutWidget_3);
        result_3_cor->setObjectName("result_3_cor");

        verticalLayout_6->addWidget(result_3_cor);

        result_3_incor = new QLabel(horizontalLayoutWidget_3);
        result_3_incor->setObjectName("result_3_incor");

        verticalLayout_6->addWidget(result_3_incor);

        result_3 = new QLabel(horizontalLayoutWidget_3);
        result_3->setObjectName("result_3");

        verticalLayout_6->addWidget(result_3);


        myform->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        title_4 = new QLabel(horizontalLayoutWidget_3);
        title_4->setObjectName("title_4");

        verticalLayout_7->addWidget(title_4);

        result_4_cor = new QLabel(horizontalLayoutWidget_3);
        result_4_cor->setObjectName("result_4_cor");

        verticalLayout_7->addWidget(result_4_cor);

        result_4_incor = new QLabel(horizontalLayoutWidget_3);
        result_4_incor->setObjectName("result_4_incor");

        verticalLayout_7->addWidget(result_4_incor);

        result_4 = new QLabel(horizontalLayoutWidget_3);
        result_4->setObjectName("result_4");

        verticalLayout_7->addWidget(result_4);


        myform->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        title_5 = new QLabel(horizontalLayoutWidget_3);
        title_5->setObjectName("title_5");

        verticalLayout_8->addWidget(title_5);

        result_5_cor = new QLabel(horizontalLayoutWidget_3);
        result_5_cor->setObjectName("result_5_cor");

        verticalLayout_8->addWidget(result_5_cor);

        result_5_incor = new QLabel(horizontalLayoutWidget_3);
        result_5_incor->setObjectName("result_5_incor");

        verticalLayout_8->addWidget(result_5_incor);

        result_5 = new QLabel(horizontalLayoutWidget_3);
        result_5->setObjectName("result_5");

        verticalLayout_8->addWidget(result_5);


        myform->addLayout(verticalLayout_8);

        label_2 = new QLabel(Stat);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 230, 63, 20));
        label_3 = new QLabel(Stat);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 290, 81, 20));
        label_4 = new QLabel(Stat);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 350, 91, 20));

        retranslateUi(Stat);

        QMetaObject::connectSlotsByName(Stat);
    } // setupUi

    void retranslateUi(QWidget *Stat)
    {
        Stat->setWindowTitle(QCoreApplication::translate("Stat", "Form", nullptr));
        Back->setText(QCoreApplication::translate("Stat", "Back", nullptr));
        label->setText(QCoreApplication::translate("Stat", "STATISTIC", nullptr));
        title_1->setText(QCoreApplication::translate("Stat", "Task 1", nullptr));
        result_1_cor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_1_incor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_1->setText(QCoreApplication::translate("Stat", "0", nullptr));
        title_2->setText(QCoreApplication::translate("Stat", "Task 2", nullptr));
        result_2_cor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_2_incor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_2->setText(QCoreApplication::translate("Stat", "0", nullptr));
        title_3->setText(QCoreApplication::translate("Stat", "Task 3", nullptr));
        result_3_cor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_3_incor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_3->setText(QCoreApplication::translate("Stat", "0", nullptr));
        title_4->setText(QCoreApplication::translate("Stat", "Task 4", nullptr));
        result_4_cor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_4_incor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_4->setText(QCoreApplication::translate("Stat", "0", nullptr));
        title_5->setText(QCoreApplication::translate("Stat", "Task 5", nullptr));
        result_5_cor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_5_incor->setText(QCoreApplication::translate("Stat", "0", nullptr));
        result_5->setText(QCoreApplication::translate("Stat", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Stat", "\320\222\320\265\321\200\320\275\321\213\321\205", nullptr));
        label_3->setText(QCoreApplication::translate("Stat", "\320\235\320\265\320\262\320\265\321\200\320\275\321\213\321\205", nullptr));
        label_4->setText(QCoreApplication::translate("Stat", "\320\230\321\202\320\276\320\263\320\276 \320\261\320\260\320\273\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stat: public Ui_Stat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_H

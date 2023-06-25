/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QLineEdit *input_form;
    QLabel *title;
    QLabel *inner_text;
    QPushButton *Ok;
    QLabel *correct;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName("Task");
        Task->resize(491, 310);
        input_form = new QLineEdit(Task);
        input_form->setObjectName("input_form");
        input_form->setGeometry(QRect(80, 220, 113, 25));
        title = new QLabel(Task);
        title->setObjectName("title");
        title->setGeometry(QRect(160, 40, 63, 20));
        inner_text = new QLabel(Task);
        inner_text->setObjectName("inner_text");
        inner_text->setGeometry(QRect(30, 80, 341, 111));
        inner_text->setAcceptDrops(true);
        inner_text->setScaledContents(true);
        inner_text->setWordWrap(true);
        Ok = new QPushButton(Task);
        Ok->setObjectName("Ok");
        Ok->setGeometry(QRect(210, 220, 93, 29));
        correct = new QLabel(Task);
        correct->setObjectName("correct");
        correct->setGeometry(QRect(130, 260, 111, 21));

        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QCoreApplication::translate("Task", "Task", nullptr));
        title->setText(QCoreApplication::translate("Task", "Task 1", nullptr));
        inner_text->setText(QString());
        Ok->setText(QCoreApplication::translate("Task", "OK", nullptr));
        correct->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H

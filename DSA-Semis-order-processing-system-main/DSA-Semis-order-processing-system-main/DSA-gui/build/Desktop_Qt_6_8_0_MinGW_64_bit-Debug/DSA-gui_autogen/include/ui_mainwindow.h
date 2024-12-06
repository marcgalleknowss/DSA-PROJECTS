/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListView *stackListView;
    QListView *queueListView;
    QPushButton *peekStackButton;
    QPushButton *popButton;
    QPushButton *pushButton;
    QPushButton *enqueueButton;
    QPushButton *dequeueButton;
    QPushButton *peekQueueButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(374, 314);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 237, 208)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackListView = new QListView(centralwidget);
        stackListView->setObjectName("stackListView");
        stackListView->setGeometry(QRect(10, 65, 171, 131));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setBold(true);
        font.setItalic(true);
        stackListView->setFont(font);
        stackListView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        queueListView = new QListView(centralwidget);
        queueListView->setObjectName("queueListView");
        queueListView->setGeometry(QRect(190, 65, 171, 131));
        queueListView->setFont(font);
        queueListView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        peekStackButton = new QPushButton(centralwidget);
        peekStackButton->setObjectName("peekStackButton");
        peekStackButton->setGeometry(QRect(11, 250, 171, 18));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(7);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        peekStackButton->setFont(font1);
        peekStackButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        peekStackButton->setAutoFillBackground(false);
        peekStackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        popButton = new QPushButton(centralwidget);
        popButton->setObjectName("popButton");
        popButton->setGeometry(QRect(11, 228, 171, 18));
        popButton->setFont(font1);
        popButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        popButton->setAutoFillBackground(false);
        popButton->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(11, 206, 171, 18));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        enqueueButton = new QPushButton(centralwidget);
        enqueueButton->setObjectName("enqueueButton");
        enqueueButton->setGeometry(QRect(191, 206, 171, 18));
        enqueueButton->setFont(font1);
        enqueueButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        enqueueButton->setAutoFillBackground(false);
        enqueueButton->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        dequeueButton = new QPushButton(centralwidget);
        dequeueButton->setObjectName("dequeueButton");
        dequeueButton->setGeometry(QRect(191, 228, 171, 18));
        dequeueButton->setFont(font1);
        dequeueButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        dequeueButton->setAutoFillBackground(false);
        dequeueButton->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        peekQueueButton = new QPushButton(centralwidget);
        peekQueueButton->setObjectName("peekQueueButton");
        peekQueueButton->setGeometry(QRect(191, 250, 171, 18));
        peekQueueButton->setFont(font1);
        peekQueueButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        peekQueueButton->setAutoFillBackground(false);
        peekQueueButton->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 351, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Small Fonts")});
        font2.setBold(true);
        font2.setItalic(true);
        label->setFont(font2);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color:	rgb(34, 0, 0)"));
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(false);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Small Fonts")});
        font3.setWeight(QFont::ExtraBold);
        font3.setItalic(true);
        label_2->setFont(font3);
        label_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("color:	rgb(34, 0, 0)"));
        label_2->setTextFormat(Qt::TextFormat::AutoText);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2->setWordWrap(false);

        horizontalLayout->addWidget(label_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 374, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        peekStackButton->setText(QCoreApplication::translate("MainWindow", "LATEST FINISHED ORDER", nullptr));
        popButton->setText(QCoreApplication::translate("MainWindow", "DELETE LATEST ORDER", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "MARK ORDER AS COMPLETE", nullptr));
        enqueueButton->setText(QCoreApplication::translate("MainWindow", "QUEUE ORDER", nullptr));
        dequeueButton->setText(QCoreApplication::translate("MainWindow", "DEQUEUE ORDER", nullptr));
        peekQueueButton->setText(QCoreApplication::translate("MainWindow", "RECENT QUEUE", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "COMPLETED ORDERS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "COMPLETED ORDERS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QQueue>
#include <QStack>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void enqueueOrder();
    void dequeueOrder();
    void peekQueue();
    void pushOrder();
    void popOrder();
    void peekStack();

private:
    Ui::MainWindow *ui;
    QQueue<QString> orderQueue;
    QStack<QString> completedOrders;

    QStringListModel *queueModel;
    QStringListModel *stackModel;
    int orderCounter = 1;

    void updateQueueView();
    void updateStackView();
};
#endif

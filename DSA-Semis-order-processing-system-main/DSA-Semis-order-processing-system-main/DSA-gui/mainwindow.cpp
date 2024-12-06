#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , queueModel(new QStringListModel(this))
    , stackModel(new QStringListModel(this))
{
    ui->setupUi(this);

    ui->queueListView->setModel(queueModel);
    ui->stackListView->setModel(stackModel);

    connect(ui->enqueueButton, &QPushButton::clicked, this, &MainWindow::enqueueOrder);
    connect(ui->dequeueButton, &QPushButton::clicked, this, &MainWindow::dequeueOrder);
    connect(ui->peekQueueButton, &QPushButton::clicked, this, &MainWindow::peekQueue);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::pushOrder);
    connect(ui->popButton, &QPushButton::clicked, this, &MainWindow::popOrder);
    connect(ui->peekStackButton, &QPushButton::clicked, this, &MainWindow::peekStack);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enqueueOrder() {
    QString order = "Order " + QString::number(orderCounter++);
    orderQueue.enqueue(order);
    updateQueueView();
    QMessageBox::information(this, "Enqueue", "Enqueued: " + order);
}


void MainWindow::dequeueOrder() {
    if (!orderQueue.isEmpty()) {
        QString order = orderQueue.dequeue();
        updateQueueView();
        QMessageBox::information(this, "Dequeue", "Dequeued: " + order);
    } else {
        QMessageBox::warning(this, "Queue", "The queue is empty!");
    }
}

void MainWindow::peekQueue() {
    if (!orderQueue.isEmpty()) {
        QString order = orderQueue.head();
        QMessageBox::information(this, "Peek Queue", "Next Order: " + order);
    } else {
        QMessageBox::warning(this, "Queue", "The queue is empty!");
    }
}

void MainWindow::pushOrder() {
    if (!orderQueue.isEmpty()) {
        QString order = orderQueue.dequeue();
        completedOrders.push(order);
        updateQueueView();
        updateStackView();
        QMessageBox::information(this, "Push", "Marked as Complete!: " + order);
    } else {
        QMessageBox::warning(this, "Queue", "The queue is empty! Nothing to push to stack.");
    }
}


void MainWindow::popOrder() {
    if (!completedOrders.isEmpty()) {
        QString order = completedOrders.pop();
        updateStackView();
        QMessageBox::information(this, "Pop", "Popped: " + order);
    } else {
        QMessageBox::warning(this, "Stack", "The stack is empty!");
    }
}

void MainWindow::peekStack() {
    if (!completedOrders.isEmpty()) {
        QString order = completedOrders.top();
        QMessageBox::information(this, "Peek Stack", "Top Order: " + order);
    } else {
        QMessageBox::warning(this, "Stack", "The stack is empty!");
    }
}


void MainWindow::updateQueueView() {
    QStringList queueList;
    for (const auto &order : orderQueue) {
        queueList << order;
    }
    queueModel->setStringList(queueList);
}

void MainWindow::updateStackView() {
    QStringList stackList;
    for (const auto &order : completedOrders) {
        stackList << order;
    }
    stackModel->setStringList(stackList);
}


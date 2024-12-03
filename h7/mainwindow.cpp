#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::on_btnCount_clicked);
    QObject::connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::on_btnReset_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;

    QString s = QString::number(counter);

    ui->label->setText("Painiketta painettu " + s + " kertaa");

    ui->txtResult->setText(s);
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;

    QString s = QString::number(counter);

    ui->label->setText("Painiketta painettu " + s + " kertaa");

    ui->txtResult->setText(s);
}

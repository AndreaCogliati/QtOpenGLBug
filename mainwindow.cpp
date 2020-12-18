#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setWindowFlags(this->windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setWindowState(Qt::WindowMaximized);
    QObject::connect(ui->quit_button, &QPushButton::clicked, this, &QMainWindow::close);

//    this->showFullScreen();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_open_button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    nullptr,
                                                    tr("Images (*.png *.xpm *.jpg)"));
}

void MainWindow::on_page1_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_page2_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

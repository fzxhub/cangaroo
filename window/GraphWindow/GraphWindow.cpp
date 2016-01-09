#include "GraphWindow.h"
#include "ui_GraphWindow.h"

GraphWindow::GraphWindow(QWidget *parent, Backend &backend) :
    QWidget(parent),
    ui(new Ui::GraphWindow),
    _backend(&backend)
{
    ui->setupUi(this);
}

GraphWindow::~GraphWindow()
{
    delete ui;
}
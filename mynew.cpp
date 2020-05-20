#include "mynew.h"
#include "ui_mynew.h"

myNew::myNew(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myNew)
{
    ui->setupUi(this);
}

myNew::~myNew()
{
    delete ui;
}

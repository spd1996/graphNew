#ifndef MYNEW_H
#define MYNEW_H

#include <QMainWindow>

namespace Ui {
class myNew;
}

class myNew : public QMainWindow
{
    Q_OBJECT

public:
    explicit myNew(QWidget *parent = 0);
    ~myNew();

private slots:
    void on_pushButton_clicked();

private:
    Ui::myNew *ui;
};

#endif // MYNEW_H

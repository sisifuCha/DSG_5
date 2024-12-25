#ifndef CMAILDLG_H
#define CMAILDLG_H

#include <QDialog>
#include "smtp.h"
namespace Ui {
class cmaildlg;
}

class cmaildlg : public QDialog
{
    Q_OBJECT

public:
    explicit cmaildlg(QWidget *parent = nullptr);
    ~cmaildlg();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::cmaildlg *ui;
};



//cmaildlg::cmaildlg(QWidget *parent) :
//    cmaildlg(parent),
//    ui(new Ui::cmaildlg)


#endif // CMAILDLG_H

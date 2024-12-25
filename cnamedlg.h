#ifndef CNAMEDLG_H
#define CNAMEDLG_H

#include <QMainWindow>
#include <QCloseEvent>
#include <Global.h>//调用global
//QT_BEGIN_NAMESPACE
namespace Ui {
class CNameDlg;
}
//QT_END_NAMESPACE
class CNameDlg : public QMainWindow
{
    Q_OBJECT

public:
    explicit CNameDlg(QWidget *parent = nullptr);
    ~CNameDlg();

signals:
    void nameConfirm();

private slots:
    void on_btn_confirm_clicked();

private:
    Ui::CNameDlg *ui;
};

#endif // CNAMEDLG_H

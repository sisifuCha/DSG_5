#include "cnamedlg.h"
#include "ui_cnamedlg.h"
#include "cbejeweleddlg.h"
CNameDlg::CNameDlg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CNameDlg)
{
    ui->setupUi(this);
}

CNameDlg::~CNameDlg()
{
    delete ui;
}

void CNameDlg::on_btn_confirm_clicked()
{
//    CBejeweledDlg w;//=new CBejeweledDlg;
//    w.show();
    memset(g_rank.strName, 0, sizeof (char) * 50);
    strcpy(g_rank.strName, ui->lineEdit_name->text().toLatin1().toStdString().c_str());
    //this->close();
    this->setVisible(false);
    emit nameConfirm();
}


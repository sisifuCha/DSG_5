#ifndef CRANKDLG_H
#define CRANKDLG_H

#include <QMainWindow>
#include "Global.h"//diaoyong
#include <iostream>
#include <fstream>
#include <string>
#include <QFile>
#include <QTextStream>
#include <QDir>

using namespace std;

namespace Ui {
class CRankDlg;
}

class CRankDlg : public QMainWindow
{
    Q_OBJECT

private:
    explicit CRankDlg(QWidget *parent = nullptr);
    static CRankDlg * crankdlg;         //static的自己
    Ui::CRankDlg *ui;
    int ranknum;

private slots:
    void on_pushButton_clicked();


public:
    static CRankDlg * getCRankDlg();
    void showRank();            //显示排名
    static int getRank();       //读取排名
    static void saveRank();     //存储排名
    ~CRankDlg();
};
#endif // CRANKDLG_H

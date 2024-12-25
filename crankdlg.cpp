#include "crankdlg.h"
#include "ui_crankdlg.h"

CRankDlg * CRankDlg::crankdlg = nullptr;

CRankDlg *CRankDlg::getCRankDlg()      //传递一个static的图形界面对象
{
    if(crankdlg == nullptr)
        crankdlg = new CRankDlg;
    return crankdlg;
}

CRankDlg::CRankDlg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CRankDlg)
{
    ui->setupUi(this);
}

void CRankDlg::showRank()
{
    QString name;
    QString grade;

    switch (getRank())
    {
    case 10:
        name = QString::fromLatin1(ranks[9]->strName);
        ui->label_28->setText(name);
        grade = QString::fromStdString(to_string(ranks[9]->nGrade));//先string装换到Qstring
        ui->label_30->setText(grade);
    case 9:
        name = QString::fromLatin1(ranks[8]->strName);
        ui->label_25->setText(name);
        grade = QString::fromStdString(to_string(ranks[8]->nGrade));
        ui->label_27->setText(grade);
    case 8:
        name = QString::fromLatin1(ranks[7]->strName);
        ui->label_22->setText(name);
        grade = QString::fromStdString(to_string(ranks[7]->nGrade));
        ui->label_24->setText(grade);
    case 7:
        name = QString::fromLatin1(ranks[6]->strName);
        ui->label_19->setText(name);
        grade = QString::fromStdString(to_string(ranks[6]->nGrade));
        ui->label_21->setText(grade);
    case 6:
        name = QString::fromLatin1(ranks[5]->strName);
        ui->label_16->setText(name);
        grade = QString::fromStdString(to_string(ranks[5]->nGrade));
        ui->label_18->setText(grade);
    case 5:
        name = QString::fromLatin1(ranks[4]->strName);
        ui->label_13->setText(name);
        grade = QString::fromStdString(to_string(ranks[4]->nGrade));
        ui->label_15->setText(grade);
    case 4:
        name = QString::fromLatin1(ranks[3]->strName);
        ui->label_10->setText(name);
        grade = QString::fromStdString(to_string(ranks[3]->nGrade));
        ui->label_12->setText(grade);
    case 3:
        name = QString::fromLatin1(ranks[2]->strName);
        ui->label_7->setText(name);
        grade = QString::fromStdString(to_string(ranks[2]->nGrade));
        ui->label_9->setText(grade);
    case 2:
        name = QString::fromLatin1(ranks[1]->strName);
        ui->label_4->setText(name);
        grade = QString::fromStdString(to_string(ranks[1]->nGrade));
        ui->label_6->setText(grade);
    case 1:
        name = QString::fromLatin1(ranks[0]->strName);
        ui->label_1->setText(name);
        grade = QString::fromStdString(to_string(ranks[0]->nGrade));
        ui->label_3->setText(grade);
    case 0:
        this->show();
    }
}

//获取排名信息
int CRankDlg::getRank()
{
    QString str;
    int grade = 0;
    QFile file(QDir::currentPath() + "/rank.ini");     //获取程序所在绝对路径
    if(!file.exists())                                  //不存在就创建
    {
        file.open(QIODevice::WriteOnly);
        file.close();
    }
    file.open(QIODevice::ReadOnly);
    QTextStream instream(&file);
    instream >> str;             //将文件内容写入到str中

    int i = 0;
    for(; str != ""; i++)
    {
        ranks[i] = new RANKINFOR();
        memcpy(ranks[i]->strName, str.toStdString().c_str(), 50);//结构体中strName[50]
        instream >> grade;
        ranks[i]->nGrade = grade;
        instream >> str;
    }
    file.close();
    return i;    //返回排名数据的个数
}

//存储排名
void CRankDlg::saveRank()
{
    QFile file(QDir::currentPath() + "/rank.ini");
    file.open(QIODevice::WriteOnly);
    QTextStream outstream(&file);
    for(int i = 0; ranks[i] != nullptr && i < 10; i++)
    {
        outstream << ranks[i]->strName << " " << ranks[i]->nGrade;
    }
    file.close();
}

CRankDlg::~CRankDlg()
{
    delete ui;
}

void CRankDlg::on_pushButton_clicked()
{
    for(int i = 0; ranks[i] != 0; i++)
    {
        ranks[i]->nGrade = 0;
        ranks[i]->strName[0] = '-';
        ranks[i]->strName[1] = 0;   //设置为空的显示
    }
    saveRank();     //保存
    this->close();
    this->showRank();
}

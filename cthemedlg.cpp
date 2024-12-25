#include "cthemedlg.h"
#include "ui_cthemedlg.h"

CThemeDlg::CThemeDlg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CThemeDlg)
{
    ui->setupUi(this);
    connect(parent,SIGNAL(gameToTheme()),this,SLOT(doGameToTheme()));
    initialgemtype();

}

CThemeDlg::~CThemeDlg()
{
    delete ui;
}

void CThemeDlg::doGameToTheme(){
    this->show();
}

void CThemeDlg::on_btn_themeToGame_clicked()
{
    this->close();
    emit themeToGame();
}

void CThemeDlg::initialgemtype(){
    ui->comboBox_gemtype->addItem("gem");
    ui->comboBox_gemtype->addItem("fruit");
    ui->comboBox_gemtype->addItem("mine");
}


//确定后对背景图片、宝石图片、掩码图片进行更改，将其路径保存到config类中，在configlogic类中对cgame的背景、宝石图片进行具体修改
void CThemeDlg::on_btn_theme_confirm_clicked()
{

        QString background_path,gem_path,mask_path;

        int choice=ui->comboBox_backtype->currentIndex();
        switch(choice){
            case 0:
                background_path=":/back10.jpg";
                break;//:/new/picture
            case 1:
                background_path=":/back7.png";
                //background_path="./back2.jpg";//:/new/prefix1/back.jpg
                break;
            case 2:
                background_path=":/back9.jpg";
                break;
        }

        this->hide();
        config->set_theme_background(background_path);
        emit game_theme_background_change(background_path);
        config->set_theme_gem(gem_path);

        emit game_theme_gem_change(ui->comboBox_gemtype->currentText());
        config->set_theme_mask(mask_path);

        emit themeToGame();

}


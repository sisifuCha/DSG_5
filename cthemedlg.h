#ifndef CTHEMEDLG_H
#define CTHEMEDLG_H

#include <QMainWindow>
#include "cconfig.h"
#include <QFileDialog>
#include <QFile>
#include <QDebug>
#include <QCloseEvent>

namespace Ui {
class CThemeDlg;
}

class CThemeDlg : public QMainWindow
{
    Q_OBJECT

public:
    explicit CThemeDlg(QWidget *parent = nullptr);
    ~CThemeDlg();
    void initialgemtype();
    void initialbacktype();

signals:
    void themeToGame(); //主题设置返回设置的信号
    void game_theme_background_change(QString);
    void game_theme_gem_change(QString);

private slots:
    void doGameToTheme();
    void on_btn_themeToGame_clicked();
    void on_btn_theme_confirm_clicked();

private:
    Ui::CThemeDlg *ui;
    CConfig *config = new CConfig();

    //默认的背景图片的文件路径
    //QString backgroundimags_path=":/new/picture/background.bmp";
    //QString backgroundimags_path=":/pic2.jpg";
};

#endif // CTHEMEDLG_H

/********************************************************************************
** Form generated from reading UI file 'cthemedlg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTHEMEDLG_H
#define UI_CTHEMEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CThemeDlg
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_gemtype;
    QComboBox *comboBox_backtype;
    QPushButton *btn_themeToGame;
    QPushButton *btn_theme_confirm;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CThemeDlg)
    {
        if (CThemeDlg->objectName().isEmpty())
            CThemeDlg->setObjectName("CThemeDlg");
        CThemeDlg->resize(611, 358);
        CThemeDlg->setMinimumSize(QSize(611, 358));
        CThemeDlg->setMaximumSize(QSize(611, 358));
        centralwidget = new QWidget(CThemeDlg);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 70, 331, 191));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 72, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 130, 72, 31));
        comboBox_gemtype = new QComboBox(groupBox);
        comboBox_gemtype->setObjectName("comboBox_gemtype");
        comboBox_gemtype->setGeometry(QRect(100, 130, 191, 31));
        comboBox_backtype = new QComboBox(groupBox);
        comboBox_backtype->addItem(QString());
        comboBox_backtype->addItem(QString());
        comboBox_backtype->addItem(QString());
        comboBox_backtype->setObjectName("comboBox_backtype");
        comboBox_backtype->setGeometry(QRect(100, 50, 191, 31));
        btn_themeToGame = new QPushButton(centralwidget);
        btn_themeToGame->setObjectName("btn_themeToGame");
        btn_themeToGame->setGeometry(QRect(420, 190, 111, 41));
        btn_themeToGame->setStyleSheet(QString::fromUtf8("\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        btn_theme_confirm = new QPushButton(centralwidget);
        btn_theme_confirm->setObjectName("btn_theme_confirm");
        btn_theme_confirm->setGeometry(QRect(420, 110, 111, 41));
        btn_theme_confirm->setStyleSheet(QString::fromUtf8("\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        CThemeDlg->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CThemeDlg);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 611, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        CThemeDlg->setMenuBar(menubar);
        statusbar = new QStatusBar(CThemeDlg);
        statusbar->setObjectName("statusbar");
        CThemeDlg->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(CThemeDlg);

        QMetaObject::connectSlotsByName(CThemeDlg);
    } // setupUi

    void retranslateUi(QMainWindow *CThemeDlg)
    {
        CThemeDlg->setWindowTitle(QCoreApplication::translate("CThemeDlg", "\344\270\273\351\242\230\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CThemeDlg", "\350\256\276\347\275\256\344\270\273\351\242\230", nullptr));
        label->setText(QCoreApplication::translate("CThemeDlg", "\350\203\214\346\231\257\345\233\276\347\211\207", nullptr));
        label_2->setText(QCoreApplication::translate("CThemeDlg", "\345\256\235\347\237\263\346\240\267\345\274\217", nullptr));
        comboBox_backtype->setItemText(0, QCoreApplication::translate("CThemeDlg", "\344\270\273\351\242\2301", nullptr));
        comboBox_backtype->setItemText(1, QCoreApplication::translate("CThemeDlg", "\344\270\273\351\242\2302", nullptr));
        comboBox_backtype->setItemText(2, QCoreApplication::translate("CThemeDlg", "\344\270\273\351\242\2303", nullptr));

        btn_themeToGame->setText(QCoreApplication::translate("CThemeDlg", "\350\277\224\345\233\236", nullptr));
        btn_theme_confirm->setText(QCoreApplication::translate("CThemeDlg", "\347\241\256\345\256\232", nullptr));
        menu->setTitle(QCoreApplication::translate("CThemeDlg", "\346\233\264\346\224\271\344\270\273\351\242\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CThemeDlg: public Ui_CThemeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTHEMEDLG_H

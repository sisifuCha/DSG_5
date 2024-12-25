/********************************************************************************
** Form generated from reading UI file 'cbejeweleddlg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBEJEWELEDDLG_H
#define UI_CBEJEWELEDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBejeweledDlg
{
public:
    QWidget *centralwidget;
    QPushButton *btn_mainToGame;
    QPushButton *btn_mainToRank;
    QLabel *label_welcome;
    QPushButton *btn_name;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CBejeweledDlg)
    {
        if (CBejeweledDlg->objectName().isEmpty())
            CBejeweledDlg->setObjectName("CBejeweledDlg");
        CBejeweledDlg->resize(800, 539);
        CBejeweledDlg->setMinimumSize(QSize(800, 539));
        CBejeweledDlg->setMaximumSize(QSize(800, 539));
        CBejeweledDlg->setStyleSheet(QString::fromUtf8("#CBejeweledDlg{\n"
"border-image: url(:/back6.jpg);}"));
        centralwidget = new QWidget(CBejeweledDlg);
        centralwidget->setObjectName("centralwidget");
        btn_mainToGame = new QPushButton(centralwidget);
        btn_mainToGame->setObjectName("btn_mainToGame");
        btn_mainToGame->setGeometry(QRect(330, 400, 131, 51));
        btn_mainToGame->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_mainToGame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 228, 181);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        btn_mainToRank = new QPushButton(centralwidget);
        btn_mainToRank->setObjectName("btn_mainToRank");
        btn_mainToRank->setGeometry(QRect(580, 400, 131, 51));
        btn_mainToRank->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_mainToRank->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 255, 255);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_welcome = new QLabel(centralwidget);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(320, 200, 191, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("\344\273\277\345\256\213")});
        font.setPointSize(28);
        label_welcome->setFont(font);
        label_welcome->setContextMenuPolicy(Qt::ActionsContextMenu);
        btn_name = new QPushButton(centralwidget);
        btn_name->setObjectName("btn_name");
        btn_name->setGeometry(QRect(90, 400, 131, 51));
        btn_name->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_name->setToolTipDuration(-4);
        btn_name->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 147, 111);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 70, 301, 151));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221")});
        font1.setPointSize(48);
        label_2->setFont(font1);
        label_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        CBejeweledDlg->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CBejeweledDlg);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        CBejeweledDlg->setMenuBar(menubar);
        statusbar = new QStatusBar(CBejeweledDlg);
        statusbar->setObjectName("statusbar");
        CBejeweledDlg->setStatusBar(statusbar);

        retranslateUi(CBejeweledDlg);

        QMetaObject::connectSlotsByName(CBejeweledDlg);
    } // setupUi

    void retranslateUi(QMainWindow *CBejeweledDlg)
    {
        CBejeweledDlg->setWindowTitle(QCoreApplication::translate("CBejeweledDlg", "\345\256\235\347\237\263\350\277\267\351\230\265", nullptr));
        btn_mainToGame->setText(QCoreApplication::translate("CBejeweledDlg", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        btn_mainToRank->setText(QCoreApplication::translate("CBejeweledDlg", "\346\216\222\350\241\214\346\246\234", nullptr));
        label_welcome->setText(QCoreApplication::translate("CBejeweledDlg", "<html><head/><body><p><span style=\" color:#ffffff;\">\346\254\242\350\277\216\346\202\250\357\274\201</span></p></body></html>", nullptr));
        btn_name->setText(QCoreApplication::translate("CBejeweledDlg", "\346\233\264\346\224\271\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("CBejeweledDlg", "<html><head/><body><p><img src=\":/new/picture/bsmz1.png\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CBejeweledDlg: public Ui_CBejeweledDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBEJEWELEDDLG_H

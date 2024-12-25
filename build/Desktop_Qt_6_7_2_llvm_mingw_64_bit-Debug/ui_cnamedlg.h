/********************************************************************************
** Form generated from reading UI file 'cnamedlg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNAMEDLG_H
#define UI_CNAMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNameDlg
{
public:
    QWidget *centralwidget;
    QPushButton *btn_confirm;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CNameDlg)
    {
        if (CNameDlg->objectName().isEmpty())
            CNameDlg->setObjectName("CNameDlg");
        CNameDlg->setEnabled(true);
        CNameDlg->resize(382, 158);
        CNameDlg->setStyleSheet(QString::fromUtf8("#CNameDlg{\n"
"border-image: url(:/back8.png);}"));
        centralwidget = new QWidget(CNameDlg);
        centralwidget->setObjectName("centralwidget");
        btn_confirm = new QPushButton(centralwidget);
        btn_confirm->setObjectName("btn_confirm");
        btn_confirm->setGeometry(QRect(140, 90, 111, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font.setPointSize(14);
        btn_confirm->setFont(font);
        btn_confirm->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 71, 39));
        label->setFont(font);
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(130, 20, 221, 39));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font1.setPointSize(18);
        lineEdit_name->setFont(font1);
        lineEdit_name->setAlignment(Qt::AlignCenter);
        CNameDlg->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CNameDlg);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 382, 26));
        CNameDlg->setMenuBar(menubar);
        statusbar = new QStatusBar(CNameDlg);
        statusbar->setObjectName("statusbar");
        CNameDlg->setStatusBar(statusbar);

        retranslateUi(CNameDlg);

        QMetaObject::connectSlotsByName(CNameDlg);
    } // setupUi

    void retranslateUi(QMainWindow *CNameDlg)
    {
        CNameDlg->setWindowTitle(QCoreApplication::translate("CNameDlg", "\350\256\276\347\275\256\345\247\223\345\220\215", nullptr));
        btn_confirm->setText(QCoreApplication::translate("CNameDlg", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("CNameDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lineEdit_name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CNameDlg: public Ui_CNameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNAMEDLG_H

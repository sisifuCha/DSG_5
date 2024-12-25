/********************************************************************************
** Form generated from reading UI file 'cmaildlg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAILDLG_H
#define UI_CMAILDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_cmaildlg
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *cmaildlg)
    {
        if (cmaildlg->objectName().isEmpty())
            cmaildlg->setObjectName("cmaildlg");
        cmaildlg->resize(400, 219);
        cmaildlg->setStyleSheet(QString::fromUtf8("#cmaildlg{\n"
"border-image: url(:/back7.png);}"));
        buttonBox = new QDialogButtonBox(cmaildlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-60, 150, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(cmaildlg);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 90, 231, 31));
        label = new QLabel(cmaildlg);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 90, 81, 41));
        label_2 = new QLabel(cmaildlg);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 361, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font.setPointSize(14);
        font.setItalic(false);
        label_2->setFont(font);

        retranslateUi(cmaildlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, cmaildlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, cmaildlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(cmaildlg);
    } // setupUi

    void retranslateUi(QDialog *cmaildlg)
    {
        cmaildlg->setWindowTitle(QCoreApplication::translate("cmaildlg", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cmaildlg", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\202\256\347\256\261\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("cmaildlg", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmaildlg: public Ui_cmaildlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAILDLG_H

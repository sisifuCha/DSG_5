/********************************************************************************
** Form generated from reading UI file 'crankdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRANKDLG_H
#define UI_CRANKDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRankDlg
{
public:
    QAction *actionClear;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_1;
    QLabel *label_24;
    QLabel *label_12;
    QLabel *label_30;
    QLabel *label_22;
    QLabel *label;
    QLabel *label_18;
    QLabel *label_32;
    QLabel *label_28;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_27;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_15;
    QLabel *label_9;
    QLabel *label_25;
    QLabel *label_19;
    QLabel *label_16;
    QLabel *label_13;
    QLabel *label_21;
    QPushButton *pushButton;
    QListView *listView;

    void setupUi(QMainWindow *CRankDlg)
    {
        if (CRankDlg->objectName().isEmpty())
            CRankDlg->setObjectName("CRankDlg");
        CRankDlg->resize(557, 600);
        CRankDlg->setMinimumSize(QSize(557, 600));
        CRankDlg->setMaximumSize(QSize(557, 600));
        CRankDlg->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 255, 250);\n"
"selection-background-color: rgb(255, 0, 0);"));
        actionClear = new QAction(CRankDlg);
        actionClear->setObjectName("actionClear");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(true);
        actionClear->setFont(font);
        centralwidget = new QWidget(CRankDlg);
        centralwidget->setObjectName("centralwidget");
        QPalette palette;
        QBrush brush(QColor(207, 255, 250, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        centralwidget->setPalette(palette);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 83, 501, 481));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(layoutWidget);
        label_1->setObjectName("label_1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\232\266\344\271\246")});
        font1.setPointSize(22);
        label_1->setFont(font1);
        label_1->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_1, 1, 0, 1, 1);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName("label_24");
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_24, 8, 1, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 4, 1, 1, 1);

        label_30 = new QLabel(layoutWidget);
        label_30->setObjectName("label_30");
        sizePolicy.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy);
        label_30->setFont(font1);
        label_30->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_30, 10, 1, 1, 1);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName("label_22");
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_22, 8, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(14);
        label->setFont(font2);
        label->setTextFormat(Qt::MarkdownText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_18, 6, 1, 1, 1);

        label_32 = new QLabel(layoutWidget);
        label_32->setObjectName("label_32");
        label_32->setFont(font2);
        label_32->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_32, 0, 1, 1, 1);

        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName("label_28");
        sizePolicy.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy);
        label_28->setFont(font1);
        label_28->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_28, 10, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_27 = new QLabel(layoutWidget);
        label_27->setObjectName("label_27");
        sizePolicy.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy);
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_27, 9, 1, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 5, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 3, 1, 1, 1);

        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName("label_25");
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_25, 9, 0, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_19, 7, 0, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 6, 0, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_21, 7, 1, 1, 1);

        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 4);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 19, 81, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    border: 1px solid #3a8ee6;\n"
"    color: #409eff;\n"
"}\n"
"\n"
"#button3 {\n"
"    border-radius: 20px;\n"
"}"));
        listView = new QListView(groupBox);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(200, 10, 141, 41));
        listView->setAutoFillBackground(false);
        listView->setStyleSheet(QString::fromUtf8("background-image: url(:/new/picture/RankWord.png);\n"
""));
        listView->setFrameShape(QFrame::Box);
        listView->setLineWidth(-2);
        listView->raise();
        layoutWidget->raise();
        pushButton->raise();

        verticalLayout->addWidget(groupBox);

        CRankDlg->setCentralWidget(centralwidget);

        retranslateUi(CRankDlg);

        QMetaObject::connectSlotsByName(CRankDlg);
    } // setupUi

    void retranslateUi(QMainWindow *CRankDlg)
    {
        CRankDlg->setWindowTitle(QCoreApplication::translate("CRankDlg", "\346\216\222\350\241\214\346\246\234", nullptr));
        actionClear->setText(QCoreApplication::translate("CRankDlg", "Clear", nullptr));
        groupBox->setTitle(QString());
        label_1->setText(QString());
        label_24->setText(QString());
        label_12->setText(QString());
        label_30->setText(QString());
        label_22->setText(QString());
        label->setText(QCoreApplication::translate("CRankDlg", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_18->setText(QString());
        label_32->setText(QCoreApplication::translate("CRankDlg", "\346\234\200\351\253\230\350\256\260\345\275\225", nullptr));
        label_28->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        label_4->setText(QString());
        label_27->setText(QString());
        label_10->setText(QString());
        label_7->setText(QString());
        label_15->setText(QString());
        label_9->setText(QString());
        label_25->setText(QString());
        label_19->setText(QString());
        label_16->setText(QString());
        label_13->setText(QString());
        label_21->setText(QString());
        pushButton->setText(QCoreApplication::translate("CRankDlg", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CRankDlg: public Ui_CRankDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRANKDLG_H

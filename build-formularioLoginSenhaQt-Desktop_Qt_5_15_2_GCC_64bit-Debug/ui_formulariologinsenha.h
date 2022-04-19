/********************************************************************************
** Form generated from reading UI file 'formulariologinsenha.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIOLOGINSENHA_H
#define UI_FORMULARIOLOGINSENHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormularioLoginSenha
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLabel *logo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_usuario;
    QLineEdit *linha_usuario;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_senha;
    QLineEdit *linha_senha;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chk;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_logar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FormularioLoginSenha)
    {
        if (FormularioLoginSenha->objectName().isEmpty())
            FormularioLoginSenha->setObjectName(QString::fromUtf8("FormularioLoginSenha"));
        FormularioLoginSenha->resize(513, 376);
        FormularioLoginSenha->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(FormularioLoginSenha);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 150, 241, 31));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(180, 40, 191, 91));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 200, 436, 64));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_usuario = new QLabel(layoutWidget);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));

        horizontalLayout->addWidget(label_usuario);

        linha_usuario = new QLineEdit(layoutWidget);
        linha_usuario->setObjectName(QString::fromUtf8("linha_usuario"));
        linha_usuario->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout->addWidget(linha_usuario);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_senha = new QLabel(layoutWidget);
        label_senha->setObjectName(QString::fromUtf8("label_senha"));

        horizontalLayout_2->addWidget(label_senha);

        linha_senha = new QLineEdit(layoutWidget);
        linha_senha->setObjectName(QString::fromUtf8("linha_senha"));
        linha_senha->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
        linha_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(linha_senha);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 270, 371, 27));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        chk = new QCheckBox(widget);
        chk->setObjectName(QString::fromUtf8("chk"));
        chk->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_4->addWidget(chk);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer);

        btn_logar = new QPushButton(widget);
        btn_logar->setObjectName(QString::fromUtf8("btn_logar"));
        btn_logar->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 101, 164);"));

        horizontalLayout_4->addWidget(btn_logar);

        FormularioLoginSenha->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FormularioLoginSenha);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 513, 22));
        FormularioLoginSenha->setMenuBar(menubar);
        statusbar = new QStatusBar(FormularioLoginSenha);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FormularioLoginSenha->setStatusBar(statusbar);

        retranslateUi(FormularioLoginSenha);

        QMetaObject::connectSlotsByName(FormularioLoginSenha);
    } // setupUi

    void retranslateUi(QMainWindow *FormularioLoginSenha)
    {
        FormularioLoginSenha->setWindowTitle(QCoreApplication::translate("FormularioLoginSenha", "FormularioLoginSenha", nullptr));
        label_3->setText(QCoreApplication::translate("FormularioLoginSenha", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700; color:#eeeeec;\">Sistema de login</span></h1></body></html>", nullptr));
        logo->setText(QCoreApplication::translate("FormularioLoginSenha", "logo", nullptr));
        label_usuario->setText(QCoreApplication::translate("FormularioLoginSenha", "<html><head/><body><p><span style=\" color:#eeeeec;\">Usu\303\241rio</span></p></body></html>", nullptr));
        label_senha->setText(QCoreApplication::translate("FormularioLoginSenha", "<html><head/><body><p><span style=\" color:#eeeeec;\">Senha :        </span></p></body></html>", nullptr));
        chk->setText(QCoreApplication::translate("FormularioLoginSenha", "Matenha logado", nullptr));
        btn_logar->setText(QCoreApplication::translate("FormularioLoginSenha", "Logar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormularioLoginSenha: public Ui_FormularioLoginSenha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIOLOGINSENHA_H

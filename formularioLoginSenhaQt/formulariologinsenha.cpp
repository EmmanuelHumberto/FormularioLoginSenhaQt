#include "formulariologinsenha.h"
#include "ui_formulariologinsenha.h"
#include <QPixmap>


FormularioLoginSenha::FormularioLoginSenha(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormularioLoginSenha)
{
    ui->setupUi(this);
    QPixmap logo("/home/ss/Imagens/logoLigado.jpg");
    ui->logo ->setPixmap(logo.scaled(150, 150, Qt::KeepAspectRatio));
}

FormularioLoginSenha::~FormularioLoginSenha()
{
    delete ui;
}


void FormularioLoginSenha::on_btn_logar_clicked()
{
    if(ui -> linha_usuario -> text() == "emmanuel@ligado.com.br" && ui -> linha_senha -> text() == "1234" )
    {
        ui -> statusbar->setStyleSheet("color: #ccff33");
        ui -> statusbar-> showMessage( " Logado com Ssucesso ");


    }else{
        ui -> statusbar->setStyleSheet("color: red");
        ui -> statusbar-> showMessage( " Falha ao logar ");
    }
}


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
        if( ui -> chk -> isChecked() )
        {
            ui -> statusbar-> showMessage( "Manter logado");
            ui -> statusbar->setStyleSheet("color: #bbee99");
        }else{

            ui -> statusbar-> showMessage( " CheckBox não marcado e logado com sucesso! ");
            ui -> statusbar->setStyleSheet("color: #bbee99");
        }

    }else{
        ui -> statusbar->setStyleSheet("color: red");
        ui -> statusbar-> showMessage( " Falha ao logar ");
    }
}


void FormularioLoginSenha::on_chk_stateChanged(int arg1)
{
    if( arg1 > 0)
    {
        ui -> statusbar-> showMessage( "CheckBox marcado!");
        ui -> statusbar->setStyleSheet("color: #bbee99");
    }else{

        ui -> statusbar-> showMessage( " CheckBox não marcado!");
        ui -> statusbar->setStyleSheet("color: #bbee99");

}

}

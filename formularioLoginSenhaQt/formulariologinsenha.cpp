#include "formulariologinsenha.h"
#include "ui_formulariologinsenha.h"

FormularioLoginSenha::FormularioLoginSenha(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormularioLoginSenha)
{
    ui->setupUi(this);
}

FormularioLoginSenha::~FormularioLoginSenha()
{
    delete ui;
}


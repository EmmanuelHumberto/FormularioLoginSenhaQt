#ifndef FORMULARIOLOGINSENHA_H
#define FORMULARIOLOGINSENHA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FormularioLoginSenha; }
QT_END_NAMESPACE

class FormularioLoginSenha : public QMainWindow
{
    Q_OBJECT

public:
    FormularioLoginSenha(QWidget *parent = nullptr);
    ~FormularioLoginSenha();

private slots:
    void on_btn_logar_clicked();

private:
    Ui::FormularioLoginSenha *ui;
};
#endif // FORMULARIOLOGINSENHA_H

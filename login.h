#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
    class login;
}

class login : public QDialog {
    Q_OBJECT
public:
    login(QWidget *parent = 0);
    ~login();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::login *ui;
    //Propriétés
    bool saisieOkLogin();

private slots:
    void on_lineEditMdp_textChanged(QString );
    void on_lineEditIdentifiant_textChanged(QString );
    void on_pushButtonQuitter_clicked();
    void on_pushButtonConnecter_clicked();
};

#endif // LOGIN_H

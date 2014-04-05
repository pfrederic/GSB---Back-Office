#ifndef PRATICIEN_H
#define PRATICIEN_H

#include <QDialog>

namespace Ui {
    class praticien;
}

class praticien : public QDialog {
    Q_OBJECT
public:
    praticien(QWidget *parent = 0);
    ~praticien();

    //Propriétés
    QVector <QString> vTypePraticien;
    //Méthode
    void chargerComboBoxType();
    int getSpinBoxId();
    QString getLineEditNom();
    QString getLineEditPrenom();
    float getDoubleSpinBoxCoeffNot();
    QString getComboBoxType();
    void setSpinBoxId(int);
    void setLineEditNom(QString);
    void setLineEditPrenom(QString);
    void setDoubleSpinBoxCoeffNot(float);
    void setComboBoxType(QString);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::praticien *ui;

private slots:
    void on_pushButtonAnnuler_clicked();
    void on_pushButtonEditer_clicked();
};

#endif // PRATICIEN_H

#ifndef ADDMEDICAMENT_H
#define ADDMEDICAMENT_H

#include <QDialog>
#include <QVector>

namespace Ui {
    class addMedicament;
}

class addMedicament : public QDialog {
    Q_OBJECT
public:
    addMedicament(QWidget *parent = 0);
    ~addMedicament();
    //Propriétés
    QVector <QString> vFamilleMedoc;
    //Méthode
    void chargerComboBoxFamille();

    QString getLineEditMedDepotLegal();
    QString getLineEditMedNomCommercial();
    QString getComboBoxFamCode();
    QString getTextEditComposition();
    QString getTextEditEffets();
    QString getTextEditContreIndic();
    float getDoubleSpinPrixEch();
    void setLineEditDepotLegal(QString);
    void setLineEditNomCommercial(QString);
    void setComboBoxFamille(QString);
    void setTextEditComposition(QString);
    void setTextEditEffets(QString);
    void setTextEditContreIndication(QString);
    void setDoubleSpinBoxPrixEch(double);


protected:
    void changeEvent(QEvent *e);

private:
    Ui::addMedicament *ui;

private slots:
    void on_pushButtonAnnuler_clicked();
    void on_pushButtonAddMedocAjouter_clicked();
};

#endif // ADDMEDICAMENT_H

#ifndef VISITEUR_H
#define VISITEUR_H

#include <QDialog>
#include <QVector>

namespace Ui {
    class visiteur;
}

class visiteur : public QDialog {
    Q_OBJECT
public:
    visiteur(QWidget *parent = 0);
    ~visiteur();
    //Propriétés
    QVector <QString> vSecteurVisiteur;
    QVector <QString> vLaboratoireVisiteur;
    QVector <QString> vDepartementVisiteur;
    QString niveauHierarchie;
    int     chefVente;

    //Méthode
    void chargeComboBoxs();

    QString getLineEditMatricule();
    QString getLineEditNom();
    QString getLineEditPrenom();
    QString getLineEditAdresse();
    QString getLineEditCP();
    QString getLineEditVille();
    QString getComboBoxSecteur();
    QString getComboBoxLaboratoire();
    QString getComboBoxDepartement();
    QString getRadioButonHierarchie();
    QString getRadioButonHierarchieModification();
    QString getCheckBoxChefVente();
    void setLineEditMatricule(QString);
    void setLineEditNom(QString);
    void setLineEditPrenom(QString);
    void setLineEditAdresse(QString);
    void setLineEditCP(QString);
    void setLineEditVille(QString);
    void setComboBoxSecteur(QString);
    void setComboBoxLaboratoire(QString);
    void setComboBoxDepartement(QString);
    void setRadioButtonHierarchie(QString);
    void setCheckBoxChefVente(QString);


protected:
    void changeEvent(QEvent *e);

private:
    Ui::visiteur *ui;

private slots:


private slots:
    void on_pushButtonAjouter_clicked();
    void on_pushButtonAnnuler_clicked();
};

#endif // VISITEUR_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QVector>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    //Propriétés
    QSqlDatabase db;
    QSqlTableModel * tableModelMedicament;
    QSqlQueryModel * queryModelMedicament;
    QSqlTableModel * tableModelPraticien;
    QSqlQueryModel * queryModelPraticien;
    QSqlTableModel * tableModelVisiteur;
    QSqlQueryModel * queryModelVisiteur;

    QVector <QString> vFamilleMedicament;
    QVector <QString> vTypePraticien;
    QVector <QString> vSecteurVisiteur;
    QVector <QString> vLaboVisiteur;
    QVector <QString> vDepartementVisiteur;

    //Méthode

private slots:
    void on_pushButtonVisiteurEdit_clicked();
    void on_tableViewVisiteur_clicked(QModelIndex index);
    void on_pushButtonPraticienAjouter_clicked();
    void on_pushButtonMedicamentModifier_clicked();
    void on_pushButtonMedicamentAjouter_clicked();
    void on_pushButtonVisiteurAjouter_clicked();
    void on_pushButtonVisiteurSupprimer_clicked();
    void on_actionVisiteur_triggered();
    void on_pushButtonPraticienModifier_clicked();
    void on_tableViewPraticien_clicked(QModelIndex index);
    void on_pushButtonPraticienSupprimer_clicked();
    void on_actionPraticien_triggered();
    void on_tableViewMedicament_clicked(QModelIndex index);
    void on_pushButtonMedicamentSupprimer_clicked();
    void on_actionMedicament_triggered();
    void on_actionQuitter_triggered();
    void rechercheMedicament();
    void recherchePraticien();
    void rechercheVisiteur();
    void connectionDesObjetsMedicaments();
    void connectionDesObjetsPraticiens();
    void connectionDesObjetsVisiteurs();
    void ajoutEnDelegue(QString);
    void ajoutEnResponsable(QString);
    void modifierChefVente(QString, QString);
    void supprimerDeDelegue(QString);
    void supprimerDeResponsable(QString);
    void supprimerChefVente(QString);
};

#endif // MAINWINDOW_H

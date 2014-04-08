#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "addmedicament.h"
#include "praticien.h"
#include "visiteur.h"
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QVector>

namespace Ui {
    class MainWindow;
}

/*!
 * \brief       La classe mainwindow est le coeur de l'application. Elle permet d'afficher les informations de la base. Elle permet de créer des fenêtres des autres classes pour une meilleure gestion des données de la base. C'est dans cette classe que se trouve l'ajout et la modification des données (contrairement aux autres classes, qui ne sont que des interfaces avec assesseur).
 * \file        mainwindow.h
 * \author      Pignoly Frédéric
 * \version     1.0b
 * \date        02/2014
 * \inherit     QMainWindow
 * \details     main.cpp
 * \copyright   GNU Public License
 */

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    /*!
     * \fn          MainWindow::MainWindow(QWidget *parent)
     * \brief       Constructeur de la classe MainWindow.
     * \param       parent
     * \property    builder
     */
    MainWindow(QWidget *parent = 0);
    /*!
     * \fn          ~MainWindow()
     * \brief       Destructeur de la classe MainWindow.
     */
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

    /*------------------------------------------------------- MEDICAMENT -------------------------------------------------------*/
    /*!
     * \var         tableModelMedicament
     * \brief       Pointeur d'une QSqlTableModel. Elle permet la gestion des médicaments de la base, c'est à dire, l'ajout, la modification et la suppression de médicaments.
     * \property    property
     */
    QSqlTableModel * tableModelMedicament;
    /*!
     * \var         queryModelMedicament
     * \brief       Pointeur d'une QSqlQueryModel. Elle permet l'affichage des médicaments dans tableViewMedicament. Lors d'une recherche, c'est grâce à ce pointeur que le résultat de la recherche s'affiche dans le tableViewMedicament.
     * \property    property
     */
    QSqlQueryModel * queryModelMedicament;
    /*!
     * \var         vFamilleMedicament
     * \brief       Vecteur des familles de médicament. Utilisé en corrélation avec la liste déroulante de l'interface.
     * \property    property
     */
    QVector <QString> vFamilleMedicament;

    /*------------------------------------------------------- PRATICIEN -------------------------------------------------------*/
    /*!
     * \var         tableModelPraticien
     * \brief       Pointeur d'une QSqlTableModel. Elle permet la gestion des praticiens de la base, c'est à dire, l'ajout, la modification et la suppression de praticiens.
     * \property    property
     */
    QSqlTableModel * tableModelPraticien;
    /*!
     * \var         queryModelPraticien
     * \brief       Pointeur d'une QSqlQueryModel. Elle permet l'affichage des praticiens dans tableViewPraticien. Lors d'une recherche, c'est grâce à ce pointeur que le résultat de la recherche s'affiche dans le tableViewPraticien.
     * \property    property
     */
    QSqlQueryModel * queryModelPraticien;
    /*!
     * \var         vTypePraticien
     * \brief       Vecteur des types de praticiens. Utilisé en corrélation avec la liste déroulante de l'interface.
     * \property    property
     */
    QVector <QString> vTypePraticien;

    /*------------------------------------------------------- VISITEUR -------------------------------------------------------*/
    /*!
     * \var         tableModelVisiteur
     * \brief       Pointeur d'une QSqlTableModel. Elle permet la gestion des visiteurs de la base, c'est à dire, l'ajout, la modification et la suppression de visiteurs.
     * \property    property
     */
    QSqlTableModel * tableModelVisiteur;
    /*!
     * \var         queryModelVisiteur
     * \brief       Pointeur d'une QSqlQueryModel. Elle permet l'affichage des visiteurs dans tableViewVisiteur. Lors d'une recherche, c'est grâce à ce pointeur que le résultat de la recherche s'affiche dans le tableViewVisiteur.
     * \property    property
     */
    QSqlQueryModel * queryModelVisiteur;    
    /*!
     * \var         vSecteurVisiteur
     * \brief       Vecteur des secteur des visiteurs. Utilisé en corrélation avec la liste déroulante de l'interface.
     * \property    property
     */
    QVector <QString> vSecteurVisiteur;
    /*!
     * \var         vLaboVisiteur
     * \brief       Vecteur des laboratoires des visiteurs. Utilisé en corrélation avec la liste déroulante de l'interface.
     * \property    property
     */
    QVector <QString> vLaboVisiteur;
    /*!
     * \var         vDepartementVisiteur
     * \brief       Vecteur des départements Français. Utilisé en corrélation avec la liste déroulante de l'interface.
     * \property    property
     */
    QVector <QString> vDepartementVisiteur;

    /*------------------------------------------------------- DIVERS -------------------------------------------------------*/
    /*!
     * \var         db
     * \brief       Objet permettant la connexion à la base. Créé lors de la construction de mainwindow.
     * \property    property
     */
    QSqlDatabase db;

private slots:

    /*------------------------------------------------------- MEDICAMENT -------------------------------------------------------*/
    /*!
     * \fn          void MainWindow::on_pushButtonMedicamentAjouter_clicked()
     * \brief       Cette fonction est liée au bouton d'ajout d'un médicament. Lors du clique il ouvre une fenêtre de la classe médicament, avec les champs vierges.
     * \property    function
     */
    void on_pushButtonMedicamentAjouter_clicked();
    /*!
     * \fn          void MainWindow::on_pushButtonMedicamentModifier_clicked()
     * \brief       Cette fonction est liée au bouton d'édition d'un medicament. Il s'active si un medicament est sélectionné dans tableViewMedicament. Lors du clique il ouvre une fenêtre de la classe médicament, avec les champs de cette nouvelle fenêtre rempli avec les valeurs du médicament sélectionné. Une fois les modifications faites, la fonction se charge d'apporter les modifications à la base de données (Si elle reçoit le sigal "accept" de la part de la fenêtre d'édition).
     * \property    function
     */
    void on_pushButtonMedicamentModifier_clicked();
    /*!
     * \fn          void MainWindow::on_pushButtonMedicamentSupprimer_clicked
     * \brief       Cette fonction est liée au bouton de suppression d'un médicament. Il s'active si un médicament est sélectionné dans tableViewMédicament. Retire l'occurence sélectionnée dans le tableViewMédicament.
     * \property    function
     */
    void on_pushButtonMedicamentSupprimer_clicked();
    /*!
     * \fn          void MainWindow::on_tableViewMedicament_clicked(QModelIndex index)
     * \brief       Cette fonction est liée au tableViewMedicament. Elle active les boutons d'édition et de suppression lorsqu'un médicament est sélectionné dans le tableViewMedicament.
     * \param       index La ligne sélectionnée dans le tableViewMédicament.
     * \property    function
     */
    void on_tableViewMedicament_clicked(QModelIndex index);
    /*!
     * \fn          void MainWindow::on_actionMedicament_triggered()
     * \brief       Cette fonction est associée au bouton "Visiteur" du menu "Gestion". Elle permet de charger les différents éléments de l'interface de l'ongler Visiteur.
     *              Change l'onglet de tabWigetAction, déconnecte les éléments de l'interface, affectecte les 2 pointeurs (tableModelMedicament queryModelMedicament), charge les différentes listes déroulantes de l'interface (création des lignes) et les vecteurs associés, et de charger et afficher le tableViewVisiteur avec les informations de la base. Elle connecte également les lineEdits de recherche avec la fonction de recherche.
     * \property    function
     */
    void on_actionMedicament_triggered();
    /*!
     * \fn          void MainWindow::rechercheMedicament()
     * \brief       Cette fonction permet de réaliser une recherche avec les champs de l'interface parmit les médicaments. Tous les champs de l'interface utile pour la recherche sont reliées à cette fonction.
     * \property    function
     */
    void rechercheMedicament();
    /*!
     * \fn          void MainWindow::connectionDesObjetsMedicaments()
     * \brief       Cette fonction permet de connecter les éléments de l'interface (lineEdit, liste déroulante, ...) à la fonction de recherche de médicaments.
     * \property    function
     */
    void connectionDesObjetsMedicaments();

    /*------------------------------------------------------- PRATICIEN -------------------------------------------------------*/
    /*!
     * \fn          void MainWindow::on_pushButtonPraticienAjouter_clicked()
     * \brief       Cette fonction est liée au bouton d'ajout d'un praticien. Lors du clique il ouvre une fenêtre de la classe praticien, avec les champs vierges.
     * \property    function
     */
    void on_pushButtonPraticienAjouter_clicked();
    /*!
     * \fn          void MainWindow::on_pushButtonPraticienModifier_clicked()
     * \brief       Cette fonction est liée au bouton d'édition d'un praticien. Il s'active si un praticien est sélectionné dans tableViewPraticien. Lors du clique il ouvre une fenêtre de la classe praticien, avec les champs de cette nouvelle fenêtre rempli avec les valeurs du praticien sélectionné. Une fois les modifications faites, la fonction se charge d'apporter les modifications à la base de données (Si elle reçoit le sigal "accept" de la part de la fenêtre d'édition).
     * \property    function
     */
    void on_pushButtonPraticienModifier_clicked();
    /*!
     * \fn          void MainWindow::on_pushButtonPraticienSupprimer_clicked()
     * \brief       Cette fonction est liée au bouton de suppression d'un praticien. Il s'active si un praticien est sélectionné dans tableViewPraticien. Retire l'occurence sélectionnée dans le tableViewPraticien.
     * \property    function
     */
    void on_pushButtonPraticienSupprimer_clicked();
    /*!
     * \fn          void MainWindow::on_tableViewPraticien_clicked(QModelIndex index)
     * \brief       Cette fonction est liée au tableViewPraticien. Elle active les boutons d'édition et de suppression lorsqu'un praticien est sélectionné dans le tableViewPraticien.
     * \param       index La ligne sélectionnée dans le tableViewPraticien.
     * \property    function
     */
    void on_tableViewPraticien_clicked(QModelIndex index);
    /*!
     * \fn          void MainWindow::on_actionPraticien_triggered()
     * \brief       Cette fonction est associée au bouton "Visiteur" du menu "Gestion". Elle permet de charger les différents éléments de l'interface de l'ongler Visiteur.
     *              Change l'onglet de tabWigetAction, déconnecte les éléments de l'interface, affectecte les 2 pointeurs (tableModelPraticien queryModelPraticien), charge les différentes listes déroulantes de l'interface (création des lignes) et les vecteurs associés, et de charger et afficher le tableViewVisiteur avec les informations de la base. Elle connecte également les lineEdits de recherche avec la fonction de recherche.
     * \property    function
     */
    void on_actionPraticien_triggered();
    /*!
     * \fn          void MainWindow::recherchePraticien()
     * \brief       Cette fonction permet de réaliser une recherche avec les champs de l'interface parmit les praticiens. Tous les champs de l'interface utile pour la recherche sont reliées à cette fonction.
     * \property    function
     */
    void recherchePraticien();
    /*!
     * \fn          void MainWindow::connectionDesObjetsPraticiens()
     * \brief       Cette fonction permet de connecter les éléments de l'interface (lineEdit, liste déroulante, ...) à la fonction de recherche de praticiens.
     * \property    function
     */
    void connectionDesObjetsPraticiens();

    /*------------------------------------------------------- VISITEUR -------------------------------------------------------*/
    /*!
     * \fn          void MainWindow::on_pushButtonVisiteurAjouter_clicked()
     * \brief       Cette fonction est liée au bouton d'ajout d'un visiteur. Lors du clique il ouvre une fenêtre de la classe visiteur, avec les champs vierges.
     * \property    function
     */
    void on_pushButtonVisiteurAjouter_clicked();
    /*!
     * \fn          void MainWindow::on_pushButtonVisiteurSupprimer_clicked()
     * \brief       Cette fonction est liée au bouton de suppression d'un visiteur. Il s'active si un visiteur est sélectionné dans tableViewVisiteur. Retire l'occurence sélectionnée dans le tableViewVisiteur.
     * \property    function
     */
    void on_pushButtonVisiteurSupprimer_clicked();
    /*!
     * \fn          void MainWindow::on_pushButtonVisiteurEdit_clicked()
     * \brief       Cette fonction est liée au bouton d'édition d'un visiteur. Il s'active si un visiteur est sélectionné dans tableViewVisiteur. Lors du clique il ouvre une fenêtre de la classe visiteur, avec les champs de cette nouvelle fenêtre rempli avec les valeurs du visiteur sélectionné. Une fois les modifications faites, la fonction se charge d'apporter les modifications à la base de données (Si elle reçoit le sigal "accept" de la part de la fenêtre d'édition).
     * \property    function
     */
    void on_pushButtonVisiteurEdit_clicked();
    /*!
     * \fn          void MainWindow::on_tableViewVisiteur_clicked(QModelIndex index)
     * \brief       Cette fonction est liée au tableViewVisiteur. Elle active les boutons d'édition et de suppression lorsqu'un visiteur est sélectionné dans le tableViewVisiteur.
     * \param       index La ligne sélectionnée dans le tableViewVisiteur.
     * \property    function
     */
    void on_tableViewVisiteur_clicked(QModelIndex index);
    /*!
     * \fn          void MainWindow::on_actionVisiteur_triggered()
     * \brief       Cette fonction est associée au bouton "Visiteur" du menu "Gestion". Elle permet de charger les différents éléments de l'interface de l'ongler Visiteur.
     *              Change l'onglet de tabWigetAction, déconnecte les éléments de l'interface, affectecte les 2 pointeurs (tableModelVisiteur queryModelVisiteur), charge les différentes listes déroulantes de l'interface (création des lignes) et les vecteurs associés, et de charger et afficher le tableViewVisiteur avec les informations de la base. Elle connecte également les lineEdits de recherche avec la fonction de recherche.
     * \property    function
     */
    void on_actionVisiteur_triggered();
    /*!
     * \fn          void MainWindow::supprimerDeDelegue(QString)
     * \brief       Cette fonction permet de supprimer un visiteur de la table délégué. Cette fonction intervient suite à modification d'un visiteur.
     * \param       Matricule du visiteur qui doit être retiré de la table délégué.
     * \property    function
     */
    void supprimerDeDelegue(QString);
    /*!
     * \fn          void MainWindow::supprimerDeResponsable(QString)
     * \brief       Cette fonction permet de supprimer un visiteur de la table reponsable. Cette fonction intervient suite à modification d'un visiteur.
     * \param       Matricule du visiteur qui doit être retiré de la table Responsable.
     * \property    function
     */
    void supprimerDeResponsable(QString);
    /*!
     * \fn          void MainWindow::supprimerChefVente(QString)
     * \brief       Cette fonction permet de retirer le visiteur du statut de chef de vente d'un département. Cette fonction intervient suite à modification d'un visiteur.
     * \param       Code du département dans lequel le visiteur doit être retirté.
     * \property    function
     */
    void supprimerChefVente(QString);
    /*!
     * \fn          void MainWindow::rechercheVisiteur()
     * \brief       Cette fonction permet de réaliser une recherche avec les champs de l'interface parmit les visiteurs. Tous les champs de l'interface utile pour la recherche sont reliées à cette fonction.
     * \property    function
     */
    void rechercheVisiteur();
    /*!
     * \fn          void MainWindow::connectionDesObjetsVisiteurs()
     * \brief       Cette fonction permet de connecter les éléments de l'interface (lineEdit, liste déroulante, ...) à la fonction de recherche de visiteurs.
     * \property    function
     */
    void connectionDesObjetsVisiteurs();
    /*!
     * \fn          void MainWindow::ajoutEnDelegue(QString)
     * \brief       Cette fonction permet d'ajouter un visiteur de la table délégué. Cette fonction intervient suite à modification d'un visiteur.
     * \param       Matricule du visiteur qui doit être ajouté de la table délégué.
     * \property    function
     */
    void ajoutEnDelegue(QString);
    /*!
     * \fn          void MainWindow::ajoutEnResponsable(QString)
     * \brief       Cette fonction permet d'ajouter un visiteur de la table reponsable. Cette fonction intervient suite à modification d'un visiteur.
     * \param       Matricule du visiteur qui doit être ajouté de la table responsable.
     * \property    function
     */
    void ajoutEnResponsable(QString);
    /*!
     * \fn          void MainWindow::modifierChefVente(QString, QString)
     * \brief       Cette fonction permet de remplacer le chef de vente d'un département. Cette fonction intervient suite à modification d'un visiteur.
     * \param       Matricule du visiteur qui devient le nouveau chef de vente.
     * \param       Code du département, où le visiteur est promu chef de vente.
     * \property    function
     */
    void modifierChefVente(QString, QString);

    /*------------------------------------------------------- DIVERS -------------------------------------------------------*/
    /*!
     * \fn          void MainWindow::on_actionQuitter_triggered()
     * \brief       Cette fonction est assoicée avec un bouton se trouvant dans le menu fichier dans la barre d'outil. Elle permet de quitter le programme.
     * \property    function
     */
    void on_actionQuitter_triggered();
};

#endif // MAINWINDOW_H

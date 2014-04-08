#ifndef VISITEUR_H
#define VISITEUR_H

#include <QDialog>
#include <QVector>

namespace Ui {
    class visiteur;
}

/*!
 * \brief       La classe visiteur est associée avec un formulaire (interface). Cette interface permet l'ajout et la modification de visiteur. ATTENTION L'ajout et la modification dans la base de données se trouve dans la classe mainwindow. Cette classe n'est que l'inteface.
 * \file        visiteur.h
 * \author      Pignoly Frédéric
 * \version     1.0b
 * \date        02/2014
 * \inherit     QDialog
 * \details     MainWindow
 * \copyright   GNU Public License
 */

class visiteur : public QDialog {
    Q_OBJECT
public:
    /*!
     * \fn          visiteur::visiteur(QWidget *parent)
     * \brief       Constructeur de la classe visiteur.
     * \param       parent
     * \property    builder
     */
    visiteur(QWidget *parent = 0);
    /*!
     * \fn          ~visiteur()
     * \brief       Destructeur de la classe visiteur.
     */
    ~visiteur();

    /*!
     * \var         vSecteurVisiteur
     * \brief       Vecteur des secteurs visiteurs. Utilisé en corrélation avec une liste déroulante.
     * \property    property
     */
    QVector <QString> vSecteurVisiteur;
    /*!
     * \var         vLaboratoireVisiteur
     * \brief       Vecteur des laboratoires des visiteurs. Utilisé en corrélation avec une liste déroulante.
     * \property    property
     */
    QVector <QString> vLaboratoireVisiteur;
    /*!
     * \var         vDepartementVisiteur
     * \brief       Vecteur des départements Français. Utilisé en corrélation avec une liste déroulante.
     * \property    property
     */
    QVector <QString> vDepartementVisiteur;
    /*!
     * \var         niveauHierarchie
     * \brief       Variable stockant le niveau hiérarchique du visiteur sélectionnée. Les niveaux sont visiteur, délégué et responsable.
     * \property    property
     */
    QString niveauHierarchie;
    /*!
     * \var         chefVente
     * \brief       Variable prenant pour valeur 1 si le visiteur sélectionné est un chef vente, 0 sinon.
     * \property    property
     */
    int chefVente;

    /*!
     * \fn          void visiteur::chargeComboBoxs()
     * \brief       Cette procédure ajoute les informations de la base dans les différentes listes déroulantes et dans les vecteur associés. Les listes déroulante et vecteurs sont les secteurs, laboratoires et départements des visiteurs.
     * \property    void
     */
    void chargeComboBoxs();
    /*!
     * \fn          QString visiteur::getLineEditMatricule()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditMatricule.
     * \return      Valeur contenu dans lineEditMatricule.
     * \property    function
     */
    QString getLineEditMatricule();
    /*!
     * \fn          QString visiteur::getLineEditNom()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditNom.
     * \return      Valeur contenu dans getLineEditNom.
     * \property    function
     */
    QString getLineEditNom();
    /*!
     * \fn          QString visiteur::getLineEditPrenom()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditPrenom.
     * \return      Valeur contenu dans getLineEditPrenom.
     * \property    function
     */
    QString getLineEditPrenom();
    /*!
     * \fn          QString visiteur::getLineEditAdresse()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditAdresse.
     * \return      Valeur contenu dans getLineEditAdresse.
     * \property    function
     */
    QString getLineEditAdresse();
    /*!
     * \fn          QString visiteur::getLineEditCP()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditCP.
     * \return      Valeur contenu dans getLineEditCP.
     * \property    function
     */
    QString getLineEditCP();
    /*!
     * \fn          QString visiteur::getLineEditVille()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditVille.
     * \return      Valeur contenu dans getLineEditVille.
     * \property    function
     */
    QString getLineEditVille();
    /*!
     * \fn          QString visiteur::getComboBoxSecteur()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur sélectionné de comboBoxSecteur.
     * \return      Valeur contenu dans getComboBoxSecteur.
     * \property    function
     */
    QString getComboBoxSecteur();
    /*!
     * \fn          QString visiteur::getComboBoxLaboratoire()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur sélectionné de comboBoxLaboratoire .
     * \return      Valeur contenu dans getComboBoxLaboratoire.
     * \property    function
     */
    QString getComboBoxLaboratoire();
    /*!
     * \fn          QString visiteur::getComboBoxDepartement()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur sélectionné de comboBoxDepartement.
     * \return      Valeur contenu dans getComboBoxDepartement.
     * \property    function
     */
    QString getComboBoxDepartement();
    /*!
     * \fn          QString visiteur::getRadioButonHierarchie()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de radioButonHierarchie.
     * \return      Valeur contenu dans getRadioButonHierarchie.
     * \property    function
     */
    QString getRadioButonHierarchie();
    /*!
     * \fn          QString visiteur::getRadioButonHierarchieModification()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de radioButonHierarchieModification.
     * \return      Valeur contenu dans getRadioButonHierarchieModification.
     * \property    function
     */
    QString getRadioButonHierarchieModification();
    /*!
     * \fn          QString visiteur::getCheckBoxChefVente()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de checkBoxChefVente.
     * \return      Valeur contenu dans getCheckBoxChefVente.
     * \property    function
     */
    QString getCheckBoxChefVente();
    /*!
     * \fn          void visiteur::setLineEditMatricule(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditMatricule.
     * \param       Valeur à ajouter dans comboBoxType.
     * \property    function
     */
    void setLineEditMatricule(QString);
    /*!
     * \fn          void visiteur::setLineEditNom(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditNom.
     * \param       Valeur à ajouter dans lineEditNom.
     * \property    function
     */
    void setLineEditNom(QString);
    /*!
     * \fn          void visiteur::setLineEditPrenom(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditPrenom.
     * \param       Valeur à ajouter dans lineEditPrenom.
     * \property    function
     */
    void setLineEditPrenom(QString);
    /*!
     * \fn          void visiteur::setLineEditAdresse(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditAdresse.
     * \param       Valeur à ajouter dans lineEditAdresse.
     * \property    function
     */
    void setLineEditAdresse(QString);
    /*!
     * \fn          void visiteur::setLineEditCP(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditCP.
     * \param       Valeur à ajouter dans lineEditCP.
     * \property    function
     */
    void setLineEditCP(QString);
    /*!
     * \fn          void visiteur::setLineEditVille(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditVille.
     * \param       Valeur à ajouter dans lineEditVille.
     * \property    function
     */
    void setLineEditVille(QString);
    /*!
     * \fn          void visiteur::setComboBoxSecteur(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet de sélectionner une valeur dans comboBoxSecteur.
     * \param       Valeur à sélectionner dans comboBoxSecteur.
     * \property    function
     */
    void setComboBoxSecteur(QString);
    /*!
     * \fn          void visiteur::setComboBoxLaboratoire(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet de sélectionner une valeur dans comboBoxLaboratoire.
     * \param       Valeur à sélectionner dans comboBoxLaboratoire.
     * \property    function
     */
    void setComboBoxLaboratoire(QString);
    /*!
     * \fn          void visiteur::setComboBoxDepartement(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet de sélectionner une valeur dans lineEditNom.
     * \param       Valeur à sélectionner dans lineEditNom.
     * \property    function
     */
    void setComboBoxDepartement(QString);
    /*!
     * \fn          void visiteur::setRadioButtonHierarchie(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans radioButtonHierarchie.
     * \param       Valeur à ajouter dans radioButtonHierarchie.
     * \property    function
     */
    void setRadioButtonHierarchie(QString);
    /*!
     * \fn          void visiteur::setCheckBoxChefVente(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans checkBoxChefVente.
     * \param       Valeur à ajouter dans checkBoxChefVente.
     * \property    function
     */
    void setCheckBoxChefVente(QString);


protected:
    void changeEvent(QEvent *e);

private:
    Ui::visiteur *ui;

private slots:


private slots:
    /*!
     * \fn          void visiteur::on_pushButtonAjouter_clicked()
     * \brief       Fonction associé au bouton "annuler" de l'interface. Elle envoie le signal "reject" qui sera intréprété par la classe mainwindow.
     * \property    function
     */
    void on_pushButtonAjouter_clicked();
    /*!
     * \fn          void visiteur::on_pushButtonEditer_clicked()
     * \brief       Fonction associé au bouton "éditer" de l'interface. Elle envoie le signal "accept" qui sera intréprété par la classe mainwindow.
     * \property    function
     */
    void on_pushButtonAnnuler_clicked();
};

#endif // VISITEUR_H

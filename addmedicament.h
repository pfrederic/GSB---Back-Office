#ifndef ADDMEDICAMENT_H
#define ADDMEDICAMENT_H

#include <QDialog>
#include <QVector>

namespace Ui {
    class addMedicament;
}

/*!
 * \brief       La classe addmedicament est associée avec un formulaire (interface). Cette interface permet l'ajout et la modification de médicament. ATTENTION L'ajout et la modification dans la base de données se trouve dans la classe mainwindow. Cette classe n'est que l'inteface.
 * \file        addmedicament.h
 * \author      Pignoly Frédéric
 * \version     1.0b
 * \date        02/2014
 * \inherit     QDialog
 * \details     MainWindow
 * \copyright   GNU Public License
 */

class addMedicament : public QDialog {
    Q_OBJECT
public:
    /*!
     * \fn          addMedicament::addMedicament(QWidget *parent)
     * \brief       Constructeur de la classe addmedicament.
     * \param       parent
     * \property    builder
     */
    addMedicament(QWidget *parent = 0);
    /*!
     * \fn          ~addMedicament()
     * \brief       Destructeur de la classe addmedicament.
     */
    ~addMedicament();
    /*!
     * \fn          vFamilleMedoc
     * \brief       Vecteur des familles de médicament. Utilisé en corrélation avec la liste déroulante.
     * \property    property
     */
    QVector <QString> vFamilleMedoc;

    /*!
      * \fn          void addMedicament::chargerComboBoxFamille()
      * \brief       Cette procédure ajoute toutes les familles de médicament de la base dans la liste déroulante de l'interface et dans le vecteur.
      * \property    void
      */
    void chargerComboBoxFamille();

    /*!
     * \fn          QString addMedicament::getLineEditMedDepotLegal()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditDepotLegal.
     * \return      Valeur contenu dans lineEditDepotLegal.
     * \property    function
     */
    QString getLineEditMedDepotLegal();
    /*!
     * \fn          QString addMedicament::getLineEditMedNomCommercial()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditNomCommercial.
     * \return      Valeur contenu dans lineEditNomCommercial.
     * \property    function
     */
    QString getLineEditMedNomCommercial();
    /*!
     * \fn          QString addMedicament::getComboBoxFamCode()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de la liste déroulante comboBoxFamCode.
     * \return      Valeur contenu dans comboBoxFamCode.
     * \property    function
     */
    QString getComboBoxFamCode();
    /*!
     * \fn          QString addMedicament::getTextEditComposition()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de textEditComposition.
     * \return      Valeur contenu dans textEditComposition.
     * \property    function
     */
    QString getTextEditComposition();
    /*!
     * \fn          QString addMedicament::getTextEditEffets()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de textEditEffets.
     * \return      Valeur contenu dans textEditEffets.
     * \property    function
     */
    QString getTextEditEffets();
    /*!
     * \fn          QString addMedicament::getTextEditContreIndic()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de textEditContreIndic.
     * \return      Valeur contenu dans textEditContreIndic.
     * \property    function
     */
    QString getTextEditContreIndic();
    /*!
     * \fn          QString addMedicament::getDoubleSpinPrixEch()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de doubleSpinBoxPrixEchantillon.
     * \return      Valeur contenu dans doubleSpinBoxPrixEchantillon.
     * \property    function
     */
    float getDoubleSpinPrixEch();
    /*!
     * \fn          float addMedicament::setLineEditDepotLegal(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditDepotLegal.
     * \param       Valeur à ajouter dans l'interface.
     * \property    function
     */
    void setLineEditDepotLegal(QString);
    /*!
     * \fn          void addMedicament::setLineEditNomCommercial(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditNomCommercial.
     * \param       Valeur à ajouter dans lineEditNomCommercial.
     * \property    function
     */
    void setLineEditNomCommercial(QString);
    /*!
     * \fn          void addMedicament::setComboBoxFamille(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans comboBoxFamCode.
     * \param       Valeur à sélectionner dans comboBoxFamCode.
     * \property    function
     */
    void setComboBoxFamille(QString);
    /*!
     * \fn          void addMedicament::setTextEditComposition(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans textEditComposition.
     * \param       Valeur à ajouter dans textEditComposition.
     * \property    function
     */
    void setTextEditComposition(QString);
    /*!
     * \fn          void addMedicament::setTextEditEffets(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans textEditEffets.
     * \param       Valeur à ajouter dans textEditEffets.
     * \property    function
     */
    void setTextEditEffets(QString);
    /*!
     * \fn          void addMedicament::setTextEditContreIndication(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans textEditContreIndic.
     * \param       Valeur à ajouter dans textEditContreIndic.
     * \property    function
     */
    void setTextEditContreIndication(QString);
    /*!
     * \fn          void addMedicament::setDoubleSpinBoxPrixEch(double)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans doubleSpinBoxPrixEchantillon.
     * \param       Valeur à ajouter dans doubleSpinBoxPrixEchantillon.
     * \property    function
     */
    void setDoubleSpinBoxPrixEch(double);


protected:
    void changeEvent(QEvent *e);

private:
    Ui::addMedicament *ui;

private slots:
    /*!
     * \fn          void addMedicament::on_pushButtonAnnuler_clicked()
     * \brief       Fonction associé au bouton "annuler" de l'interface. Elle envoie le signal "reject" qui sera intréprété par la classe mainwindow.
     * \property    function
     */
    void on_pushButtonAnnuler_clicked();
    /*!
     * \fn          void addMedicament::on_pushButtonAddMedocAjouter_clicked()
     * \brief       Fonction associé au bouton "annuler" de l'interface. Elle envoie le signal "accept" qui sera intréprété par la classe mainwindow.
     * \property    function
     */
    void on_pushButtonAddMedocAjouter_clicked();
};

#endif // ADDMEDICAMENT_H

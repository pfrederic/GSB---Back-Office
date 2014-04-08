#ifndef PRATICIEN_H
#define PRATICIEN_H

#include <QDialog>

namespace Ui {
    class praticien;
}

/*!
 * \brief       La classe praticien est associée avec un formulaire (interface). Cette interface permet l'ajout et la modification de praticien. ATTENTION L'ajout et la modification dans la base de données se trouve dans la classe mainwindow. Cette classe n'est que l'inteface.
 * \file        praticien.h
 * \author      Pignoly Frédéric
 * \version     1.0b
 * \date        02/2014
 * \inherit     QDialog
 * \details     MainWindow
 * \copyright   GNU Public License
 */

class praticien : public QDialog {
    Q_OBJECT
public:
    /*!
     * \fn          praticien::praticien(QWidget *parent)
     * \brief       Constructeur de la classe praticien.
     * \param       parent
     * \property    builder
     */
    praticien(QWidget *parent = 0);
    /*!
     * \fn          ~praticien()
     * \brief       Destructeur de la classe praticien.
     */
    ~praticien();

    /*!
     * \var         vTypePraticien
     * \brief       Vecteur des types de praticiens. Utilisé en corrélation avec la liste déroulante.
     * \property    property
     */
    QVector <QString> vTypePraticien;

    /*!
     * \fn          void praticien::chargerComboBoxType()
     * \brief       Cette procédure ajoute toutes les types de praticiens de la base dans la liste déroulante de l'interface et dans le vecteur.
     * \property    void
     */
    void chargerComboBoxType();
    /*!
     * \fn          int praticien::getSpinBoxId()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de spinBoxId.
     * \return      Valeur contenu dans spinBoxId.
     * \property    function
     */
    int getSpinBoxId();
    /*!
     * \fn          QString praticien::getLineEditNom()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditNom.
     * \return      Valeur contenu dans lineEditNom.
     * \property    function
     */
    QString getLineEditNom();
    /*!
     * \fn          QString praticien::getLineEditPrenom()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de lineEditPrenom.
     * \return      Valeur contenu dans lineEditPrenom.
     * \property    function
     */
    QString getLineEditPrenom();
    /*!
     * \fn          float praticien::getDoubleSpinBoxCoeffNot()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de doubleSpinBoxCoeffNot.
     * \return      Valeur contenu dans doubleSpinBoxCoeffNot.
     * \property    function
     */
    float getDoubleSpinBoxCoeffNot();
    /*!
     * \fn          QString praticien::getComboBoxType()
     * \brief       Cette fonction est un assesseur en lecture. Elle permet d'accèder à la valeur de comboBoxType.
     * \return      Valeur contenu dans comboBoxType.
     * \property    function
     */
    QString getComboBoxType();
    /*!
     * \fn          void praticien::setSpinBoxId(int)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans spinBoxId.
     * \param       Valeur à ajouter dans spinBoxId.
     * \property    function
     */
    void setSpinBoxId(int);
    /*!
     * \fn          void praticien::setLineEditNom(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditNom.
     * \param       Valeur à ajouter dans lineEditNom.
     * \property    function
     */
    void setLineEditNom(QString);
    /*!
     * \fn          void praticien::setLineEditPrenom(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans lineEditPrenom.
     * \param       Valeur à ajouter dans lineEditPrenom.
     * \property    function
     */
    void setLineEditPrenom(QString);
    /*!
     * \fn          void praticien::setDoubleSpinBoxCoeffNot(float)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet d'ajouter une valeur dans doubleSpinBoxCoeffNot.
     * \param       Valeur à ajouter dans doubleSpinBoxCoeffNot.
     * \property    function
     */
    void setDoubleSpinBoxCoeffNot(float);
    /*!
     * \fn          void praticien::setComboBoxType(QString)
     * \brief       Cette fonction est un assesseur en ecriture. Elle permet de sélectionner une valeur dans comboBoxType.
     * \param       Valeur à sélectionner dans comboBoxType.
     * \property    function
     */
    void setComboBoxType(QString);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::praticien *ui;

private slots:
    /*!
     * \fn          void praticien::on_pushButtonAnnuler_clicked()
     * \brief       Fonction associé au bouton "annuler" de l'interface. Elle envoie le signal "reject" qui sera intréprété par la classe mainwindow.
     * \property    function
     */
    void on_pushButtonAnnuler_clicked();
    /*!
     * \fn          void praticien::on_pushButtonEditer_clicked()
     * \brief       Fonction associé au bouton "éditer" de l'interface. Elle envoie le signal "accept" qui sera intréprété par la classe mainwindow.
     * \property    function
     */
    void on_pushButtonEditer_clicked();
};

#endif // PRATICIEN_H

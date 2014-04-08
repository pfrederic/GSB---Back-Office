#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
    class login;
}

/*!
 * \brief       La classe login, permet une authentification préalable pour accèder à l'ensemble des fonctionnalitées de l'application.
 * \file        login.h
 * \author      Pignoly Frédéric
 * \version     1.0b
 * \date        02/2014
 * \inherit     QDialog
 * \details     MainWindow
 * \copyright   GNU Public License
 */

class login : public QDialog {
    Q_OBJECT
public:
    /*!
     * \fn          login::login(QWidget *parent)
     * \brief       Constructeur de la classe login.
     * \param       parent
     * \property    builder
     */
    login(QWidget *parent = 0);
    /*!
     * \fn          ~login()
     * \brief       Destructeur de la classe login.
     */
    ~login();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::login *ui;
    /*!
     * \fn          bool login::saisieOkLogin()
     * \brief       Fonction permettant de savoir si les 2 champs (identifiant et mot de passe) de la fenêtre d'authentification contient des caractères. Le but étant d'activer le bouton "Se connecter" si les 2 champs contiennent des valeurs.
     *              Vérifie que longueur des valeurs contenu dans chaque champs soit supérieur à zéro.
     * \return      Renvoie "true" si les les champs contiennent des valeur, "false" sinon.
     * \property    function
     */
    bool saisieOkLogin();

private slots:
    /*!
     * \fn          void login::on_lineEditMdp_textChanged(QString)
     * \brief       Fonction associées à lineEditMdp, à chaque fois que la valeur du champs change.
     *              Fait appel à la fonction login::saisieOkLogin().
     * \param       Valeur contenu dans le champs lineEditMDp.
     * \property    function
     */
    void on_lineEditMdp_textChanged(QString);
    /*!
     * \fn          void login::on_lineEditIdentifiant_textChanged(QString)
     * \brief       Fonction associées à lineEditIdentifiant, à chaque fois que la valeur du champs change.
     *              Fait appel à la fonction login::saisieOkLogin().
     * \param       Valeur contenu dans le champs lineEditIdentifiant.
     * \property    function
     */
    void on_lineEditIdentifiant_textChanged(QString);
    /*!
     * \fn          void login::on_pushButtonQuitter_clicked()
     * \brief       Fonction associé au bouton "Quitter" de l'interface. Elle envoie le signal "reject" qui sera intréprété par la classe mainwindow.
     * \property    function
     */
    void on_pushButtonQuitter_clicked();
    /*!
     * \fn          void login::on_pushButtonConnecter_clicked()
     * \brief       Fonction associé au bouton "Se conncter" de l'interface. Elle envoie vérifie les valeurs saisie par celle stockées dans la base de données. Si les données coordonnes, alors envoie le signal accept, sinon affiche un message d'erreur.
     *              Une requête SQL compte le nombre d'occurence ayant pour identifiant et mot de passe les valeurs saisie dans les champs. Si la requête renvoie une valeur supérieur à 0, c'est que les valeurs saisies sont les bonnes.
     * \property    function
     */
    void on_pushButtonConnecter_clicked();
};

#endif // LOGIN_H

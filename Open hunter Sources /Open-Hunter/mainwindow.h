#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //Ajout d'un quand on appuie sur le bouton Brise
    void on_bouton_Brise_clicked();
    //Ajout d'un quand on appuie sur le bouton +1
    void on_bouton_Chaine_clicked();
    //Permet si la checkbox Charme Chroma est cliqué
    void on_checkBox_stateChanged(int arg1);
    //Récupération du jeu qui est utilisé
    void on_Choix_jeu_activated(int index);
    //Récupération de la technique de chasse qui est utilisé
    void on_Techniques_activated(int index);
    //Quand le bouton capture est cliqué qui permet de sauvegarder
    void on_Capture_clicked();
    //Récupération du texte de la technique utilisée
    void on_Techniques_activated(const QString &arg1);
    //Récupération du texte du jeu utilisé
    void on_Choix_jeu_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    //Permet de tester les combinaisons de Technique, jeu et la présence ou non de charme chroma pour déterminer les chances de capture
    void Tests();
    //Permet de remettre a zéro les labels nb_brise, nb_Chaine et la variable Chaine
    void Reset();
    //Permet de lire le fichier de sauvegarde des captures
    void Lecture();
    //Contiens un chiffre qui indique la technique de chasse choisie
    int Technique;
    //Indique la valeur de la chaîne actuelle
    int Chaine;
    //Contiens un chiffre qui indique le jeu choisi
    int Jeu;
    //Indique la présence ou non du charme chroma 0 = pas de charme 1 = présence de celui-ci
    int Chroma;
    //Contiens le nom de la technique choisi en toute lettre
    QString Technique_nom;
    //Contiens le nom du jeu choisi en toute lettre
    QString Jeu_nom;
    //Contien le chiffre de la chaîne actuelle sous forme de QString pour la sauvegarde
    QString Chaine_str;
    //Contien le nombre de chaînes brisées sous forme de QString pour la sauvegarde
    QString Brisee_str;
};

#endif // MAINWINDOW_H

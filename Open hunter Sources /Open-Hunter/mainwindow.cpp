#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QTextStream>
#include <qmessagebox.h>
#include <QVBoxLayout>
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(679,412);  //fixe la taille de la fenêtre
    setWindowFlags(Qt::CustomizeWindowHint); //supprime les paramétrages de fenêtre par défaut. Oblige donc de préciser les réglagess autorisés
    setWindowFlags(Qt::WindowTitleHint); //Autorise le titre de la fenêtre
    setWindowFlags(Qt::WindowSystemMenuHint);//autorise le bouton de fermeture dans le bandeau de fenêtre
    setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);//autorise le bouton de réduction de fenêtre
    ui->bouton_Chaine->setStyleSheet("background-color: rgba( 92, 164, 92, 100% );");
    ui->bouton_Brise->setStyleSheet("background-color: rgba( 217, 83, 79, 100% );");
    ui->Capture->setStyleSheet("background-color: rgba( 0, 0, 0, 0% );");
    ui->Image->setPixmap(QPixmap("517.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Permet d'afficher les chances de captures en fonction du jeu, de la technique et de la possession du charme chroma
void MainWindow::Tests()
{
    //Récupération de l'état du charme chroma
    QString val_Charme = ui->Charme->text() ;
    //Lecture du fichier de sauvegarde
    Lecture();
    //Rencontre naturelle
    if(Technique == 0)
    {
        if(val_Charme == "Charme desactive")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(8192);
                break;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(4096);
                break;

            }
        }
        if(val_Charme == "Charme active")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Le charme chroma n'est pas sur cette version");
                break;
            case 5:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(8192);
                break;
            case 6:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(2731);
                break;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(1365);
                break;

            }
        }
    }
    //Soft reset
    if(Technique == 1)
    {
        if(val_Charme == "Charme desactive")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(8192);
                break;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(4096);
                break;
            }
        }
        if(val_Charme == "Charme active")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Le charme chroma n'est pas sur cette version");
                break;
            case 6:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(8192);
                break;
            case 7:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(2731);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(1365);
                break;

            }
        }
    }
    //Rencontre de horde
    if(Technique == 2)
    {
        if(val_Charme == "Charme desactive")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 7:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(819);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;

            }
        }
        if(val_Charme == "Charme active")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 7:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(273);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;

            }
        }
    }
    //Méthode masuda
    if(Technique == 3)
    {
        if(val_Charme == "Charme desactive")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 3:
            case 4:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(1638);
                break;
            case 5:
            case 6:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(1365);
                break;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(639);
                break;

            }
        }
        if(val_Charme == "Charme active")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Le charme chroma n'est pas sur cette version");
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            ui->lab_Proba->setText("Vous avez 1 chance sur ");
            ui->Proba->setNum(273);
            break;
            }
        }
    }
    //Safari des amis
    if(Technique == 4)
    {
        if(val_Charme == "Charme desactive")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 7:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(512);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;

            }
        }
        if(val_Charme == "Charme active")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Le charme chroma n'est pas sur cette version");
                break;
            case 7:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(512);
                ui->Charme->setText("Le charme Chroma n'affecte pas");
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Le charme chroma n'est pas sur cette version");
                break;
            }
        }
    }
    //Pêche à la chaîne
    if(Technique == 5)
    {
        if(val_Charme == "Charme desactive")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 7:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(8192);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;

            }
        }
        if(val_Charme == "Charme active")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Aucune information");
                break;
            }
        }
    }
    //Navidex
    if(Technique == 6)
    {
        if(val_Charme == "Charme desactive")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 8:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(4096);
                break;
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            }
        }
        if(val_Charme == "Charme active")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 8:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(1365);
                break;
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            }
        }
    }
    //Pokeradar
    if(Technique == 7)
    {
        if(val_Charme == "Charme desactive")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 3:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(8192);
                break;
            case 4:
            case 5:
            case 6:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            case 7:
                ui->lab_Proba->setText("Vous avez 1 chance sur ");
                ui->Proba->setNum(4096);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                break;
            }
        }
        if(val_Charme == "Charme active")
        {
            switch (Jeu)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                ui->Proba->setText("");
                ui->lab_Proba->setText("Aucune information");
                break;
            }
        }
    }
        if(Technique == 8)
        {
            if(val_Charme == "Charme desactive")
            {
                switch (Jeu)
                {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    ui->Proba->setText("");
                    ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                    break;
                case 9:
                case 10:
                    ui->lab_Proba->setText("Vous avez 1 chance sur ");
                    ui->Proba->setNum(4096);
                    break;
                case 11:
                case 12:
                    ui->Proba->setText("");
                    ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                    break;
                }
            }
            if(val_Charme == "Charme active")
            {
                switch (Jeu)
                {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    ui->Proba->setText("");
                    ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                    break;
                case 9:
                case 10:
                    ui->lab_Proba->setText("Vous avez 1 chance sur ");
                    ui->Proba->setNum(1365);
                    break;
                case 11:
                case 12:
                    ui->Proba->setText("");
                    ui->lab_Proba->setText("Cette technique n'est pas sur cette version");
                    break;
                }
          }
    }
}
//Quand le bouton brisée est cliqué
void MainWindow::on_bouton_Brise_clicked()
{
    //Création d'une variable Nombre
    int Nombre;
    //Récupération du nombre de chaîne brisée via nb_brise
    QString Valeur = ui->nb_brise->text();
    //Conversion en int
    Nombre = Valeur.toInt();
    //Ajout de 1
    Nombre = Nombre+1;
    //Écriture dans nb_brise
    ui->nb_brise->setNum(Nombre);
    //Remise à zéro de la chaîne
    ui->nb_Chaine->setNum(0);
    //Remise à zéro de la variable Chaine
    Chaine = 0;
}
//Quand le bouton +1 est cliqué
void MainWindow::on_bouton_Chaine_clicked()
{
    //Récupération de la valeur de la chaîne via nb_Chaine
    QString Valeur = ui->nb_Chaine->text();
    //Conversion en int
    Chaine = Valeur.toInt();
    //Ajout de 1
    Chaine = Chaine+1;
    //Écriture dans nb_Chaine
    ui->nb_Chaine->setNum(Chaine);
}
//Quand la checkbox Charme Chroma est cliqué
void MainWindow::on_checkBox_stateChanged(int arg1)
{
    //Récupération de l'état de la checkbox
    Chroma = arg1;
    //Si elle est non coché
    if(Chroma == 0)
    {
        ui->Charme->setText("Charme desactive");
    }
    //sinon
    else
    {
        ui->Charme->setText("Charme active");
    }
    //Lance la boucle de test
    Tests();
}
//Quand un jeu est sélectionné (récupération de la place du jeu)
void MainWindow::on_Choix_jeu_activated(int index)
{
    //Récupération de la place du jeu dans la variable Jeu
    Jeu = index;
    //Lance la boucle de test
    Tests();
}
//Quand une technique de chasse est sélectionnée (récupération de la place de la technique)
void MainWindow::on_Techniques_activated(int index)
{
    //Récupération de la place de la technique de chasse dans la variable Technique
    Technique = index;
    //Lance la boucle de test
    Tests();
}
//Quand le bouton Capture est cliqué
void MainWindow::on_Capture_clicked()
{
    //Création des variables
    QString chemin, texte, Pokemon;
    QMessageBox Box;
    //Apparition d'une boîte de dialogue qui permet d'indiquer le nom du pokemon obtenu, et le mettre dans la variable Pokemon
    ((Pokemon = QInputDialog::getText(nullptr, "Pokemon", "Quel pokemon as tu attraper ")).isEmpty());
    //Récupération de la Chaîne actuelle dans la variable chaine_str via la variable Chaine qui est un int
    Chaine_str.setNum(Chaine);
    //Récupération du nombre de chaînes brisées via nb_brise
    Brisee_str = ui->nb_brise->text();
    //Création de la ligne
    texte = "Capture du pokemon " + Pokemon + " Avec la technique " + Technique_nom + " sur la version " + Jeu_nom + " avec une chaîne de " + Chaine_str + " en ayant brisé " + Brisee_str + " Chaînes\n";
    //Création du chemin du fichier
    chemin = "Shiny.odt";
    //Création du fichier
    QFile fichier(chemin);
    //Ouverture du fichier
    fichier.open(QIODevice::Append | QIODevice::Text);
    //Création du flux
    QTextStream flux(&fichier);
    //Écriture de la ligne dans le fichier
    flux << texte;
    //Affichage d'une boîte de dialogue pour confirmer la sauvegarde
    Box.setText("Le pokemon est enregistre");
    Box.exec();
    //Remise a zéro des chaînes
    Reset();
}
//Quand une technique de chasse est sélectionnée (récupération du nom de la technique)
void MainWindow::on_Techniques_activated(const QString &arg1)
{
    //Récupération du nom de la technique dans le qstring Technique_nom
    Technique_nom = arg1;
}
//Quand un jeu est sélectionné (récupération du nom du jeu)
void MainWindow::on_Choix_jeu_activated(const QString &arg1)
{
    //Récupération du nom du jeu dans le qstring Jeu_nom
    Jeu_nom = arg1;
}
//Permet de remettre les chaînes à zéro
void MainWindow::Reset()
{
    //Remise à zéro des label nb_brise et nb_chaine
    ui->nb_brise->setNum(0);
    ui->nb_Chaine->setNum(0);
    //Remise à zéro de la variable Chaine
    Chaine = 0;
}
//Fonction de lecture des fichiers enregistrés
void MainWindow::Lecture()
{
    //Création des variables dont chemin avec le chemin du fichier Shiny.odt
    QString chemin = "Shiny.odt", texte;
    //Création du fichier avec le chemin
    QFile fichier(chemin);
    //Si le fichier est bien ouvert tout son contenu est mis dans la variable texte
    if(fichier.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        texte = fichier.readAll();
    }//Sinon écrire Impossible de lire le fihier dans la variable texte
    else
    {
        texte = "Impossible de lire le fihier";
    }
    //Écriture de texte dans le label Obtenu
    ui->Obtenu->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
    ui->Obtenu->setWordWrap(true);
    ui->Obtenu->setText(texte);
}



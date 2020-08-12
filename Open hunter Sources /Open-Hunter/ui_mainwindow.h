/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *nb_Chaine;
    QLabel *nb_brise;
    QLabel *lab_Techniques;
    QLabel *Proba;
    QLabel *lab_Proba;
    QLabel *lab_Chaine;
    QLabel *lab_Choix_jeu;
    QComboBox *Techniques;
    QComboBox *Choix_jeu;
    QPushButton *bouton_Chaine;
    QPushButton *Capture;
    QLabel *lab_Brise;
    QPushButton *bouton_Brise;
    QCheckBox *checkBox;
    QLabel *Charme;
    QLabel *Image;
    QWidget *tab_2;
    QLabel *Obtenu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(679, 412);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(672, 0));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(true);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-4, -1, 701, 411));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        nb_Chaine = new QLabel(tab);
        nb_Chaine->setObjectName(QString::fromUtf8("nb_Chaine"));
        nb_Chaine->setGeometry(QRect(190, 60, 31, 31));
        nb_Chaine->setFrameShape(QFrame::NoFrame);
        nb_brise = new QLabel(tab);
        nb_brise->setObjectName(QString::fromUtf8("nb_brise"));
        nb_brise->setEnabled(true);
        nb_brise->setGeometry(QRect(190, 150, 31, 33));
        nb_brise->setMinimumSize(QSize(31, 33));
        nb_brise->setFrameShape(QFrame::NoFrame);
        nb_brise->setMargin(0);
        lab_Techniques = new QLabel(tab);
        lab_Techniques->setObjectName(QString::fromUtf8("lab_Techniques"));
        lab_Techniques->setGeometry(QRect(270, 180, 141, 19));
        Proba = new QLabel(tab);
        Proba->setObjectName(QString::fromUtf8("Proba"));
        Proba->setGeometry(QRect(480, 120, 181, 19));
        lab_Proba = new QLabel(tab);
        lab_Proba->setObjectName(QString::fromUtf8("lab_Proba"));
        lab_Proba->setGeometry(QRect(320, 120, 331, 19));
        lab_Chaine = new QLabel(tab);
        lab_Chaine->setObjectName(QString::fromUtf8("lab_Chaine"));
        lab_Chaine->setGeometry(QRect(10, 40, 171, 71));
        lab_Choix_jeu = new QLabel(tab);
        lab_Choix_jeu->setObjectName(QString::fromUtf8("lab_Choix_jeu"));
        lab_Choix_jeu->setGeometry(QRect(490, 180, 141, 20));
        QFont font1;
        font1.setKerning(true);
        lab_Choix_jeu->setFont(font1);
        Techniques = new QComboBox(tab);
        Techniques->setObjectName(QString::fromUtf8("Techniques"));
        Techniques->setGeometry(QRect(260, 210, 171, 31));
        Choix_jeu = new QComboBox(tab);
        Choix_jeu->setObjectName(QString::fromUtf8("Choix_jeu"));
        Choix_jeu->setGeometry(QRect(450, 210, 211, 31));
        bouton_Chaine = new QPushButton(tab);
        bouton_Chaine->setObjectName(QString::fromUtf8("bouton_Chaine"));
        bouton_Chaine->setGeometry(QRect(550, 260, 111, 51));
        Capture = new QPushButton(tab);
        Capture->setObjectName(QString::fromUtf8("Capture"));
        Capture->setGeometry(QRect(260, 280, 121, 71));
        lab_Brise = new QLabel(tab);
        lab_Brise->setObjectName(QString::fromUtf8("lab_Brise"));
        lab_Brise->setGeometry(QRect(20, 130, 171, 71));
        bouton_Brise = new QPushButton(tab);
        bouton_Brise->setObjectName(QString::fromUtf8("bouton_Brise"));
        bouton_Brise->setGeometry(QRect(10, 260, 111, 51));
        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setGeometry(QRect(530, 10, 131, 25));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        checkBox->setFont(font2);
        checkBox->setIconSize(QSize(16, 16));
        checkBox->setChecked(false);
        Charme = new QLabel(tab);
        Charme->setObjectName(QString::fromUtf8("Charme"));
        Charme->setGeometry(QRect(380, 80, 261, 19));
        Charme->setFont(font2);
        Image = new QLabel(tab);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(260, 278, 121, 71));
        tabWidget->addTab(tab, QString());
        Image->raise();
        nb_Chaine->raise();
        nb_brise->raise();
        lab_Techniques->raise();
        Proba->raise();
        lab_Proba->raise();
        lab_Chaine->raise();
        lab_Choix_jeu->raise();
        Techniques->raise();
        Choix_jeu->raise();
        bouton_Chaine->raise();
        Capture->raise();
        lab_Brise->raise();
        bouton_Brise->raise();
        checkBox->raise();
        Charme->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        Obtenu = new QLabel(tab_2);
        Obtenu->setObjectName(QString::fromUtf8("Obtenu"));
        Obtenu->setGeometry(QRect(10, 10, 651, 361));
        Obtenu->setLayoutDirection(Qt::LeftToRight);
        Obtenu->setTextFormat(Qt::AutoText);
        Obtenu->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, Techniques);
        QWidget::setTabOrder(Techniques, bouton_Chaine);
        QWidget::setTabOrder(bouton_Chaine, Capture);
        QWidget::setTabOrder(Capture, bouton_Brise);
        QWidget::setTabOrder(bouton_Brise, Choix_jeu);
        QWidget::setTabOrder(Choix_jeu, checkBox);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Open Hunter", 0, QApplication::UnicodeUTF8));
        nb_Chaine->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", 0, QApplication::UnicodeUTF8));
        nb_brise->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_Techniques->setText(QApplication::translate("MainWindow", "Technique de chasse", 0, QApplication::UnicodeUTF8));
        Proba->setText(QString());
        lab_Proba->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Vous avez 1 chance sur</p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_Chaine->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Votre cha\303\256ne est de : </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lab_Choix_jeu->setText(QApplication::translate("MainWindow", "Version de pokemon", 0, QApplication::UnicodeUTF8));
        Techniques->clear();
        Techniques->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Rencontre naturelle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Soft Reset", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Rencontre de Horde", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "M\303\251thode Masuda", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Safari des Amis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "P\303\252che \303\240 la cha\303\256ne", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "NaviDex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pok\303\251 Radar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SOS", 0, QApplication::UnicodeUTF8)
        );
        Choix_jeu->clear();
        Choix_jeu->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pokemon Or/Argent/Cristal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon Rubis/Saphir/Emeraude", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon Rouge Feu/Vert Feuille ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon  Diamant/Perle/Platine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon Or HeartGold/Argent SoulSilve", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon Noir/Blanc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon Noir 2/Blanc 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon X/Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon Rubis Omega/Saphir Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon Soleil/Lune", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon Ultra Soleil/Ultra Lune", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon  Let's Go Pikachu/Let's Go \303\211voli", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pokemon \303\211p\303\251e/Bouclier", 0, QApplication::UnicodeUTF8)
        );
        bouton_Chaine->setText(QApplication::translate("MainWindow", "+1", 0, QApplication::UnicodeUTF8));
        Capture->setText(QString());
        lab_Brise->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Vous en avez bris\303\251 : </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        bouton_Brise->setText(QApplication::translate("MainWindow", "Bris\303\251e", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Charme chroma", 0, QApplication::UnicodeUTF8));
        Charme->setText(QString());
        Image->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Compteur", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Shiny obtenu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

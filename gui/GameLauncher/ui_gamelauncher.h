/********************************************************************************
** Form generated from reading UI file 'gamelauncher.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMELAUNCHER_H
#define UI_GAMELAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameLauncher
{
public:
    QPushButton *startButton;
    QPushButton *settingsButton;
    QLabel *credits;
    QLabel *bg;
    QLabel *title;

    void setupUi(QWidget *GameLauncher)
    {
        if (GameLauncher->objectName().isEmpty())
            GameLauncher->setObjectName(QStringLiteral("GameLauncher"));
        GameLauncher->resize(635, 445);
        GameLauncher->setMinimumSize(QSize(635, 445));
        GameLauncher->setMaximumSize(QSize(635, 445));
        GameLauncher->setStyleSheet(QStringLiteral(""));
        startButton = new QPushButton(GameLauncher);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(230, 190, 181, 51));
        startButton->setStyleSheet(QLatin1String("background-color: rgb(0, 111, 0);\n"
"border-color: rgb(102, 102, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Monotype Corsiva\";"));
        settingsButton = new QPushButton(GameLauncher);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        settingsButton->setGeometry(QRect(230, 260, 181, 51));
        settingsButton->setAcceptDrops(false);
        settingsButton->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"border-color: rgb(102, 102, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Monotype Corsiva\";"));
        credits = new QLabel(GameLauncher);
        credits->setObjectName(QStringLiteral("credits"));
        credits->setGeometry(QRect(240, 340, 161, 91));
        credits->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: italic 10pt \"Monotype Corsiva\";\n"
"background-color: rgba(170, 170, 0,0.2);"));
        credits->setAlignment(Qt::AlignCenter);
        bg = new QLabel(GameLauncher);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, -10, 635, 471));
        bg->setMaximumSize(QSize(635, 16777215));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/images/images/giphy.gif")));
        bg->setScaledContents(true);
        title = new QLabel(GameLauncher);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(220, 110, 201, 20));
        title->setPixmap(QPixmap(QString::fromUtf8(":/images/images/title.png")));
        title->setScaledContents(true);
        bg->raise();
        startButton->raise();
        settingsButton->raise();
        credits->raise();
        title->raise();

        retranslateUi(GameLauncher);

        QMetaObject::connectSlotsByName(GameLauncher);
    } // setupUi

    void retranslateUi(QWidget *GameLauncher)
    {
        GameLauncher->setWindowTitle(QApplication::translate("GameLauncher", "Adventure Launcher", Q_NULLPTR));
        startButton->setText(QApplication::translate("GameLauncher", "Start", Q_NULLPTR));
        settingsButton->setText(QApplication::translate("GameLauncher", "Settings", Q_NULLPTR));
        credits->setText(QApplication::translate("GameLauncher", "<html><head/><body>\n"
"<br>\n"
"Ojas Ahuja<br>\n"
"Kevin Black<br>\n"
"Jacob Nannapaneni<br>\n"
"Harrison Tran<br>\n"
"</body></html>", Q_NULLPTR));
        bg->setText(QString());
        title->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameLauncher: public Ui_GameLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMELAUNCHER_H

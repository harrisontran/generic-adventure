/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QDialogButtonBox *buttonBox;
    QDial *dial;
    QLabel *volumeLabel;
    QLCDNumber *lcdNumber;
    QLabel *bg;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(230, 300);
        Settings->setStyleSheet(QStringLiteral(""));
        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 260, 211, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        dial = new QDial(Settings);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(30, 30, 50, 64));
        dial->setMaximum(10);
        dial->setValue(5);
        dial->setInvertedAppearance(false);
        dial->setWrapping(true);
        volumeLabel = new QLabel(Settings);
        volumeLabel->setObjectName(QStringLiteral("volumeLabel"));
        volumeLabel->setGeometry(QRect(40, 20, 47, 13));
        volumeLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lcdNumber = new QLCDNumber(Settings);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(100, 50, 64, 23));
        lcdNumber->setStyleSheet(QStringLiteral("border-color: rgb(255, 255, 255);"));
        bg = new QLabel(Settings);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 231, 301));
        bg->setStyleSheet(QStringLiteral("background-color: rgb(20,20,20);"));
        bg->raise();
        buttonBox->raise();
        dial->raise();
        volumeLabel->raise();
        lcdNumber->raise();

        retranslateUi(Settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settings, SLOT(reject()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", Q_NULLPTR));
        volumeLabel->setText(QApplication::translate("Settings", "Volume", Q_NULLPTR));
        bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H

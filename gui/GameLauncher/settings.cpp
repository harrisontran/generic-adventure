#include "settings.h"
#include "ui_settings.h"
#include <QCloseEvent>
#include <QDebug>
#include <gamelauncher.h>

Settings::Settings(QWidget *parent, int vol) :
    QDialog(parent),
    ui(new Ui::Settings) {
    ui->setupUi(this);
    ui->dial->setValue(vol);
    ui->lcdNumber->display(vol);
    ui->lcdNumber->setPalette(Qt::darkGreen);
    qDebug() << "SETTINGS WINDOW INITIATED";
}

Settings::~Settings() {
    delete ui;
}

void Settings::closeEvent(QCloseEvent *event) {
    parentWidget()->setEnabled(true);
    qDebug() << "Game launcher enabled on window close";
}

void Settings::on_dial_valueChanged(int val) {
    ui->lcdNumber->display(val);
    qDebug() << "Volume changed in settings windows to " << val;
}

void Settings::on_buttonBox_accepted() {
    int v =  ui->lcdNumber->value();
    qDebug() << "Accepted volume of " << v;
    ((GameLauncher*)parentWidget())->game->setVolume(v);
    parentWidget()->setEnabled(true);
}

void Settings::on_buttonBox_rejected() {
    qDebug() << "Changed settings rejected";
    parentWidget()->setEnabled(true);
}

void Settings::on_buttonBox_destroyed() {
    qDebug() << "Changed settings rejected";
    parentWidget()->setEnabled(true);
}

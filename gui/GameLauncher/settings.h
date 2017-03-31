#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QLCDNumber>
#include <QDial>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    friend class GameLauncher;
    explicit Settings(QWidget *parent = 0, int vol = 5);
    ~Settings();

private slots:
    void closeEvent(QCloseEvent *event);
    void on_dial_valueChanged(int value);
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_buttonBox_destroyed();

private:
    Ui::Settings *ui;
    QLCDNumber *lcdNumber;
};

#endif // SETTINGS_H

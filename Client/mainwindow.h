#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QRegExpValidator>
#include <QRegExp>
#include <QPushButton>

#include <privatemessage.h>

#define PORT 1234

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void messageApend(QString& message);
public slots:
    void on_pbLogin_clicked();
    void on_pbSend_clicked();
    void registration();
    void onReadyRead();
    void onConnected();
    void onDisconnected();
    QPushButton *createNewButton(QString &user);
    void buttonClicked();



signals:
    QString sendUserName(QString name);

private:
    void pMessage(const QString& name);


    Ui::MainWindow *ui;
    QTcpSocket* socket;
    QPushButton *userButton;
    QList<QPushButton*> listButtons;
    QList<PrivateMessage*> listWidgets;
//    std::vector<privateButton> vectButton;
};

#endif // MAINWINDOW_H

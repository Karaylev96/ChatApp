#ifndef PRIVATEMESSAGE_H
#define PRIVATEMESSAGE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QLineEdit>
#include <QTcpSocket>
#include <QPushButton>
#include <QTextEdit>

class PrivateMessage:public QWidget
{
    Q_OBJECT
public:
    PrivateMessage(QTcpSocket *socket ,QString name,QWidget * parent=nullptr);
    QString getUserName();
    QLineEdit *lineEdit;
    void pMessage(QString &Message);
    QTextEdit*textEditor;
private:
    QTcpSocket *s;
    QString name;
    QPushButton *privateButton;
    PrivateMessage *p;

public slots:
    void onSendClick();


//    QPushButton button;
};

#endif // PRIVATEMESSAGE_H

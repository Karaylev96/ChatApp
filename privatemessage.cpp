#include "privatemessage.h"
#include "mainwindow.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QString>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QDebug>

PrivateMessage::PrivateMessage(QTcpSocket *socket,QString name, QWidget * parent):QWidget(parent)
  , lineEdit(new QLineEdit()), s(socket), textEditor(new QTextEdit(name))
{



    QHBoxLayout *lay1 = new QHBoxLayout();
    qDebug() << name;
    privateButton = new QPushButton("Send to User!");
    lay1->addWidget(lineEdit);
    lay1->addWidget(privateButton);

    QVBoxLayout *lay2 = new QVBoxLayout(this);

    textEditor->setFixedSize(800,800);
    lay2->addWidget(textEditor);
    lay2->addLayout(lay1);
    this->name = name;
    qDebug() << this->name;
    connect(privateButton, SIGNAL(clicked(bool)), this, SLOT(onSendClick()));


}


QString PrivateMessage::getUserName()
{
    qDebug() << "this name:" << name;
    return this->name;
}

void PrivateMessage::onSendClick()
{
    QString messages = this->lineEdit->text().trimmed();
    if (!messages.isEmpty()){

        s->write((("/say:/"+ name + ' '+ ":" + messages + "</p>\n").toUtf8()));
        this->lineEdit->clear();
        this->lineEdit->setFocus();
        qDebug()<<("/say:/"+ name + ' '+ ":" + messages + "</p>\n").toUtf8();
    }
}



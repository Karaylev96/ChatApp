/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *upperLabel;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *lwUsers;
    QTextEdit *teChat;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leMessage;
    QPushButton *pbSend;
    QWidget *loginPage;
    QGridLayout *gridLayout;
    QLabel *luxoft;
    QFrame *loginFrame;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *regLabel;
    QLabel *serverLabel;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *registrLabel;
    QLineEdit *leServer;
    QLineEdit *leName;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbLogin;
    QPushButton *regButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(761, 666);
        MainWindow->setStyleSheet(QLatin1String("QFrame {\n"
"	font: normal 12px Helvetica, Arial, sans-serif;\n"
"}\n"
"#mainFrame {background: white;}\n"
"#upperLabel {\n"
"	font: normal 20px Helvetica, Arial, sans-serif;\n"
"	color: purple;\n"
"}\n"
"#lowerLabel {\n"
"	color: gray;\n"
"}\n"
"#loginFrame {\n"
"	padding: 9px 10px;\n"
"	color: black;\n"
"	background: white;\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"	padding: 0px 10px;\n"
"}\n"
"QPushButton {\n"
"	padding: 8px 16px;\n"
"	font: bold 12px Helvetica, Arial, sans-serif;\n"
"	color: #6e6e6e;\n"
"	background: #f3f3f3;\n"
"	background-color: qlineargradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #F5F5F5, stop: 1 #F1F1F1);\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:hover {\n"
"	color: #333;\n"
"	border-color: #c6c6c6\n"
"}\n"
"QPushButton:pressed {\n"
"	color: #000;\n"
"	border: 1px solid #c6c6c6;\n"
"	background-color: qlineargradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                     "
                        "   stop: 0 #eee, stop: 1 #e0e0e0);\n"
"}\n"
"QTextEdit {\n"
"	padding: 7px 10px;\n"
"	color: black;\n"
"	background: white;\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"}\n"
"QListWidget {\n"
"	padding: 7px 10px;\n"
"	color: black;\n"
"	background: white;\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"}\n"
"QLineEdit {\n"
"	padding: 7px 10px;\n"
"	color: black;\n"
"	background: white;\n"
"	border: 1px solid #d8d8d8;\n"
"	border-radius: 2px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(mainFrame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        upperLabel = new QLabel(mainFrame);
        upperLabel->setObjectName(QStringLiteral("upperLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica,Arial,sans-serif"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        upperLabel->setFont(font);
        upperLabel->setText(QStringLiteral(" Chat"));
        upperLabel->setTextFormat(Qt::PlainText);
        upperLabel->setScaledContents(true);
        upperLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(upperLabel);

        stackedWidget = new QStackedWidget(mainFrame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        chatPage = new QWidget();
        chatPage->setObjectName(QStringLiteral("chatPage"));
        verticalLayout_2 = new QVBoxLayout(chatPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lwUsers = new QListWidget(chatPage);
        lwUsers->setObjectName(QStringLiteral("lwUsers"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lwUsers->sizePolicy().hasHeightForWidth());
        lwUsers->setSizePolicy(sizePolicy);
        lwUsers->setMinimumSize(QSize(150, 200));
        lwUsers->setMaximumSize(QSize(150, 16777215));
        lwUsers->setSelectionMode(QAbstractItemView::NoSelection);
        lwUsers->setMovement(QListView::Static);
        lwUsers->setFlow(QListView::TopToBottom);
        lwUsers->setLayoutMode(QListView::SinglePass);
        lwUsers->setSpacing(0);
        lwUsers->setViewMode(QListView::ListMode);
        lwUsers->setSortingEnabled(false);

        horizontalLayout_2->addWidget(lwUsers);

        teChat = new QTextEdit(chatPage);
        teChat->setObjectName(QStringLiteral("teChat"));
        teChat->setMinimumSize(QSize(300, 0));
        teChat->setReadOnly(true);

        horizontalLayout_2->addWidget(teChat);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leMessage = new QLineEdit(chatPage);
        leMessage->setObjectName(QStringLiteral("leMessage"));
        leMessage->setAcceptDrops(false);
        leMessage->setClearButtonEnabled(true);

        horizontalLayout->addWidget(leMessage);

        pbSend = new QPushButton(chatPage);
        pbSend->setObjectName(QStringLiteral("pbSend"));

        horizontalLayout->addWidget(pbSend);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        gridLayout = new QGridLayout(loginPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        luxoft = new QLabel(loginPage);
        luxoft->setObjectName(QStringLiteral("luxoft"));

        gridLayout->addWidget(luxoft, 0, 1, 1, 1);

        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName(QStringLiteral("loginFrame"));
        loginFrame->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginFrame->sizePolicy().hasHeightForWidth());
        loginFrame->setSizePolicy(sizePolicy1);
        loginFrame->setMaximumSize(QSize(16777215, 16777215));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(loginFrame);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_2 = new QLabel(loginFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        regLabel = new QLabel(loginFrame);
        regLabel->setObjectName(QStringLiteral("regLabel"));

        verticalLayout_5->addWidget(regLabel);

        serverLabel = new QLabel(loginFrame);
        serverLabel->setObjectName(QStringLiteral("serverLabel"));

        verticalLayout_5->addWidget(serverLabel);

        label = new QLabel(loginFrame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        registrLabel = new QLineEdit(loginFrame);
        registrLabel->setObjectName(QStringLiteral("registrLabel"));
        registrLabel->setMaxLength(12);

        verticalLayout_3->addWidget(registrLabel);

        leServer = new QLineEdit(loginFrame);
        leServer->setObjectName(QStringLiteral("leServer"));
        leServer->setMinimumSize(QSize(170, 0));
        leServer->setMaxLength(15);

        verticalLayout_3->addWidget(leServer);

        leName = new QLineEdit(loginFrame);
        leName->setObjectName(QStringLiteral("leName"));
        leName->setMaxLength(12);

        verticalLayout_3->addWidget(leName);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pbLogin = new QPushButton(loginFrame);
        pbLogin->setObjectName(QStringLiteral("pbLogin"));

        horizontalLayout_4->addWidget(pbLogin);

        regButton = new QPushButton(loginFrame);
        regButton->setObjectName(QStringLiteral("regButton"));
        regButton->setEnabled(true);
        regButton->setCheckable(false);

        horizontalLayout_4->addWidget(regButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_4);


        gridLayout->addWidget(loginFrame, 0, 3, 1, 1);

        stackedWidget->addWidget(loginPage);

        verticalLayout_4->addWidget(stackedWidget);

        label_3 = new QLabel(mainFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);


        verticalLayout->addWidget(mainFrame);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));

        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(leName, leServer);
        QWidget::setTabOrder(leServer, teChat);
        QWidget::setTabOrder(teChat, leMessage);
        QWidget::setTabOrder(leMessage, pbLogin);
        QWidget::setTabOrder(pbLogin, pbSend);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        pbSend->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Georgis'Chat", Q_NULLPTR));
        teChat->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica,Arial,sans-serif'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        pbSend->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        luxoft->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sign in", Q_NULLPTR));
        regLabel->setText(QApplication::translate("MainWindow", "Registration:", Q_NULLPTR));
        serverLabel->setText(QApplication::translate("MainWindow", "Server:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Name: ", Q_NULLPTR));
        leServer->setText(QApplication::translate("MainWindow", "localhost", Q_NULLPTR));
        pbLogin->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        regButton->setText(QApplication::translate("MainWindow", "Registration", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Georgi Karaylev\302\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

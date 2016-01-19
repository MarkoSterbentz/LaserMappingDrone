/********************************************************************************
** Form generated from reading UI file 'pqAboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQABOUTDIALOG_H
#define UI_PQABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqAboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Image;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *VersionLabel;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tabClient;
    QVBoxLayout *vboxLayout;
    QTreeWidget *ClientInformation;
    QWidget *tabServer;
    QGridLayout *gridLayout;
    QTreeWidget *ServerInformation;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqAboutDialog)
    {
        if (pqAboutDialog->objectName().isEmpty())
            pqAboutDialog->setObjectName(QString::fromUtf8("pqAboutDialog"));
        pqAboutDialog->resize(528, 726);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqAboutDialog->sizePolicy().hasHeightForWidth());
        pqAboutDialog->setSizePolicy(sizePolicy);
        pqAboutDialog->setModal(true);
        verticalLayout = new QVBoxLayout(pqAboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Image = new QLabel(pqAboutDialog);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setPixmap(QPixmap(QString::fromUtf8(":/pqWidgets/Icons/PVSplashScreen.png")));
        Image->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Image);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(pqAboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        VersionLabel = new QLabel(pqAboutDialog);
        VersionLabel->setObjectName(QString::fromUtf8("VersionLabel"));
        VersionLabel->setTextFormat(Qt::AutoText);
        VersionLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(VersionLabel);

        label_2 = new QLabel(pqAboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(pqAboutDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabClient = new QWidget();
        tabClient->setObjectName(QString::fromUtf8("tabClient"));
        vboxLayout = new QVBoxLayout(tabClient);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ClientInformation = new QTreeWidget(tabClient);
        ClientInformation->setObjectName(QString::fromUtf8("ClientInformation"));
        ClientInformation->setAlternatingRowColors(true);
        ClientInformation->setRootIsDecorated(false);

        vboxLayout->addWidget(ClientInformation);

        tabWidget->addTab(tabClient, QString());
        tabServer = new QWidget();
        tabServer->setObjectName(QString::fromUtf8("tabServer"));
        gridLayout = new QGridLayout(tabServer);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ServerInformation = new QTreeWidget(tabServer);
        ServerInformation->setObjectName(QString::fromUtf8("ServerInformation"));
        ServerInformation->setAlternatingRowColors(true);
        ServerInformation->setRootIsDecorated(false);

        gridLayout->addWidget(ServerInformation, 0, 0, 1, 1);

        tabWidget->addTab(tabServer, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(pqAboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqAboutDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), pqAboutDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *pqAboutDialog)
    {
        pqAboutDialog->setWindowTitle(QApplication::translate("pqAboutDialog", "About ParaView", 0, QApplication::UnicodeUTF8));
        Image->setText(QString());
        label_3->setText(QApplication::translate("pqAboutDialog", "<a href=\\\"http://www.kitware.com\\\">www.kitware.com</a>", 0, QApplication::UnicodeUTF8));
        VersionLabel->setText(QApplication::translate("pqAboutDialog", "<html><b>Version: <i>3.x.x</i></b></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqAboutDialog", "<a href=\\\"http://www.paraview.org\\\">www.paraview.org</a>", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = ClientInformation->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("pqAboutDialog", "Description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("pqAboutDialog", "Item", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabClient), QApplication::translate("pqAboutDialog", "Client Information", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = ServerInformation->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("pqAboutDialog", "Description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("pqAboutDialog", "Item", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabServer), QApplication::translate("pqAboutDialog", "Connection Information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqAboutDialog: public Ui_pqAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQABOUTDIALOG_H

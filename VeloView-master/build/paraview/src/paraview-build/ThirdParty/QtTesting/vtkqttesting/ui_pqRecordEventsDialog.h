/********************************************************************************
** Form generated from reading UI file 'pqRecordEventsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQRECORDEVENTSDIALOG_H
#define UI_PQRECORDEVENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqRecordEventsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *lastEvent;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *eventWidgetLabel;
    QLineEdit *eventWidgetEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *eventArgumentLabel;
    QLineEdit *eventArgumentEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *eventCommandLabel;
    QLineEdit *eventCommandEdit;
    QWidget *addComment;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *commentLabel;
    QTextEdit *commentTextEdit;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *blockingCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *commentAddButton;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QLCDNumber *nbEvents;
    QLabel *nbEventsLabel;
    QSpacerItem *spacerItem;
    QPushButton *recordPauseButton;
    QPushButton *stopButton;

    void setupUi(QDialog *pqRecordEventsDialog)
    {
        if (pqRecordEventsDialog->objectName().isEmpty())
            pqRecordEventsDialog->setObjectName(QString::fromUtf8("pqRecordEventsDialog"));
        pqRecordEventsDialog->resize(393, 256);
        verticalLayout_3 = new QVBoxLayout(pqRecordEventsDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(pqRecordEventsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(true);
        lastEvent = new QWidget();
        lastEvent->setObjectName(QString::fromUtf8("lastEvent"));
        verticalLayout = new QVBoxLayout(lastEvent);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        eventWidgetLabel = new QLabel(lastEvent);
        eventWidgetLabel->setObjectName(QString::fromUtf8("eventWidgetLabel"));

        horizontalLayout->addWidget(eventWidgetLabel);

        eventWidgetEdit = new QLineEdit(lastEvent);
        eventWidgetEdit->setObjectName(QString::fromUtf8("eventWidgetEdit"));
        eventWidgetEdit->setEnabled(true);
        eventWidgetEdit->setFrame(false);
        eventWidgetEdit->setReadOnly(true);

        horizontalLayout->addWidget(eventWidgetEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        eventArgumentLabel = new QLabel(lastEvent);
        eventArgumentLabel->setObjectName(QString::fromUtf8("eventArgumentLabel"));
        eventArgumentLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(eventArgumentLabel->sizePolicy().hasHeightForWidth());
        eventArgumentLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(eventArgumentLabel);

        eventArgumentEdit = new QLineEdit(lastEvent);
        eventArgumentEdit->setObjectName(QString::fromUtf8("eventArgumentEdit"));
        eventArgumentEdit->setEnabled(true);
        eventArgumentEdit->setFrame(false);
        eventArgumentEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(eventArgumentEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        eventCommandLabel = new QLabel(lastEvent);
        eventCommandLabel->setObjectName(QString::fromUtf8("eventCommandLabel"));

        horizontalLayout_3->addWidget(eventCommandLabel);

        eventCommandEdit = new QLineEdit(lastEvent);
        eventCommandEdit->setObjectName(QString::fromUtf8("eventCommandEdit"));
        eventCommandEdit->setEnabled(true);
        eventCommandEdit->setFrame(false);
        eventCommandEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(eventCommandEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(lastEvent, icon, QString());
        addComment = new QWidget();
        addComment->setObjectName(QString::fromUtf8("addComment"));
        horizontalLayout_5 = new QHBoxLayout(addComment);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        commentLabel = new QLabel(addComment);
        commentLabel->setObjectName(QString::fromUtf8("commentLabel"));

        verticalLayout_4->addWidget(commentLabel);

        commentTextEdit = new QTextEdit(addComment);
        commentTextEdit->setObjectName(QString::fromUtf8("commentTextEdit"));
        sizePolicy1.setHeightForWidth(commentTextEdit->sizePolicy().hasHeightForWidth());
        commentTextEdit->setSizePolicy(sizePolicy1);
        commentTextEdit->setMaximumSize(QSize(16777215, 80));

        verticalLayout_4->addWidget(commentTextEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        blockingCheckBox = new QCheckBox(addComment);
        blockingCheckBox->setObjectName(QString::fromUtf8("blockingCheckBox"));

        horizontalLayout_4->addWidget(blockingCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        commentAddButton = new QPushButton(addComment);
        commentAddButton->setObjectName(QString::fromUtf8("commentAddButton"));
        sizePolicy1.setHeightForWidth(commentAddButton->sizePolicy().hasHeightForWidth());
        commentAddButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        commentAddButton->setIcon(icon1);

        horizontalLayout_4->addWidget(commentAddButton);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_4);

        tabWidget->addTab(addComment, icon1, QString());

        verticalLayout_3->addWidget(tabWidget);

        line = new QFrame(pqRecordEventsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setSizeConstraint(QLayout::SetMinimumSize);
        nbEvents = new QLCDNumber(pqRecordEventsDialog);
        nbEvents->setObjectName(QString::fromUtf8("nbEvents"));
        nbEvents->setSmallDecimalPoint(false);
        nbEvents->setDigitCount(5);

        hboxLayout->addWidget(nbEvents);

        nbEventsLabel = new QLabel(pqRecordEventsDialog);
        nbEventsLabel->setObjectName(QString::fromUtf8("nbEventsLabel"));

        hboxLayout->addWidget(nbEventsLabel);

        spacerItem = new QSpacerItem(133, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        recordPauseButton = new QPushButton(pqRecordEventsDialog);
        recordPauseButton->setObjectName(QString::fromUtf8("recordPauseButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/Icons/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        recordPauseButton->setIcon(icon2);
        recordPauseButton->setCheckable(true);

        hboxLayout->addWidget(recordPauseButton);

        stopButton = new QPushButton(pqRecordEventsDialog);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/playback-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon3);

        hboxLayout->addWidget(stopButton);


        verticalLayout_3->addLayout(hboxLayout);


        retranslateUi(pqRecordEventsDialog);
        QObject::connect(stopButton, SIGNAL(clicked()), pqRecordEventsDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqRecordEventsDialog);
    } // setupUi

    void retranslateUi(QDialog *pqRecordEventsDialog)
    {
        pqRecordEventsDialog->setWindowTitle(QApplication::translate("pqRecordEventsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        eventWidgetLabel->setToolTip(QApplication::translate("pqRecordEventsDialog", "Last widget recorded", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        eventWidgetLabel->setText(QApplication::translate("pqRecordEventsDialog", "Widget :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        eventArgumentLabel->setToolTip(QApplication::translate("pqRecordEventsDialog", "Last argument recorded", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        eventArgumentLabel->setText(QApplication::translate("pqRecordEventsDialog", "Argument :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        eventCommandLabel->setToolTip(QApplication::translate("pqRecordEventsDialog", "Last command recorded", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        eventCommandLabel->setText(QApplication::translate("pqRecordEventsDialog", "Command :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(lastEvent), QApplication::translate("pqRecordEventsDialog", "Last event", 0, QApplication::UnicodeUTF8));
        commentLabel->setText(QApplication::translate("pqRecordEventsDialog", "Add your custom comment :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        commentTextEdit->setToolTip(QApplication::translate("pqRecordEventsDialog", "Write the comment that you want to add", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        blockingCheckBox->setToolTip(QApplication::translate("pqRecordEventsDialog", "Add option block to you comment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        blockingCheckBox->setText(QApplication::translate("pqRecordEventsDialog", "Blocking", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        commentAddButton->setToolTip(QApplication::translate("pqRecordEventsDialog", "Add your comment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        commentAddButton->setText(QApplication::translate("pqRecordEventsDialog", "Add to macro", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(addComment), QApplication::translate("pqRecordEventsDialog", "Add comment", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nbEvents->setToolTip(QApplication::translate("pqRecordEventsDialog", "numbers of events recorded", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nbEventsLabel->setText(QApplication::translate("pqRecordEventsDialog", "Events recorded", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        recordPauseButton->setToolTip(QApplication::translate("pqRecordEventsDialog", "Start/Pause record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        recordPauseButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("pqRecordEventsDialog", "Stop record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QApplication::translate("pqRecordEventsDialog", "Stop Recording", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqRecordEventsDialog: public Ui_pqRecordEventsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQRECORDEVENTSDIALOG_H

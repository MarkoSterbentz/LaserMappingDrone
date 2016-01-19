/********************************************************************************
** Form generated from reading UI file 'pqPlayBackEventsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPLAYBACKEVENTSDIALOG_H
#define UI_PQPLAYBACKEVENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqPlayBackEventsDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *Player;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *playerErrorIconLabel;
    QLabel *playerErrorTextLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *plusButton;
    QPushButton *minusButton;
    QPushButton *loadFileButton;
    QWidget *Info;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *currentFileLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *infoErrorIconLabel;
    QLabel *infoErrorTextLabel;
    QGroupBox *Data;
    QVBoxLayout *verticalLayout_3;
    QLabel *objectLabel;
    QLabel *commandLabel;
    QLabel *argumentsLabel;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *playPauseButton;
    QPushButton *stepButton;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *timeStepLabel;
    QSpinBox *timeStepSpinBox;
    QCheckBox *checkBox;
    QTextBrowser *logBrowser;

    void setupUi(QDialog *pqPlayBackEventsDialog)
    {
        if (pqPlayBackEventsDialog->objectName().isEmpty())
            pqPlayBackEventsDialog->setObjectName(QString::fromUtf8("pqPlayBackEventsDialog"));
        pqPlayBackEventsDialog->setWindowModality(Qt::NonModal);
        pqPlayBackEventsDialog->resize(392, 332);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqPlayBackEventsDialog->sizePolicy().hasHeightForWidth());
        pqPlayBackEventsDialog->setSizePolicy(sizePolicy);
        pqPlayBackEventsDialog->setMinimumSize(QSize(0, 0));
        pqPlayBackEventsDialog->setMaximumSize(QSize(16777215, 16777215));
        pqPlayBackEventsDialog->setSizeGripEnabled(false);
        pqPlayBackEventsDialog->setModal(false);
        verticalLayout_4 = new QVBoxLayout(pqPlayBackEventsDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        tabWidget = new QTabWidget(pqPlayBackEventsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(15, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(true);
        Player = new QWidget();
        Player->setObjectName(QString::fromUtf8("Player"));
        verticalLayout_2 = new QVBoxLayout(Player);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        tableWidget = new QTableWidget(Player);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setItalic(false);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QString::fromUtf8("Files"));
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget->setMaximumSize(QSize(16777215, 16777215));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setTabKeyNavigation(true);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(15);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        playerErrorIconLabel = new QLabel(Player);
        playerErrorIconLabel->setObjectName(QString::fromUtf8("playerErrorIconLabel"));
        playerErrorIconLabel->setMaximumSize(QSize(18, 18));
        playerErrorIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Icons/clear.svg")));
        playerErrorIconLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(playerErrorIconLabel);

        playerErrorTextLabel = new QLabel(Player);
        playerErrorTextLabel->setObjectName(QString::fromUtf8("playerErrorTextLabel"));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(106, 104, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        playerErrorTextLabel->setPalette(palette);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        playerErrorTextLabel->setFont(font1);

        horizontalLayout_3->addWidget(playerErrorTextLabel);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        plusButton = new QPushButton(Player);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        plusButton->setIcon(icon);
        plusButton->setIconSize(QSize(24, 24));
        plusButton->setFlat(false);

        horizontalLayout_3->addWidget(plusButton);

        minusButton = new QPushButton(Player);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        minusButton->setIcon(icon1);

        horizontalLayout_3->addWidget(minusButton);

        loadFileButton = new QPushButton(Player);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loadFileButton->sizePolicy().hasHeightForWidth());
        loadFileButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(loadFileButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/timePlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(Player, icon2, QString());
        Info = new QWidget();
        Info->setObjectName(QString::fromUtf8("Info"));
        verticalLayout = new QVBoxLayout(Info);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        currentFileLabel = new QLabel(Info);
        currentFileLabel->setObjectName(QString::fromUtf8("currentFileLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(currentFileLabel->sizePolicy().hasHeightForWidth());
        currentFileLabel->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(currentFileLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        infoErrorIconLabel = new QLabel(Info);
        infoErrorIconLabel->setObjectName(QString::fromUtf8("infoErrorIconLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(infoErrorIconLabel->sizePolicy().hasHeightForWidth());
        infoErrorIconLabel->setSizePolicy(sizePolicy3);
        infoErrorIconLabel->setMaximumSize(QSize(18, 18));
        infoErrorIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Icons/clear.svg")));
        infoErrorIconLabel->setScaledContents(true);

        horizontalLayout->addWidget(infoErrorIconLabel);

        infoErrorTextLabel = new QLabel(Info);
        infoErrorTextLabel->setObjectName(QString::fromUtf8("infoErrorTextLabel"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        QBrush brush3(QColor(190, 190, 190, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        infoErrorTextLabel->setPalette(palette1);
        infoErrorTextLabel->setFont(font1);

        horizontalLayout->addWidget(infoErrorTextLabel);


        verticalLayout->addLayout(horizontalLayout);

        Data = new QGroupBox(Info);
        Data->setObjectName(QString::fromUtf8("Data"));
        Data->setEnabled(true);
        sizePolicy2.setHeightForWidth(Data->sizePolicy().hasHeightForWidth());
        Data->setSizePolicy(sizePolicy2);
        Data->setFlat(false);
        Data->setCheckable(false);
        Data->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(Data);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        objectLabel = new QLabel(Data);
        objectLabel->setObjectName(QString::fromUtf8("objectLabel"));
        sizePolicy2.setHeightForWidth(objectLabel->sizePolicy().hasHeightForWidth());
        objectLabel->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(objectLabel);

        commandLabel = new QLabel(Data);
        commandLabel->setObjectName(QString::fromUtf8("commandLabel"));
        sizePolicy2.setHeightForWidth(commandLabel->sizePolicy().hasHeightForWidth());
        commandLabel->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(commandLabel);

        argumentsLabel = new QLabel(Data);
        argumentsLabel->setObjectName(QString::fromUtf8("argumentsLabel"));
        sizePolicy2.setHeightForWidth(argumentsLabel->sizePolicy().hasHeightForWidth());
        argumentsLabel->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(argumentsLabel);


        verticalLayout->addWidget(Data);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(Info, icon3, QString());

        verticalLayout_4->addWidget(tabWidget);

        line = new QFrame(pqPlayBackEventsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        playPauseButton = new QPushButton(pqPlayBackEventsDialog);
        playPauseButton->setObjectName(QString::fromUtf8("playPauseButton"));
        playPauseButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/timePlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/Icons/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        playPauseButton->setIcon(icon4);
        playPauseButton->setCheckable(true);
        playPauseButton->setChecked(false);
        playPauseButton->setAutoRepeat(false);
        playPauseButton->setFlat(false);

        horizontalLayout_2->addWidget(playPauseButton);

        stepButton = new QPushButton(pqPlayBackEventsDialog);
        stepButton->setObjectName(QString::fromUtf8("stepButton"));
        stepButton->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/frameForward.png"), QSize(), QIcon::Normal, QIcon::Off);
        stepButton->setIcon(icon5);
        stepButton->setCheckable(false);
        stepButton->setChecked(false);
        stepButton->setFlat(false);

        horizontalLayout_2->addWidget(stepButton);

        stopButton = new QPushButton(pqPlayBackEventsDialog);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/playback-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon6);
        stopButton->setFlat(false);

        horizontalLayout_2->addWidget(stopButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        timeStepLabel = new QLabel(pqPlayBackEventsDialog);
        timeStepLabel->setObjectName(QString::fromUtf8("timeStepLabel"));

        horizontalLayout_2->addWidget(timeStepLabel);

        timeStepSpinBox = new QSpinBox(pqPlayBackEventsDialog);
        timeStepSpinBox->setObjectName(QString::fromUtf8("timeStepSpinBox"));
        timeStepSpinBox->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(timeStepSpinBox->sizePolicy().hasHeightForWidth());
        timeStepSpinBox->setSizePolicy(sizePolicy4);
        timeStepSpinBox->setMinimum(0);
        timeStepSpinBox->setMaximum(1000);
        timeStepSpinBox->setSingleStep(10);
        timeStepSpinBox->setValue(100);

        horizontalLayout_2->addWidget(timeStepSpinBox);

        checkBox = new QCheckBox(pqPlayBackEventsDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        logBrowser = new QTextBrowser(pqPlayBackEventsDialog);
        logBrowser->setObjectName(QString::fromUtf8("logBrowser"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(logBrowser->sizePolicy().hasHeightForWidth());
        logBrowser->setSizePolicy(sizePolicy5);

        verticalLayout_4->addWidget(logBrowser);


        retranslateUi(pqPlayBackEventsDialog);
        QObject::connect(checkBox, SIGNAL(toggled(bool)), logBrowser, SLOT(setVisible(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqPlayBackEventsDialog);
    } // setupUi

    void retranslateUi(QDialog *pqPlayBackEventsDialog)
    {
        pqPlayBackEventsDialog->setWindowTitle(QApplication::translate("pqPlayBackEventsDialog", "PlayBack Information", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem->setText(QApplication::translate("pqPlayBackEventsDialog", "Progress", 0, QApplication::UnicodeUTF8));
        playerErrorIconLabel->setText(QString());
        playerErrorTextLabel->setText(QApplication::translate("pqPlayBackEventsDialog", "Error occured", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        plusButton->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Add scripts to the list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        plusButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        minusButton->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Remove checked scripts", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        minusButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        loadFileButton->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Open scripts", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        loadFileButton->setText(QApplication::translate("pqPlayBackEventsDialog", "Open Scripts", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Player), QApplication::translate("pqPlayBackEventsDialog", "Player", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Info->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Information about the current event", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        currentFileLabel->setText(QApplication::translate("pqPlayBackEventsDialog", "No file is playing", 0, QApplication::UnicodeUTF8));
        infoErrorIconLabel->setText(QString());
        infoErrorTextLabel->setText(QApplication::translate("pqPlayBackEventsDialog", "Error occured", 0, QApplication::UnicodeUTF8));
        Data->setTitle(QApplication::translate("pqPlayBackEventsDialog", "Current Event", 0, QApplication::UnicodeUTF8));
        objectLabel->setText(QApplication::translate("pqPlayBackEventsDialog", "Object :", 0, QApplication::UnicodeUTF8));
        commandLabel->setText(QApplication::translate("pqPlayBackEventsDialog", "Command :", 0, QApplication::UnicodeUTF8));
        argumentsLabel->setText(QApplication::translate("pqPlayBackEventsDialog", "Argument(s) :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Info), QApplication::translate("pqPlayBackEventsDialog", "Info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        playPauseButton->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Play/Pause", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        playPauseButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stepButton->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Play step by step", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stepButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QString());
        timeStepLabel->setText(QApplication::translate("pqPlayBackEventsDialog", "Time step :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        timeStepSpinBox->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Time step between each events", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        timeStepSpinBox->setSuffix(QApplication::translate("pqPlayBackEventsDialog", " ms", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBox->setToolTip(QApplication::translate("pqPlayBackEventsDialog", "Show/Hide log browser", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox->setText(QApplication::translate("pqPlayBackEventsDialog", "Logs", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqPlayBackEventsDialog: public Ui_pqPlayBackEventsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPLAYBACKEVENTSDIALOG_H

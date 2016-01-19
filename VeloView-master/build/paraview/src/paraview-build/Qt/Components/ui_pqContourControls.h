/********************************************************************************
** Form generated from reading UI file 'pqContourControls.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCONTOURCONTROLS_H
#define UI_PQCONTOURCONTROLS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqContourControls
{
public:
    QGridLayout *gridLayout;
    QCheckBox *GenerateTriangles;
    QCheckBox *ComputeScalars;
    QCheckBox *ComputeGradients;
    QCheckBox *ComputeNormals;
    QComboBox *SelectInputScalars;
    QLabel *label_7;

    void setupUi(QWidget *pqContourControls)
    {
        if (pqContourControls->objectName().isEmpty())
            pqContourControls->setObjectName(QString::fromUtf8("pqContourControls"));
        pqContourControls->resize(207, 114);
        gridLayout = new QGridLayout(pqContourControls);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        GenerateTriangles = new QCheckBox(pqContourControls);
        GenerateTriangles->setObjectName(QString::fromUtf8("GenerateTriangles"));

        gridLayout->addWidget(GenerateTriangles, 4, 0, 1, 2);

        ComputeScalars = new QCheckBox(pqContourControls);
        ComputeScalars->setObjectName(QString::fromUtf8("ComputeScalars"));

        gridLayout->addWidget(ComputeScalars, 3, 0, 1, 2);

        ComputeGradients = new QCheckBox(pqContourControls);
        ComputeGradients->setObjectName(QString::fromUtf8("ComputeGradients"));

        gridLayout->addWidget(ComputeGradients, 2, 0, 1, 2);

        ComputeNormals = new QCheckBox(pqContourControls);
        ComputeNormals->setObjectName(QString::fromUtf8("ComputeNormals"));

        gridLayout->addWidget(ComputeNormals, 1, 0, 1, 2);

        SelectInputScalars = new QComboBox(pqContourControls);
        SelectInputScalars->setObjectName(QString::fromUtf8("SelectInputScalars"));

        gridLayout->addWidget(SelectInputScalars, 0, 1, 1, 1);

        label_7 = new QLabel(pqContourControls);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        QWidget::setTabOrder(SelectInputScalars, ComputeNormals);
        QWidget::setTabOrder(ComputeNormals, ComputeGradients);
        QWidget::setTabOrder(ComputeGradients, ComputeScalars);
        QWidget::setTabOrder(ComputeScalars, GenerateTriangles);

        retranslateUi(pqContourControls);

        QMetaObject::connectSlotsByName(pqContourControls);
    } // setupUi

    void retranslateUi(QWidget *pqContourControls)
    {
        pqContourControls->setWindowTitle(QApplication::translate("pqContourControls", "Form", 0, QApplication::UnicodeUTF8));
        GenerateTriangles->setText(QApplication::translate("pqContourControls", "Generate Triangles", 0, QApplication::UnicodeUTF8));
        ComputeScalars->setText(QApplication::translate("pqContourControls", "Compute Scalars", 0, QApplication::UnicodeUTF8));
        ComputeGradients->setText(QApplication::translate("pqContourControls", "Compute Gradients", 0, QApplication::UnicodeUTF8));
        ComputeNormals->setText(QApplication::translate("pqContourControls", "Compute Normals", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("pqContourControls", "Contour By", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqContourControls: public Ui_pqContourControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCONTOURCONTROLS_H

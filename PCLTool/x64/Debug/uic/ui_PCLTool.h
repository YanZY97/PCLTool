/********************************************************************************
** Form generated from reading UI file 'PCLTool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCLTOOL_H
#define UI_PCLTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PCLToolClass
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxValues;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_1;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblFileName;
    QLabel *lblNumPoints;
    QLabel *lblXlength;
    QLabel *lblYlength;
    QLabel *lblZlength;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *hSliderPointSize;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QPushButton *btnOutlierRemoval;
    QPushButton *btnResetCamera;
    QFormLayout *formLayout_3;
    QPushButton *btnShowSrc;
    QPushButton *btnShowDst;
    QVTKWidget *qvtkWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PCLToolClass)
    {
        if (PCLToolClass->objectName().isEmpty())
            PCLToolClass->setObjectName(QString::fromUtf8("PCLToolClass"));
        PCLToolClass->resize(1058, 666);
        actionOpen = new QAction(PCLToolClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(PCLToolClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(PCLToolClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxValues = new QGroupBox(centralWidget);
        groupBoxValues->setObjectName(QString::fromUtf8("groupBoxValues"));
        verticalLayout_2 = new QVBoxLayout(groupBoxValues);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(13);
        label_2 = new QLabel(groupBoxValues);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("SimSun-ExtB"));
        font.setPointSize(11);
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_1 = new QLabel(groupBoxValues);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        label_3 = new QLabel(groupBoxValues);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBoxValues);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(groupBoxValues);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lblFileName = new QLabel(groupBoxValues);
        lblFileName->setObjectName(QString::fromUtf8("lblFileName"));
        lblFileName->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, lblFileName);

        lblNumPoints = new QLabel(groupBoxValues);
        lblNumPoints->setObjectName(QString::fromUtf8("lblNumPoints"));
        lblNumPoints->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, lblNumPoints);

        lblXlength = new QLabel(groupBoxValues);
        lblXlength->setObjectName(QString::fromUtf8("lblXlength"));
        lblXlength->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, lblXlength);

        lblYlength = new QLabel(groupBoxValues);
        lblYlength->setObjectName(QString::fromUtf8("lblYlength"));
        lblYlength->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, lblYlength);

        lblZlength = new QLabel(groupBoxValues);
        lblZlength->setObjectName(QString::fromUtf8("lblZlength"));
        lblZlength->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, lblZlength);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(groupBoxValues);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hSliderPointSize = new QSlider(centralWidget);
        hSliderPointSize->setObjectName(QString::fromUtf8("hSliderPointSize"));
        hSliderPointSize->setMinimum(1);
        hSliderPointSize->setMaximum(5);
        hSliderPointSize->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hSliderPointSize, 0, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnOutlierRemoval = new QPushButton(centralWidget);
        btnOutlierRemoval->setObjectName(QString::fromUtf8("btnOutlierRemoval"));

        verticalLayout->addWidget(btnOutlierRemoval);

        btnResetCamera = new QPushButton(centralWidget);
        btnResetCamera->setObjectName(QString::fromUtf8("btnResetCamera"));
        btnResetCamera->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnResetCamera->sizePolicy().hasHeightForWidth());
        btnResetCamera->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btnResetCamera);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setVerticalSpacing(7);
        btnShowSrc = new QPushButton(centralWidget);
        btnShowSrc->setObjectName(QString::fromUtf8("btnShowSrc"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, btnShowSrc);

        btnShowDst = new QPushButton(centralWidget);
        btnShowDst->setObjectName(QString::fromUtf8("btnShowDst"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, btnShowDst);


        verticalLayout->addLayout(formLayout_3);

        verticalLayout->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout);

        qvtkWidget = new QVTKWidget(centralWidget);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qvtkWidget->sizePolicy().hasHeightForWidth());
        qvtkWidget->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(qvtkWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);
        PCLToolClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PCLToolClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1058, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        PCLToolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PCLToolClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PCLToolClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PCLToolClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PCLToolClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionOpen);
        menu->addSeparator();
        menu->addAction(actionExit);

        retranslateUi(PCLToolClass);
        QObject::connect(actionExit, SIGNAL(triggered()), PCLToolClass, SLOT(close()));
        QObject::connect(hSliderPointSize, SIGNAL(valueChanged(int)), label_6, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(PCLToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *PCLToolClass)
    {
        PCLToolClass->setWindowTitle(QApplication::translate("PCLToolClass", "PCLTool", nullptr));
        actionOpen->setText(QApplication::translate("PCLToolClass", "Open", nullptr));
        actionExit->setText(QApplication::translate("PCLToolClass", "Exit", nullptr));
        groupBoxValues->setTitle(QApplication::translate("PCLToolClass", "\347\202\271\344\272\221\344\277\241\346\201\257", nullptr));
        label_2->setText(QApplication::translate("PCLToolClass", "\347\202\271\346\225\260\351\207\217:", nullptr));
        label_1->setText(QApplication::translate("PCLToolClass", "\346\226\207\344\273\266\345\220\215:", nullptr));
        label_3->setText(QApplication::translate("PCLToolClass", "X\346\226\271\345\220\221\351\225\277\345\272\246:", nullptr));
        label_4->setText(QApplication::translate("PCLToolClass", "Y\346\226\271\345\220\221\351\225\277\345\272\246:", nullptr));
        label_5->setText(QApplication::translate("PCLToolClass", "Z\346\226\271\345\220\221\351\225\277\345\272\246:", nullptr));
        lblFileName->setText(QString());
        lblNumPoints->setText(QString());
        lblXlength->setText(QString());
        lblYlength->setText(QString());
        lblZlength->setText(QString());
        label->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\347\202\271\345\244\247\345\260\217", nullptr));
        label_6->setText(QApplication::translate("PCLToolClass", "1", nullptr));
        btnOutlierRemoval->setText(QApplication::translate("PCLToolClass", "\347\247\273\351\231\244\347\246\273\347\276\244\347\202\271", nullptr));
        btnResetCamera->setText(QApplication::translate("PCLToolClass", "\351\207\215\347\275\256\351\225\234\345\244\264", nullptr));
        btnShowSrc->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\345\216\237\345\247\213\347\202\271\344\272\221", nullptr));
        btnShowDst->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\345\244\204\347\220\206\345\220\216\347\202\271\344\272\221", nullptr));
        menu->setTitle(QApplication::translate("PCLToolClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PCLToolClass: public Ui_PCLToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLTOOL_H

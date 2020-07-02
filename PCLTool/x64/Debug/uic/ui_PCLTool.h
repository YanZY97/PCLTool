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
#include <QtWidgets/QDoubleSpinBox>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QVBoxLayout *layoutDisplay;
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
    QGridLayout *layoutSliderPSize;
    QLabel *label;
    QSlider *hSliderPointSize;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QPushButton *btnResetCamera;
    QFormLayout *layoutBtnShow;
    QPushButton *btnShowSrc;
    QPushButton *btnShowDst;
    QVTKWidget *qvtkWidget;
    QTabWidget *tabWidget;
    QWidget *tabOutlierRemoval;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QSpinBox *sboxMeank;
    QLabel *label_8;
    QDoubleSpinBox *sboxStdThresh;
    QPushButton *btnOutlierRemoval;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    QDoubleSpinBox *sboxAngularReslution;
    QLabel *label_10;
    QDoubleSpinBox *sboxNoiseLevel;
    QLabel *label_11;
    QDoubleSpinBox *sboxMinRange;
    QLabel *label_12;
    QSpinBox *sboxBorderSize;
    QLabel *label_13;
    QDoubleSpinBox *sboxSupportSize;
    QPushButton *btnNARF;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PCLToolClass)
    {
        if (PCLToolClass->objectName().isEmpty())
            PCLToolClass->setObjectName(QString::fromUtf8("PCLToolClass"));
        PCLToolClass->resize(1162, 674);
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
        layoutDisplay = new QVBoxLayout();
        layoutDisplay->setSpacing(7);
        layoutDisplay->setObjectName(QString::fromUtf8("layoutDisplay"));
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


        layoutDisplay->addWidget(groupBoxValues);

        layoutSliderPSize = new QGridLayout();
        layoutSliderPSize->setSpacing(6);
        layoutSliderPSize->setObjectName(QString::fromUtf8("layoutSliderPSize"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        layoutSliderPSize->addWidget(label, 0, 0, 1, 1);

        hSliderPointSize = new QSlider(centralWidget);
        hSliderPointSize->setObjectName(QString::fromUtf8("hSliderPointSize"));
        hSliderPointSize->setMinimum(1);
        hSliderPointSize->setMaximum(5);
        hSliderPointSize->setOrientation(Qt::Horizontal);

        layoutSliderPSize->addWidget(hSliderPointSize, 0, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        layoutSliderPSize->addWidget(label_6, 0, 2, 1, 1);

        layoutSliderPSize->setColumnStretch(1, 1);

        layoutDisplay->addLayout(layoutSliderPSize);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutDisplay->addItem(verticalSpacer);

        btnResetCamera = new QPushButton(centralWidget);
        btnResetCamera->setObjectName(QString::fromUtf8("btnResetCamera"));
        btnResetCamera->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnResetCamera->sizePolicy().hasHeightForWidth());
        btnResetCamera->setSizePolicy(sizePolicy1);

        layoutDisplay->addWidget(btnResetCamera);

        layoutBtnShow = new QFormLayout();
        layoutBtnShow->setSpacing(6);
        layoutBtnShow->setObjectName(QString::fromUtf8("layoutBtnShow"));
        layoutBtnShow->setVerticalSpacing(7);
        btnShowSrc = new QPushButton(centralWidget);
        btnShowSrc->setObjectName(QString::fromUtf8("btnShowSrc"));

        layoutBtnShow->setWidget(0, QFormLayout::LabelRole, btnShowSrc);

        btnShowDst = new QPushButton(centralWidget);
        btnShowDst->setObjectName(QString::fromUtf8("btnShowDst"));

        layoutBtnShow->setWidget(0, QFormLayout::FieldRole, btnShowDst);


        layoutDisplay->addLayout(layoutBtnShow);

        layoutDisplay->setStretch(2, 1);

        horizontalLayout->addLayout(layoutDisplay);

        qvtkWidget = new QVTKWidget(centralWidget);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qvtkWidget->sizePolicy().hasHeightForWidth());
        qvtkWidget->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(qvtkWidget);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::East);
        tabWidget->setIconSize(QSize(20, 20));
        tabOutlierRemoval = new QWidget();
        tabOutlierRemoval->setObjectName(QString::fromUtf8("tabOutlierRemoval"));
        verticalLayout = new QVBoxLayout(tabOutlierRemoval);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(tabOutlierRemoval);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        sboxMeank = new QSpinBox(tabOutlierRemoval);
        sboxMeank->setObjectName(QString::fromUtf8("sboxMeank"));
        sboxMeank->setValue(50);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sboxMeank);

        label_8 = new QLabel(tabOutlierRemoval);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        sboxStdThresh = new QDoubleSpinBox(tabOutlierRemoval);
        sboxStdThresh->setObjectName(QString::fromUtf8("sboxStdThresh"));
        sboxStdThresh->setDecimals(1);
        sboxStdThresh->setMaximum(3.000000000000000);
        sboxStdThresh->setSingleStep(0.100000000000000);
        sboxStdThresh->setValue(1.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sboxStdThresh);


        verticalLayout->addLayout(formLayout_2);

        btnOutlierRemoval = new QPushButton(tabOutlierRemoval);
        btnOutlierRemoval->setObjectName(QString::fromUtf8("btnOutlierRemoval"));

        verticalLayout->addWidget(btnOutlierRemoval);

        tabWidget->addTab(tabOutlierRemoval, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        sboxAngularReslution = new QDoubleSpinBox(tab_2);
        sboxAngularReslution->setObjectName(QString::fromUtf8("sboxAngularReslution"));
        sboxAngularReslution->setDecimals(2);
        sboxAngularReslution->setMaximum(10.000000000000000);
        sboxAngularReslution->setSingleStep(0.050000000000000);
        sboxAngularReslution->setValue(1.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, sboxAngularReslution);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        sboxNoiseLevel = new QDoubleSpinBox(tab_2);
        sboxNoiseLevel->setObjectName(QString::fromUtf8("sboxNoiseLevel"));
        sboxNoiseLevel->setDecimals(1);
        sboxNoiseLevel->setSingleStep(0.100000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, sboxNoiseLevel);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        sboxMinRange = new QDoubleSpinBox(tab_2);
        sboxMinRange->setObjectName(QString::fromUtf8("sboxMinRange"));
        sboxMinRange->setDecimals(1);
        sboxMinRange->setSingleStep(0.100000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, sboxMinRange);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        sboxBorderSize = new QSpinBox(tab_2);
        sboxBorderSize->setObjectName(QString::fromUtf8("sboxBorderSize"));
        sboxBorderSize->setValue(1);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, sboxBorderSize);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_13);

        sboxSupportSize = new QDoubleSpinBox(tab_2);
        sboxSupportSize->setObjectName(QString::fromUtf8("sboxSupportSize"));
        sboxSupportSize->setDecimals(2);
        sboxSupportSize->setSingleStep(0.010000000000000);
        sboxSupportSize->setValue(0.200000000000000);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, sboxSupportSize);


        verticalLayout_3->addLayout(formLayout_3);

        btnNARF = new QPushButton(tab_2);
        btnNARF->setObjectName(QString::fromUtf8("btnNARF"));

        verticalLayout_3->addWidget(btnNARF);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 1);
        PCLToolClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PCLToolClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1162, 26));
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

        tabWidget->setCurrentIndex(1);


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
        btnResetCamera->setText(QApplication::translate("PCLToolClass", "\351\207\215\347\275\256\351\225\234\345\244\264", nullptr));
        btnShowSrc->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\345\216\237\345\247\213\347\202\271\344\272\221", nullptr));
        btnShowDst->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\345\244\204\347\220\206\345\220\216\347\202\271\344\272\221", nullptr));
        label_7->setText(QApplication::translate("PCLToolClass", "\344\270\264\350\277\221\347\202\271\346\225\260:", nullptr));
        label_8->setText(QApplication::translate("PCLToolClass", "\346\240\207\345\207\206\345\267\256\345\200\215\346\225\260:", nullptr));
        btnOutlierRemoval->setText(QApplication::translate("PCLToolClass", "\347\247\273\351\231\244\347\246\273\347\276\244\347\202\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabOutlierRemoval), QApplication::translate("PCLToolClass", "\346\273\244\346\263\242", nullptr));
        label_9->setText(QApplication::translate("PCLToolClass", "\350\247\222\345\272\246\345\210\206\350\276\250\347\216\207", nullptr));
        label_10->setText(QApplication::translate("PCLToolClass", "\346\267\261\345\272\246\350\267\235\347\246\273\346\237\245\350\257\242\345\215\212\345\276\204", nullptr));
        label_11->setText(QApplication::translate("PCLToolClass", "\347\233\262\345\214\272\345\215\212\345\276\204", nullptr));
        label_12->setText(QApplication::translate("PCLToolClass", "\350\276\271\347\225\214\345\244\247\345\260\217", nullptr));
        label_13->setText(QApplication::translate("PCLToolClass", "NARF\347\202\271\346\220\234\347\264\242\345\215\212\345\276\204", nullptr));
        btnNARF->setText(QApplication::translate("PCLToolClass", "\346\217\220\345\217\226NARF\345\205\263\351\224\256\347\202\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PCLToolClass", "\346\217\220\345\217\226\345\205\263\351\224\256\347\202\271", nullptr));
        menu->setTitle(QApplication::translate("PCLToolClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PCLToolClass: public Ui_PCLToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLTOOL_H

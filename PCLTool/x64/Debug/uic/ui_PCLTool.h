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
#include <QtWidgets/QToolBox>
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
    QLabel *label_14;
    QLabel *lblNumKeypoints;
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
    QToolBox *toolBox_2;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QSpinBox *sboxMeank;
    QLabel *label_8;
    QDoubleSpinBox *sboxStdThresh;
    QPushButton *btnOutlierRemoval;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QFormLayout *formLayout_6;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QDoubleSpinBox *sboxVoxelGridX;
    QDoubleSpinBox *sboxVoxelGridY;
    QDoubleSpinBox *sboxVoxelGridZ;
    QPushButton *btnVoxelGrid;
    QWidget *tabKeypoints;
    QVBoxLayout *verticalLayout_3;
    QToolBox *toolBox;
    QWidget *pageNARFPoints;
    QVBoxLayout *verticalLayout_4;
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
    QWidget *pageSIFTPoints;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_4;
    QLabel *label_15;
    QDoubleSpinBox *sboxMinScale;
    QLabel *label_16;
    QSpinBox *sboxOctaves;
    QLabel *label_17;
    QSpinBox *sboxOctaveScales;
    QLabel *label_18;
    QDoubleSpinBox *sboxMinContrast;
    QPushButton *btnSIFT;
    QWidget *pageHarrisPoints;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_5;
    QLabel *label_19;
    QLabel *label_20;
    QDoubleSpinBox *sboxRadius;
    QDoubleSpinBox *sboxRadiusSearch;
    QPushButton *btnHarris;
    QWidget *tab;
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

        label_14 = new QLabel(groupBoxValues);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_14);

        lblNumKeypoints = new QLabel(groupBoxValues);
        lblNumKeypoints->setObjectName(QString::fromUtf8("lblNumKeypoints"));
        lblNumKeypoints->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, lblNumKeypoints);


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
        toolBox_2 = new QToolBox(tabOutlierRemoval);
        toolBox_2->setObjectName(QString::fromUtf8("toolBox_2"));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        page_1->setGeometry(QRect(0, 0, 222, 511));
        verticalLayout_7 = new QVBoxLayout(page_1);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(5, 5, 5, 5);
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(page_1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        sboxMeank = new QSpinBox(page_1);
        sboxMeank->setObjectName(QString::fromUtf8("sboxMeank"));
        sboxMeank->setValue(50);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sboxMeank);

        label_8 = new QLabel(page_1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        sboxStdThresh = new QDoubleSpinBox(page_1);
        sboxStdThresh->setObjectName(QString::fromUtf8("sboxStdThresh"));
        sboxStdThresh->setDecimals(1);
        sboxStdThresh->setMaximum(3.000000000000000);
        sboxStdThresh->setSingleStep(0.100000000000000);
        sboxStdThresh->setValue(1.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sboxStdThresh);


        verticalLayout_7->addLayout(formLayout_2);

        btnOutlierRemoval = new QPushButton(page_1);
        btnOutlierRemoval->setObjectName(QString::fromUtf8("btnOutlierRemoval"));

        verticalLayout_7->addWidget(btnOutlierRemoval);

        toolBox_2->addItem(page_1, QString::fromUtf8("\347\247\273\351\231\244\347\246\273\347\276\244\347\202\271"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 222, 511));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(5, 5, 5, 5);
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(2, 2, 2, 2);
        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_21);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_23);

        sboxVoxelGridX = new QDoubleSpinBox(groupBox);
        sboxVoxelGridX->setObjectName(QString::fromUtf8("sboxVoxelGridX"));
        sboxVoxelGridX->setMaximum(100.000000000000000);
        sboxVoxelGridX->setSingleStep(0.010000000000000);
        sboxVoxelGridX->setValue(0.050000000000000);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, sboxVoxelGridX);

        sboxVoxelGridY = new QDoubleSpinBox(groupBox);
        sboxVoxelGridY->setObjectName(QString::fromUtf8("sboxVoxelGridY"));
        sboxVoxelGridY->setSingleStep(0.010000000000000);
        sboxVoxelGridY->setValue(0.050000000000000);

        formLayout_6->setWidget(2, QFormLayout::FieldRole, sboxVoxelGridY);

        sboxVoxelGridZ = new QDoubleSpinBox(groupBox);
        sboxVoxelGridZ->setObjectName(QString::fromUtf8("sboxVoxelGridZ"));
        sboxVoxelGridZ->setSingleStep(0.010000000000000);
        sboxVoxelGridZ->setValue(0.050000000000000);

        formLayout_6->setWidget(3, QFormLayout::FieldRole, sboxVoxelGridZ);


        verticalLayout_9->addLayout(formLayout_6);


        verticalLayout_8->addWidget(groupBox);

        btnVoxelGrid = new QPushButton(page_2);
        btnVoxelGrid->setObjectName(QString::fromUtf8("btnVoxelGrid"));

        verticalLayout_8->addWidget(btnVoxelGrid);

        toolBox_2->addItem(page_2, QString::fromUtf8("\344\275\223\347\264\240\344\270\213\351\207\207\346\240\267"));

        verticalLayout->addWidget(toolBox_2);

        tabWidget->addTab(tabOutlierRemoval, QString());
        tabKeypoints = new QWidget();
        tabKeypoints->setObjectName(QString::fromUtf8("tabKeypoints"));
        verticalLayout_3 = new QVBoxLayout(tabKeypoints);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        toolBox = new QToolBox(tabKeypoints);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Sunken);
        pageNARFPoints = new QWidget();
        pageNARFPoints->setObjectName(QString::fromUtf8("pageNARFPoints"));
        pageNARFPoints->setGeometry(QRect(0, 0, 209, 195));
        verticalLayout_4 = new QVBoxLayout(pageNARFPoints);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(pageNARFPoints);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        sboxAngularReslution = new QDoubleSpinBox(pageNARFPoints);
        sboxAngularReslution->setObjectName(QString::fromUtf8("sboxAngularReslution"));
        sboxAngularReslution->setDecimals(2);
        sboxAngularReslution->setMaximum(10.000000000000000);
        sboxAngularReslution->setSingleStep(0.050000000000000);
        sboxAngularReslution->setValue(1.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, sboxAngularReslution);

        label_10 = new QLabel(pageNARFPoints);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        sboxNoiseLevel = new QDoubleSpinBox(pageNARFPoints);
        sboxNoiseLevel->setObjectName(QString::fromUtf8("sboxNoiseLevel"));
        sboxNoiseLevel->setDecimals(1);
        sboxNoiseLevel->setSingleStep(0.100000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, sboxNoiseLevel);

        label_11 = new QLabel(pageNARFPoints);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        sboxMinRange = new QDoubleSpinBox(pageNARFPoints);
        sboxMinRange->setObjectName(QString::fromUtf8("sboxMinRange"));
        sboxMinRange->setDecimals(1);
        sboxMinRange->setSingleStep(0.100000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, sboxMinRange);

        label_12 = new QLabel(pageNARFPoints);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        sboxBorderSize = new QSpinBox(pageNARFPoints);
        sboxBorderSize->setObjectName(QString::fromUtf8("sboxBorderSize"));
        sboxBorderSize->setValue(1);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, sboxBorderSize);

        label_13 = new QLabel(pageNARFPoints);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_13);

        sboxSupportSize = new QDoubleSpinBox(pageNARFPoints);
        sboxSupportSize->setObjectName(QString::fromUtf8("sboxSupportSize"));
        sboxSupportSize->setDecimals(2);
        sboxSupportSize->setSingleStep(0.010000000000000);
        sboxSupportSize->setValue(0.200000000000000);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, sboxSupportSize);


        verticalLayout_4->addLayout(formLayout_3);

        btnNARF = new QPushButton(pageNARFPoints);
        btnNARF->setObjectName(QString::fromUtf8("btnNARF"));

        verticalLayout_4->addWidget(btnNARF);

        toolBox->addItem(pageNARFPoints, QString::fromUtf8("NARF\345\205\263\351\224\256\347\202\271"));
        pageSIFTPoints = new QWidget();
        pageSIFTPoints->setObjectName(QString::fromUtf8("pageSIFTPoints"));
        pageSIFTPoints->setGeometry(QRect(0, 0, 193, 164));
        verticalLayout_5 = new QVBoxLayout(pageSIFTPoints);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_15 = new QLabel(pageSIFTPoints);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_15);

        sboxMinScale = new QDoubleSpinBox(pageSIFTPoints);
        sboxMinScale->setObjectName(QString::fromUtf8("sboxMinScale"));
        sboxMinScale->setMaximum(1.000000000000000);
        sboxMinScale->setSingleStep(0.010000000000000);
        sboxMinScale->setValue(0.010000000000000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, sboxMinScale);

        label_16 = new QLabel(pageSIFTPoints);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_16);

        sboxOctaves = new QSpinBox(pageSIFTPoints);
        sboxOctaves->setObjectName(QString::fromUtf8("sboxOctaves"));
        sboxOctaves->setMaximum(20);
        sboxOctaves->setValue(6);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, sboxOctaves);

        label_17 = new QLabel(pageSIFTPoints);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_17);

        sboxOctaveScales = new QSpinBox(pageSIFTPoints);
        sboxOctaveScales->setObjectName(QString::fromUtf8("sboxOctaveScales"));
        sboxOctaveScales->setMaximum(20);
        sboxOctaveScales->setValue(4);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, sboxOctaveScales);

        label_18 = new QLabel(pageSIFTPoints);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_18);

        sboxMinContrast = new QDoubleSpinBox(pageSIFTPoints);
        sboxMinContrast->setObjectName(QString::fromUtf8("sboxMinContrast"));
        sboxMinContrast->setMaximum(10.000000000000000);
        sboxMinContrast->setSingleStep(0.010000000000000);
        sboxMinContrast->setValue(0.010000000000000);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, sboxMinContrast);


        verticalLayout_5->addLayout(formLayout_4);

        btnSIFT = new QPushButton(pageSIFTPoints);
        btnSIFT->setObjectName(QString::fromUtf8("btnSIFT"));

        verticalLayout_5->addWidget(btnSIFT);

        toolBox->addItem(pageSIFTPoints, QString::fromUtf8("SIFT\345\205\263\351\224\256\347\202\271"));
        pageHarrisPoints = new QWidget();
        pageHarrisPoints->setObjectName(QString::fromUtf8("pageHarrisPoints"));
        pageHarrisPoints->setGeometry(QRect(0, 0, 222, 502));
        verticalLayout_6 = new QVBoxLayout(pageHarrisPoints);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_19 = new QLabel(pageHarrisPoints);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_19);

        label_20 = new QLabel(pageHarrisPoints);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_20);

        sboxRadius = new QDoubleSpinBox(pageHarrisPoints);
        sboxRadius->setObjectName(QString::fromUtf8("sboxRadius"));
        sboxRadius->setSingleStep(0.010000000000000);
        sboxRadius->setValue(0.100000000000000);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, sboxRadius);

        sboxRadiusSearch = new QDoubleSpinBox(pageHarrisPoints);
        sboxRadiusSearch->setObjectName(QString::fromUtf8("sboxRadiusSearch"));
        sboxRadiusSearch->setSingleStep(0.010000000000000);
        sboxRadiusSearch->setValue(0.100000000000000);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, sboxRadiusSearch);


        verticalLayout_6->addLayout(formLayout_5);

        btnHarris = new QPushButton(pageHarrisPoints);
        btnHarris->setObjectName(QString::fromUtf8("btnHarris"));

        verticalLayout_6->addWidget(btnHarris);

        toolBox->addItem(pageHarrisPoints, QString::fromUtf8("Harris\345\205\263\351\224\256\347\202\271"));

        verticalLayout_3->addWidget(toolBox);

        tabWidget->addTab(tabKeypoints, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 2);
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

        tabWidget->setCurrentIndex(0);
        toolBox_2->setCurrentIndex(1);
        toolBox->setCurrentIndex(2);
        toolBox->layout()->setSpacing(0);


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
        label_14->setText(QApplication::translate("PCLToolClass", "\347\211\271\345\276\201\347\202\271\344\270\252\346\225\260:", nullptr));
        lblNumKeypoints->setText(QString());
        label->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\347\202\271\345\244\247\345\260\217", nullptr));
        label_6->setText(QApplication::translate("PCLToolClass", "1", nullptr));
        btnResetCamera->setText(QApplication::translate("PCLToolClass", "\351\207\215\347\275\256\351\225\234\345\244\264", nullptr));
        btnShowSrc->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\345\216\237\345\247\213\347\202\271\344\272\221", nullptr));
        btnShowDst->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\345\244\204\347\220\206\345\220\216\347\202\271\344\272\221", nullptr));
        label_7->setText(QApplication::translate("PCLToolClass", "\344\270\264\350\277\221\347\202\271\346\225\260:", nullptr));
        label_8->setText(QApplication::translate("PCLToolClass", "\346\240\207\345\207\206\345\267\256\345\200\215\346\225\260:", nullptr));
        btnOutlierRemoval->setText(QApplication::translate("PCLToolClass", "\347\247\273\351\231\244\347\246\273\347\276\244\347\202\271", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_1), QApplication::translate("PCLToolClass", "\347\247\273\351\231\244\347\246\273\347\276\244\347\202\271", nullptr));
        groupBox->setTitle(QApplication::translate("PCLToolClass", "\344\275\223\347\264\240\345\260\272\345\257\270", nullptr));
        label_21->setText(QApplication::translate("PCLToolClass", "  X  ", nullptr));
        label_22->setText(QApplication::translate("PCLToolClass", "  Y", nullptr));
        label_23->setText(QApplication::translate("PCLToolClass", "  Z", nullptr));
        btnVoxelGrid->setText(QApplication::translate("PCLToolClass", "\344\270\213\351\207\207\346\240\267", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_2), QApplication::translate("PCLToolClass", "\344\275\223\347\264\240\344\270\213\351\207\207\346\240\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabOutlierRemoval), QApplication::translate("PCLToolClass", "\346\273\244\346\263\242", nullptr));
        label_9->setText(QApplication::translate("PCLToolClass", "\350\247\222\345\272\246\345\210\206\350\276\250\347\216\207", nullptr));
        label_10->setText(QApplication::translate("PCLToolClass", "\346\267\261\345\272\246\350\267\235\347\246\273\346\237\245\350\257\242\345\215\212\345\276\204", nullptr));
        label_11->setText(QApplication::translate("PCLToolClass", "\347\233\262\345\214\272\345\215\212\345\276\204", nullptr));
        label_12->setText(QApplication::translate("PCLToolClass", "\350\276\271\347\225\214\345\244\247\345\260\217", nullptr));
        label_13->setText(QApplication::translate("PCLToolClass", "NARF\347\202\271\346\220\234\347\264\242\345\215\212\345\276\204", nullptr));
        btnNARF->setText(QApplication::translate("PCLToolClass", "\346\217\220\345\217\226NARF\345\205\263\351\224\256\347\202\271", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageNARFPoints), QApplication::translate("PCLToolClass", "NARF\345\205\263\351\224\256\347\202\271", nullptr));
        label_15->setText(QApplication::translate("PCLToolClass", "min_scale", nullptr));
        label_16->setText(QApplication::translate("PCLToolClass", "octaves", nullptr));
        label_17->setText(QApplication::translate("PCLToolClass", "octave scales", nullptr));
        label_18->setText(QApplication::translate("PCLToolClass", "\351\230\210\345\200\274", nullptr));
        btnSIFT->setText(QApplication::translate("PCLToolClass", "\346\217\220\345\217\226SIFT\345\205\263\351\224\256\347\202\271", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageSIFTPoints), QApplication::translate("PCLToolClass", "SIFT\345\205\263\351\224\256\347\202\271", nullptr));
        label_19->setText(QApplication::translate("PCLToolClass", "\346\263\225\345\220\221\351\207\217\344\274\260\350\256\241\345\215\212\345\276\204", nullptr));
        label_20->setText(QApplication::translate("PCLToolClass", "\350\277\221\351\202\273\346\220\234\347\264\242\345\215\212\345\276\204", nullptr));
        btnHarris->setText(QApplication::translate("PCLToolClass", "\346\217\220\345\217\226Harris\345\205\263\351\224\256\347\202\271", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageHarrisPoints), QApplication::translate("PCLToolClass", "Harris\345\205\263\351\224\256\347\202\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabKeypoints), QApplication::translate("PCLToolClass", "\346\217\220\345\217\226\345\205\263\351\224\256\347\202\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PCLToolClass", "\351\241\265", nullptr));
        menu->setTitle(QApplication::translate("PCLToolClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PCLToolClass: public Ui_PCLToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLTOOL_H

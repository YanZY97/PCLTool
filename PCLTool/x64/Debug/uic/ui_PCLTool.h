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
#include <QtWidgets/QFrame>
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
    QAction *actionOpenPLY_OBJ_file;
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
    QSlider *hSliderPointSize;
    QLabel *label;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLabel *lblTgtSizeX;
    QLabel *lblNumPointsCloud1;
    QLabel *lblResSizeX;
    QLabel *lblTgtSizeY;
    QLabel *label_46;
    QLabel *label_27;
    QLabel *lblNumPointsCloud2Grid2;
    QLabel *label_50;
    QLabel *lblNumPointsCloud2;
    QLabel *lblResSizeY;
    QLabel *label_52;
    QLabel *lblTgtSizeZ;
    QLabel *label_43;
    QLabel *lblResSizeZ;
    QLabel *label_44;
    QLabel *label_40;
    QLabel *lblNumPointsCloud1Grid1;
    QLabel *lblNumPointsCloud2Grid1;
    QLabel *label_26;
    QLabel *lblNumPointsCloud1Grid2;
    QLabel *label_34;
    QLabel *label_39;
    QLabel *label_41;
    QLabel *lblNumErr1;
    QLabel *lblNumErrGrid1;
    QLabel *lblNumErrGrid2;
    QLabel *lblErrX;
    QLabel *lblErrY;
    QLabel *lblErrZ;
    QLabel *label_48;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_7;
    QLabel *label_38;
    QLabel *lblRegError;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QFormLayout *layoutBtnShow;
    QPushButton *btnShowSrc;
    QPushButton *btnShowDst;
    QPushButton *btnRmPointClouds;
    QPushButton *btnResetCamera;
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
    QWidget *tabRegistration;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_12;
    QFormLayout *formLayout_8;
    QLabel *label_28;
    QDoubleSpinBox *sboxRegLeafSize;
    QPushButton *btnChooseCloud1;
    QLabel *lblCloud1Name;
    QPushButton *btnChooseCloud2;
    QLabel *lblCloud2Name;
    QFrame *line;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_14;
    QFormLayout *formLayout_9;
    QLabel *label_32;
    QDoubleSpinBox *sboxNDTLeafSize;
    QLabel *label_30;
    QSpinBox *sboxIterations;
    QLabel *label_31;
    QDoubleSpinBox *sboxEpsilon;
    QLabel *label_25;
    QDoubleSpinBox *sboxNDTStepSize;
    QLabel *label_29;
    QDoubleSpinBox *sboxNDTResolution;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_15;
    QFormLayout *formLayout_10;
    QLabel *label_35;
    QDoubleSpinBox *sboxEpsilonICP;
    QLabel *label_36;
    QSpinBox *xboxIterationsICP;
    QLabel *label_37;
    QDoubleSpinBox *sboxCorreDistance;
    QLabel *label_33;
    QDoubleSpinBox *sboxICPLeafSize;
    QFormLayout *formLayout_11;
    QLabel *label_24;
    QLabel *lblRegTime;
    QPushButton *btnRegistration;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PCLToolClass)
    {
        if (PCLToolClass->objectName().isEmpty())
            PCLToolClass->setObjectName(QString::fromUtf8("PCLToolClass"));
        PCLToolClass->resize(1162, 686);
        actionOpen = new QAction(PCLToolClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(PCLToolClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOpenPLY_OBJ_file = new QAction(PCLToolClass);
        actionOpenPLY_OBJ_file->setObjectName(QString::fromUtf8("actionOpenPLY_OBJ_file"));
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
        hSliderPointSize = new QSlider(centralWidget);
        hSliderPointSize->setObjectName(QString::fromUtf8("hSliderPointSize"));
        hSliderPointSize->setMinimum(1);
        hSliderPointSize->setMaximum(5);
        hSliderPointSize->setOrientation(Qt::Horizontal);

        layoutSliderPSize->addWidget(hSliderPointSize, 0, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        layoutSliderPSize->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        layoutSliderPSize->addWidget(label_6, 0, 2, 1, 1);


        layoutDisplay->addLayout(layoutSliderPSize);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblTgtSizeX = new QLabel(centralWidget);
        lblTgtSizeX->setObjectName(QString::fromUtf8("lblTgtSizeX"));

        gridLayout->addWidget(lblTgtSizeX, 5, 1, 1, 1);

        lblNumPointsCloud1 = new QLabel(centralWidget);
        lblNumPointsCloud1->setObjectName(QString::fromUtf8("lblNumPointsCloud1"));

        gridLayout->addWidget(lblNumPointsCloud1, 1, 1, 1, 1);

        lblResSizeX = new QLabel(centralWidget);
        lblResSizeX->setObjectName(QString::fromUtf8("lblResSizeX"));

        gridLayout->addWidget(lblResSizeX, 5, 2, 1, 1);

        lblTgtSizeY = new QLabel(centralWidget);
        lblTgtSizeY->setObjectName(QString::fromUtf8("lblTgtSizeY"));

        gridLayout->addWidget(lblTgtSizeY, 6, 1, 1, 1);

        label_46 = new QLabel(centralWidget);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout->addWidget(label_46, 5, 0, 1, 1);

        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout->addWidget(label_27, 0, 2, 1, 1);

        lblNumPointsCloud2Grid2 = new QLabel(centralWidget);
        lblNumPointsCloud2Grid2->setObjectName(QString::fromUtf8("lblNumPointsCloud2Grid2"));

        gridLayout->addWidget(lblNumPointsCloud2Grid2, 3, 2, 1, 1);

        label_50 = new QLabel(centralWidget);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout->addWidget(label_50, 6, 0, 1, 1);

        lblNumPointsCloud2 = new QLabel(centralWidget);
        lblNumPointsCloud2->setObjectName(QString::fromUtf8("lblNumPointsCloud2"));

        gridLayout->addWidget(lblNumPointsCloud2, 1, 2, 1, 1);

        lblResSizeY = new QLabel(centralWidget);
        lblResSizeY->setObjectName(QString::fromUtf8("lblResSizeY"));

        gridLayout->addWidget(lblResSizeY, 6, 2, 1, 1);

        label_52 = new QLabel(centralWidget);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout->addWidget(label_52, 7, 0, 1, 1);

        lblTgtSizeZ = new QLabel(centralWidget);
        lblTgtSizeZ->setObjectName(QString::fromUtf8("lblTgtSizeZ"));

        gridLayout->addWidget(lblTgtSizeZ, 7, 1, 1, 1);

        label_43 = new QLabel(centralWidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout->addWidget(label_43, 4, 1, 1, 1);

        lblResSizeZ = new QLabel(centralWidget);
        lblResSizeZ->setObjectName(QString::fromUtf8("lblResSizeZ"));

        gridLayout->addWidget(lblResSizeZ, 7, 2, 1, 1);

        label_44 = new QLabel(centralWidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout->addWidget(label_44, 4, 2, 1, 1);

        label_40 = new QLabel(centralWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout->addWidget(label_40, 3, 0, 1, 1);

        lblNumPointsCloud1Grid1 = new QLabel(centralWidget);
        lblNumPointsCloud1Grid1->setObjectName(QString::fromUtf8("lblNumPointsCloud1Grid1"));

        gridLayout->addWidget(lblNumPointsCloud1Grid1, 2, 1, 1, 1);

        lblNumPointsCloud2Grid1 = new QLabel(centralWidget);
        lblNumPointsCloud2Grid1->setObjectName(QString::fromUtf8("lblNumPointsCloud2Grid1"));

        gridLayout->addWidget(lblNumPointsCloud2Grid1, 2, 2, 1, 1);

        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout->addWidget(label_26, 0, 1, 1, 1);

        lblNumPointsCloud1Grid2 = new QLabel(centralWidget);
        lblNumPointsCloud1Grid2->setObjectName(QString::fromUtf8("lblNumPointsCloud1Grid2"));

        gridLayout->addWidget(lblNumPointsCloud1Grid2, 3, 1, 1, 1);

        label_34 = new QLabel(centralWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout->addWidget(label_34, 1, 0, 1, 1);

        label_39 = new QLabel(centralWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout->addWidget(label_39, 2, 0, 1, 1);

        label_41 = new QLabel(centralWidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout->addWidget(label_41, 0, 3, 1, 1);

        lblNumErr1 = new QLabel(centralWidget);
        lblNumErr1->setObjectName(QString::fromUtf8("lblNumErr1"));

        gridLayout->addWidget(lblNumErr1, 1, 3, 1, 1);

        lblNumErrGrid1 = new QLabel(centralWidget);
        lblNumErrGrid1->setObjectName(QString::fromUtf8("lblNumErrGrid1"));

        gridLayout->addWidget(lblNumErrGrid1, 2, 3, 1, 1);

        lblNumErrGrid2 = new QLabel(centralWidget);
        lblNumErrGrid2->setObjectName(QString::fromUtf8("lblNumErrGrid2"));

        gridLayout->addWidget(lblNumErrGrid2, 3, 3, 1, 1);

        lblErrX = new QLabel(centralWidget);
        lblErrX->setObjectName(QString::fromUtf8("lblErrX"));

        gridLayout->addWidget(lblErrX, 5, 3, 1, 1);

        lblErrY = new QLabel(centralWidget);
        lblErrY->setObjectName(QString::fromUtf8("lblErrY"));

        gridLayout->addWidget(lblErrY, 6, 3, 1, 1);

        lblErrZ = new QLabel(centralWidget);
        lblErrZ->setObjectName(QString::fromUtf8("lblErrZ"));

        gridLayout->addWidget(lblErrZ, 7, 3, 1, 1);

        label_48 = new QLabel(centralWidget);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout->addWidget(label_48, 4, 3, 1, 1);


        layoutDisplay->addLayout(gridLayout);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_7 = new QFormLayout(groupBox_4);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_38 = new QLabel(groupBox_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_38);

        lblRegError = new QLabel(groupBox_4);
        lblRegError->setObjectName(QString::fromUtf8("lblRegError"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, lblRegError);


        layoutDisplay->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutDisplay->addItem(verticalSpacer);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        layoutDisplay->addWidget(line_2);

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

        btnRmPointClouds = new QPushButton(centralWidget);
        btnRmPointClouds->setObjectName(QString::fromUtf8("btnRmPointClouds"));

        layoutBtnShow->setWidget(1, QFormLayout::LabelRole, btnRmPointClouds);

        btnResetCamera = new QPushButton(centralWidget);
        btnResetCamera->setObjectName(QString::fromUtf8("btnResetCamera"));
        btnResetCamera->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnResetCamera->sizePolicy().hasHeightForWidth());
        btnResetCamera->setSizePolicy(sizePolicy1);

        layoutBtnShow->setWidget(1, QFormLayout::FieldRole, btnResetCamera);


        layoutDisplay->addLayout(layoutBtnShow);

        layoutDisplay->setStretch(4, 1);

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
        page_1->setGeometry(QRect(0, 0, 224, 523));
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
        page_2->setGeometry(QRect(0, 0, 151, 161));
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
        sboxVoxelGridX->setDecimals(3);
        sboxVoxelGridX->setMaximum(100.000000000000000);
        sboxVoxelGridX->setSingleStep(0.010000000000000);
        sboxVoxelGridX->setValue(0.050000000000000);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, sboxVoxelGridX);

        sboxVoxelGridY = new QDoubleSpinBox(groupBox);
        sboxVoxelGridY->setObjectName(QString::fromUtf8("sboxVoxelGridY"));
        sboxVoxelGridY->setDecimals(3);
        sboxVoxelGridY->setSingleStep(0.010000000000000);
        sboxVoxelGridY->setValue(0.050000000000000);

        formLayout_6->setWidget(2, QFormLayout::FieldRole, sboxVoxelGridY);

        sboxVoxelGridZ = new QDoubleSpinBox(groupBox);
        sboxVoxelGridZ->setObjectName(QString::fromUtf8("sboxVoxelGridZ"));
        sboxVoxelGridZ->setDecimals(3);
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
        pageHarrisPoints->setGeometry(QRect(0, 0, 224, 514));
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
        tabRegistration = new QWidget();
        tabRegistration->setObjectName(QString::fromUtf8("tabRegistration"));
        verticalLayout_10 = new QVBoxLayout(tabRegistration);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        formLayout_8 = new QFormLayout();
        formLayout_8->setSpacing(6);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        label_28 = new QLabel(tabRegistration);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_28);

        sboxRegLeafSize = new QDoubleSpinBox(tabRegistration);
        sboxRegLeafSize->setObjectName(QString::fromUtf8("sboxRegLeafSize"));
        sboxRegLeafSize->setDecimals(3);
        sboxRegLeafSize->setSingleStep(0.001000000000000);
        sboxRegLeafSize->setValue(0.001000000000000);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, sboxRegLeafSize);


        verticalLayout_12->addLayout(formLayout_8);

        btnChooseCloud1 = new QPushButton(tabRegistration);
        btnChooseCloud1->setObjectName(QString::fromUtf8("btnChooseCloud1"));

        verticalLayout_12->addWidget(btnChooseCloud1);

        lblCloud1Name = new QLabel(tabRegistration);
        lblCloud1Name->setObjectName(QString::fromUtf8("lblCloud1Name"));

        verticalLayout_12->addWidget(lblCloud1Name);

        btnChooseCloud2 = new QPushButton(tabRegistration);
        btnChooseCloud2->setObjectName(QString::fromUtf8("btnChooseCloud2"));

        verticalLayout_12->addWidget(btnChooseCloud2);

        lblCloud2Name = new QLabel(tabRegistration);
        lblCloud2Name->setObjectName(QString::fromUtf8("lblCloud2Name"));

        verticalLayout_12->addWidget(lblCloud2Name);


        verticalLayout_10->addLayout(verticalLayout_12);

        line = new QFrame(tabRegistration);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        groupBox_2 = new QGroupBox(tabRegistration);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_14 = new QVBoxLayout(groupBox_2);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(2, 2, 2, 2);
        formLayout_9 = new QFormLayout();
        formLayout_9->setSpacing(6);
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        formLayout_9->setWidget(1, QFormLayout::LabelRole, label_32);

        sboxNDTLeafSize = new QDoubleSpinBox(groupBox_2);
        sboxNDTLeafSize->setObjectName(QString::fromUtf8("sboxNDTLeafSize"));
        sboxNDTLeafSize->setDecimals(3);
        sboxNDTLeafSize->setSingleStep(0.001000000000000);
        sboxNDTLeafSize->setValue(0.040000000000000);

        formLayout_9->setWidget(1, QFormLayout::FieldRole, sboxNDTLeafSize);

        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        formLayout_9->setWidget(2, QFormLayout::LabelRole, label_30);

        sboxIterations = new QSpinBox(groupBox_2);
        sboxIterations->setObjectName(QString::fromUtf8("sboxIterations"));
        sboxIterations->setMaximum(1000);
        sboxIterations->setValue(100);
        sboxIterations->setDisplayIntegerBase(10);

        formLayout_9->setWidget(2, QFormLayout::FieldRole, sboxIterations);

        label_31 = new QLabel(groupBox_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        formLayout_9->setWidget(3, QFormLayout::LabelRole, label_31);

        sboxEpsilon = new QDoubleSpinBox(groupBox_2);
        sboxEpsilon->setObjectName(QString::fromUtf8("sboxEpsilon"));
        sboxEpsilon->setDecimals(6);
        sboxEpsilon->setValue(0.000001000000000);

        formLayout_9->setWidget(3, QFormLayout::FieldRole, sboxEpsilon);

        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_9->setWidget(4, QFormLayout::LabelRole, label_25);

        sboxNDTStepSize = new QDoubleSpinBox(groupBox_2);
        sboxNDTStepSize->setObjectName(QString::fromUtf8("sboxNDTStepSize"));
        sboxNDTStepSize->setDecimals(3);
        sboxNDTStepSize->setSingleStep(0.001000000000000);
        sboxNDTStepSize->setValue(0.500000000000000);

        formLayout_9->setWidget(4, QFormLayout::FieldRole, sboxNDTStepSize);

        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout_9->setWidget(5, QFormLayout::LabelRole, label_29);

        sboxNDTResolution = new QDoubleSpinBox(groupBox_2);
        sboxNDTResolution->setObjectName(QString::fromUtf8("sboxNDTResolution"));
        sboxNDTResolution->setDecimals(3);
        sboxNDTResolution->setMaximum(1000.000000000000000);
        sboxNDTResolution->setSingleStep(0.010000000000000);
        sboxNDTResolution->setValue(100.000000000000000);

        formLayout_9->setWidget(5, QFormLayout::FieldRole, sboxNDTResolution);


        verticalLayout_14->addLayout(formLayout_9);


        verticalLayout_13->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tabRegistration);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_15 = new QVBoxLayout(groupBox_3);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(2, 2, 2, 2);
        formLayout_10 = new QFormLayout();
        formLayout_10->setSpacing(6);
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        formLayout_10->setWidget(2, QFormLayout::LabelRole, label_35);

        sboxEpsilonICP = new QDoubleSpinBox(groupBox_3);
        sboxEpsilonICP->setObjectName(QString::fromUtf8("sboxEpsilonICP"));
        sboxEpsilonICP->setDecimals(6);
        sboxEpsilonICP->setMaximum(10.000000000000000);
        sboxEpsilonICP->setSingleStep(0.001000000000000);
        sboxEpsilonICP->setValue(0.000001000000000);

        formLayout_10->setWidget(2, QFormLayout::FieldRole, sboxEpsilonICP);

        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        formLayout_10->setWidget(3, QFormLayout::LabelRole, label_36);

        xboxIterationsICP = new QSpinBox(groupBox_3);
        xboxIterationsICP->setObjectName(QString::fromUtf8("xboxIterationsICP"));
        xboxIterationsICP->setMaximum(500);
        xboxIterationsICP->setValue(100);

        formLayout_10->setWidget(3, QFormLayout::FieldRole, xboxIterationsICP);

        label_37 = new QLabel(groupBox_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_37);

        sboxCorreDistance = new QDoubleSpinBox(groupBox_3);
        sboxCorreDistance->setObjectName(QString::fromUtf8("sboxCorreDistance"));
        sboxCorreDistance->setMaximum(200.000000000000000);
        sboxCorreDistance->setValue(0.100000000000000);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, sboxCorreDistance);

        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_33);

        sboxICPLeafSize = new QDoubleSpinBox(groupBox_3);
        sboxICPLeafSize->setObjectName(QString::fromUtf8("sboxICPLeafSize"));
        sboxICPLeafSize->setDecimals(3);
        sboxICPLeafSize->setSingleStep(0.001000000000000);
        sboxICPLeafSize->setValue(0.005000000000000);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, sboxICPLeafSize);


        verticalLayout_15->addLayout(formLayout_10);


        verticalLayout_13->addWidget(groupBox_3);


        verticalLayout_10->addLayout(verticalLayout_13);

        formLayout_11 = new QFormLayout();
        formLayout_11->setSpacing(6);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        label_24 = new QLabel(tabRegistration);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_24);

        lblRegTime = new QLabel(tabRegistration);
        lblRegTime->setObjectName(QString::fromUtf8("lblRegTime"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, lblRegTime);


        verticalLayout_10->addLayout(formLayout_11);

        btnRegistration = new QPushButton(tabRegistration);
        btnRegistration->setObjectName(QString::fromUtf8("btnRegistration"));

        verticalLayout_10->addWidget(btnRegistration);

        verticalLayout_10->setStretch(2, 1);
        tabWidget->addTab(tabRegistration, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalLayout->setStretch(1, 1);
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
        menu->addAction(actionOpenPLY_OBJ_file);
        menu->addSeparator();
        menu->addAction(actionExit);

        retranslateUi(PCLToolClass);
        QObject::connect(actionExit, SIGNAL(triggered()), PCLToolClass, SLOT(close()));
        QObject::connect(hSliderPointSize, SIGNAL(valueChanged(int)), label_6, SLOT(setNum(int)));

        tabWidget->setCurrentIndex(2);
        toolBox_2->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);
        toolBox->layout()->setSpacing(0);


        QMetaObject::connectSlotsByName(PCLToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *PCLToolClass)
    {
        PCLToolClass->setWindowTitle(QApplication::translate("PCLToolClass", "PCLTool", nullptr));
        actionOpen->setText(QApplication::translate("PCLToolClass", "Open", nullptr));
        actionExit->setText(QApplication::translate("PCLToolClass", "Exit", nullptr));
        actionOpenPLY_OBJ_file->setText(QApplication::translate("PCLToolClass", "Open PLY/OBJ file", nullptr));
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
        lblTgtSizeX->setText(QString());
        lblNumPointsCloud1->setText(QString());
        lblResSizeX->setText(QString());
        lblTgtSizeY->setText(QString());
        label_46->setText(QApplication::translate("PCLToolClass", "X\346\226\271\345\220\221\345\260\272\345\257\270", nullptr));
        label_27->setText(QApplication::translate("PCLToolClass", "\345\276\205\345\214\271\351\205\215\347\202\271\344\272\221", nullptr));
        lblNumPointsCloud2Grid2->setText(QString());
        label_50->setText(QApplication::translate("PCLToolClass", "Y\346\226\271\345\220\221\345\260\272\345\257\270", nullptr));
        lblNumPointsCloud2->setText(QString());
        lblResSizeY->setText(QString());
        label_52->setText(QApplication::translate("PCLToolClass", "Z\346\226\271\345\220\221\345\260\272\345\257\270", nullptr));
        lblTgtSizeZ->setText(QString());
        label_43->setText(QApplication::translate("PCLToolClass", "\347\233\256\346\240\207\347\202\271\344\272\221", nullptr));
        lblResSizeZ->setText(QString());
        label_44->setText(QApplication::translate("PCLToolClass", "\345\214\271\351\205\215\345\220\216\347\202\271\344\272\221", nullptr));
        label_40->setText(QApplication::translate("PCLToolClass", "\344\270\213\351\207\207\346\240\2672", nullptr));
        lblNumPointsCloud1Grid1->setText(QString());
        lblNumPointsCloud2Grid1->setText(QString());
        label_26->setText(QApplication::translate("PCLToolClass", "\347\233\256\346\240\207\347\202\271\344\272\221", nullptr));
        lblNumPointsCloud1Grid2->setText(QString());
        label_34->setText(QApplication::translate("PCLToolClass", "\345\216\237\345\247\213\346\225\260\351\207\217", nullptr));
        label_39->setText(QApplication::translate("PCLToolClass", "\344\270\213\351\207\207\346\240\2671", nullptr));
        label_41->setText(QApplication::translate("PCLToolClass", "\350\257\257\345\267\256", nullptr));
        lblNumErr1->setText(QString());
        lblNumErrGrid1->setText(QString());
        lblNumErrGrid2->setText(QString());
        lblErrX->setText(QString());
        lblErrY->setText(QString());
        lblErrZ->setText(QString());
        label_48->setText(QApplication::translate("PCLToolClass", "\350\257\257\345\267\256  ", nullptr));
        groupBox_4->setTitle(QApplication::translate("PCLToolClass", "\351\205\215\345\207\206\347\273\223\346\236\234", nullptr));
        label_38->setText(QApplication::translate("PCLToolClass", "\346\200\273\350\257\257\345\267\256(mm)", nullptr));
        lblRegError->setText(QString());
        btnShowSrc->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\345\216\237\345\247\213\347\202\271\344\272\221", nullptr));
        btnShowDst->setText(QApplication::translate("PCLToolClass", "\346\230\276\347\244\272\345\244\204\347\220\206\345\220\216\347\202\271\344\272\221", nullptr));
        btnRmPointClouds->setText(QApplication::translate("PCLToolClass", "\346\270\205\351\231\244\346\230\276\347\244\272", nullptr));
        btnResetCamera->setText(QApplication::translate("PCLToolClass", "\351\207\215\347\275\256\351\225\234\345\244\264", nullptr));
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
        label_28->setText(QApplication::translate("PCLToolClass", "\344\270\213\351\207\207\346\240\267\344\275\223\347\264\240\345\244\247\345\260\217", nullptr));
        btnChooseCloud1->setText(QApplication::translate("PCLToolClass", "\351\200\211\346\213\251\347\233\256\346\240\207\347\202\271\344\272\221", nullptr));
        lblCloud1Name->setText(QApplication::translate("PCLToolClass", "\350\257\267\351\200\211\346\213\251\345\210\235\345\247\213\347\202\271\344\272\221", nullptr));
        btnChooseCloud2->setText(QApplication::translate("PCLToolClass", "\351\200\211\346\213\251\350\276\223\345\205\245\347\202\271\344\272\221", nullptr));
        lblCloud2Name->setText(QApplication::translate("PCLToolClass", "\350\257\267\351\200\211\346\213\251\345\276\205\345\214\271\351\205\215\347\202\271\344\272\221", nullptr));
        groupBox_2->setTitle(QApplication::translate("PCLToolClass", "ndt\347\262\227\351\205\215\345\207\206", nullptr));
        label_32->setText(QApplication::translate("PCLToolClass", "leaf_size", nullptr));
        label_30->setText(QApplication::translate("PCLToolClass", "\350\277\255\344\273\243\346\254\241\346\225\260", nullptr));
        label_31->setText(QApplication::translate("PCLToolClass", "\347\262\276\345\272\246", nullptr));
        label_25->setText(QApplication::translate("PCLToolClass", "ndt\346\255\245\351\225\277", nullptr));
        label_29->setText(QApplication::translate("PCLToolClass", "ndt\345\210\206\350\276\250\347\216\207", nullptr));
        groupBox_3->setTitle(QApplication::translate("PCLToolClass", "icp\347\262\276\351\205\215\345\207\206", nullptr));
        label_35->setText(QApplication::translate("PCLToolClass", "\345\217\230\346\215\242\347\237\251\351\230\265\351\230\210\345\200\274", nullptr));
        label_36->setText(QApplication::translate("PCLToolClass", "\350\277\255\344\273\243\346\254\241\346\225\260", nullptr));
        label_37->setText(QApplication::translate("PCLToolClass", "\351\205\215\345\207\206\350\267\235\347\246\273", nullptr));
        label_33->setText(QApplication::translate("PCLToolClass", "leaf_size2", nullptr));
        label_24->setText(QApplication::translate("PCLToolClass", "\351\205\215\345\207\206\347\224\250\346\227\266\357\274\232", nullptr));
        lblRegTime->setText(QString());
        btnRegistration->setText(QApplication::translate("PCLToolClass", "\351\205\215\345\207\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRegistration), QApplication::translate("PCLToolClass", "\344\270\244\347\202\271\344\272\221\351\205\215\345\207\206", nullptr));
        menu->setTitle(QApplication::translate("PCLToolClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PCLToolClass: public Ui_PCLToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLTOOL_H

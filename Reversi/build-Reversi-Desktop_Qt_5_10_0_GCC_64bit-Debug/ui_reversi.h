/********************************************************************************
** Form generated from reading UI file 'reversi.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVERSI_H
#define UI_REVERSI_H

#include <Cell.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reversi
{
public:
    QAction *actionnovo;
    QAction *actionsair;
    QAction *actionSobre;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    Cell *cell05;
    Cell *cell04;
    Cell *cell06;
    Cell *cell07;
    Cell *cell10;
    Cell *cell11;
    Cell *cell00;
    Cell *cell01;
    Cell *cell02;
    Cell *cell03;
    Cell *cell12;
    Cell *cell13;
    Cell *cell14;
    Cell *cell15;
    Cell *cell16;
    Cell *cell17;
    Cell *cell20;
    Cell *cell21;
    Cell *cell22;
    Cell *cell23;
    Cell *cell24;
    Cell *cell25;
    Cell *cell26;
    Cell *cell27;
    Cell *cell30;
    Cell *cell31;
    Cell *cell32;
    Cell *cell33;
    Cell *cell34;
    Cell *cell35;
    Cell *cell36;
    Cell *cell77;
    Cell *cell37;
    Cell *cell40;
    Cell *cell41;
    Cell *cell42;
    Cell *cell43;
    Cell *cell44;
    Cell *cell45;
    Cell *cell46;
    Cell *cell47;
    Cell *cell50;
    Cell *cell51;
    Cell *cell52;
    Cell *cell53;
    Cell *cell54;
    Cell *cell55;
    Cell *cell56;
    Cell *cell57;
    Cell *cell60;
    Cell *cell61;
    Cell *cell62;
    Cell *cell63;
    Cell *cell64;
    Cell *cell65;
    Cell *cell66;
    Cell *cell67;
    Cell *cell70;
    Cell *cell71;
    Cell *cell72;
    Cell *cell73;
    Cell *cell74;
    Cell *cell75;
    Cell *cell76;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuJogo;
    QMenu *menuajuda;

    void setupUi(QMainWindow *Reversi)
    {
        if (Reversi->objectName().isEmpty())
            Reversi->setObjectName(QStringLiteral("Reversi"));
        Reversi->resize(300, 344);
        actionnovo = new QAction(Reversi);
        actionnovo->setObjectName(QStringLiteral("actionnovo"));
        actionsair = new QAction(Reversi);
        actionsair->setObjectName(QStringLiteral("actionsair"));
        actionSobre = new QAction(Reversi);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        centralWidget = new QWidget(Reversi);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        cell05 = new Cell(centralWidget);
        cell05->setObjectName(QStringLiteral("cell05"));
        cell05->setMinimumSize(QSize(35, 35));
        cell05->setMaximumSize(QSize(35, 35));
        cell05->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell05->setIconSize(QSize(25, 25));
        cell05->setFlat(true);

        gridLayout->addWidget(cell05, 0, 5, 1, 1);

        cell04 = new Cell(centralWidget);
        cell04->setObjectName(QStringLiteral("cell04"));
        cell04->setMinimumSize(QSize(35, 35));
        cell04->setMaximumSize(QSize(35, 35));
        cell04->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell04->setIconSize(QSize(25, 25));
        cell04->setFlat(true);

        gridLayout->addWidget(cell04, 0, 4, 1, 1);

        cell06 = new Cell(centralWidget);
        cell06->setObjectName(QStringLiteral("cell06"));
        cell06->setMinimumSize(QSize(35, 35));
        cell06->setMaximumSize(QSize(35, 35));
        cell06->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell06->setIconSize(QSize(25, 25));
        cell06->setFlat(true);

        gridLayout->addWidget(cell06, 0, 6, 1, 1);

        cell07 = new Cell(centralWidget);
        cell07->setObjectName(QStringLiteral("cell07"));
        cell07->setMinimumSize(QSize(35, 35));
        cell07->setMaximumSize(QSize(35, 35));
        cell07->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell07->setIconSize(QSize(25, 25));
        cell07->setFlat(true);

        gridLayout->addWidget(cell07, 0, 7, 1, 1);

        cell10 = new Cell(centralWidget);
        cell10->setObjectName(QStringLiteral("cell10"));
        cell10->setMinimumSize(QSize(35, 35));
        cell10->setMaximumSize(QSize(35, 35));
        cell10->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1px;"));
        cell10->setIconSize(QSize(25, 25));
        cell10->setFlat(true);

        gridLayout->addWidget(cell10, 1, 0, 1, 1);

        cell11 = new Cell(centralWidget);
        cell11->setObjectName(QStringLiteral("cell11"));
        cell11->setMinimumSize(QSize(35, 35));
        cell11->setMaximumSize(QSize(35, 35));
        cell11->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell11->setIconSize(QSize(25, 25));
        cell11->setFlat(true);

        gridLayout->addWidget(cell11, 1, 1, 1, 1);

        cell00 = new Cell(centralWidget);
        cell00->setObjectName(QStringLiteral("cell00"));
        cell00->setMinimumSize(QSize(35, 35));
        cell00->setMaximumSize(QSize(35, 35));
        cell00->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1px;"));
        cell00->setIconSize(QSize(25, 25));
        cell00->setFlat(true);

        gridLayout->addWidget(cell00, 0, 0, 1, 1);

        cell01 = new Cell(centralWidget);
        cell01->setObjectName(QStringLiteral("cell01"));
        cell01->setMinimumSize(QSize(35, 35));
        cell01->setMaximumSize(QSize(35, 35));
        cell01->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell01->setIconSize(QSize(25, 25));
        cell01->setFlat(true);

        gridLayout->addWidget(cell01, 0, 1, 1, 1);

        cell02 = new Cell(centralWidget);
        cell02->setObjectName(QStringLiteral("cell02"));
        cell02->setMinimumSize(QSize(35, 35));
        cell02->setMaximumSize(QSize(35, 35));
        cell02->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell02->setIconSize(QSize(25, 25));
        cell02->setFlat(true);

        gridLayout->addWidget(cell02, 0, 2, 1, 1);

        cell03 = new Cell(centralWidget);
        cell03->setObjectName(QStringLiteral("cell03"));
        cell03->setMinimumSize(QSize(35, 35));
        cell03->setMaximumSize(QSize(35, 35));
        cell03->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell03->setIconSize(QSize(25, 25));
        cell03->setFlat(true);

        gridLayout->addWidget(cell03, 0, 3, 1, 1);

        cell12 = new Cell(centralWidget);
        cell12->setObjectName(QStringLiteral("cell12"));
        cell12->setMinimumSize(QSize(35, 35));
        cell12->setMaximumSize(QSize(35, 35));
        cell12->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell12->setIconSize(QSize(25, 25));
        cell12->setFlat(true);

        gridLayout->addWidget(cell12, 1, 2, 1, 1);

        cell13 = new Cell(centralWidget);
        cell13->setObjectName(QStringLiteral("cell13"));
        cell13->setMinimumSize(QSize(35, 35));
        cell13->setMaximumSize(QSize(35, 35));
        cell13->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell13->setIconSize(QSize(25, 25));
        cell13->setFlat(true);

        gridLayout->addWidget(cell13, 1, 3, 1, 1);

        cell14 = new Cell(centralWidget);
        cell14->setObjectName(QStringLiteral("cell14"));
        cell14->setMinimumSize(QSize(35, 35));
        cell14->setMaximumSize(QSize(35, 35));
        cell14->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell14->setIconSize(QSize(25, 25));
        cell14->setFlat(true);

        gridLayout->addWidget(cell14, 1, 4, 1, 1);

        cell15 = new Cell(centralWidget);
        cell15->setObjectName(QStringLiteral("cell15"));
        cell15->setMinimumSize(QSize(35, 35));
        cell15->setMaximumSize(QSize(35, 35));
        cell15->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell15->setIconSize(QSize(25, 25));
        cell15->setFlat(true);

        gridLayout->addWidget(cell15, 1, 5, 1, 1);

        cell16 = new Cell(centralWidget);
        cell16->setObjectName(QStringLiteral("cell16"));
        cell16->setMinimumSize(QSize(35, 35));
        cell16->setMaximumSize(QSize(35, 35));
        cell16->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell16->setIconSize(QSize(25, 25));
        cell16->setFlat(true);

        gridLayout->addWidget(cell16, 1, 6, 1, 1);

        cell17 = new Cell(centralWidget);
        cell17->setObjectName(QStringLiteral("cell17"));
        cell17->setMinimumSize(QSize(35, 35));
        cell17->setMaximumSize(QSize(35, 35));
        cell17->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell17->setIconSize(QSize(25, 25));
        cell17->setFlat(true);

        gridLayout->addWidget(cell17, 1, 7, 1, 1);

        cell20 = new Cell(centralWidget);
        cell20->setObjectName(QStringLiteral("cell20"));
        cell20->setMinimumSize(QSize(35, 35));
        cell20->setMaximumSize(QSize(35, 35));
        cell20->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1px;"));
        cell20->setIconSize(QSize(25, 25));
        cell20->setFlat(true);

        gridLayout->addWidget(cell20, 2, 0, 1, 1);

        cell21 = new Cell(centralWidget);
        cell21->setObjectName(QStringLiteral("cell21"));
        cell21->setMinimumSize(QSize(35, 35));
        cell21->setMaximumSize(QSize(35, 35));
        cell21->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell21->setIconSize(QSize(25, 25));
        cell21->setFlat(true);

        gridLayout->addWidget(cell21, 2, 1, 1, 1);

        cell22 = new Cell(centralWidget);
        cell22->setObjectName(QStringLiteral("cell22"));
        cell22->setMinimumSize(QSize(35, 35));
        cell22->setMaximumSize(QSize(35, 35));
        cell22->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell22->setIconSize(QSize(25, 25));
        cell22->setFlat(true);

        gridLayout->addWidget(cell22, 2, 2, 1, 1);

        cell23 = new Cell(centralWidget);
        cell23->setObjectName(QStringLiteral("cell23"));
        cell23->setMinimumSize(QSize(35, 35));
        cell23->setMaximumSize(QSize(35, 35));
        cell23->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell23->setIconSize(QSize(25, 25));
        cell23->setFlat(true);

        gridLayout->addWidget(cell23, 2, 3, 1, 1);

        cell24 = new Cell(centralWidget);
        cell24->setObjectName(QStringLiteral("cell24"));
        cell24->setMinimumSize(QSize(35, 35));
        cell24->setMaximumSize(QSize(35, 35));
        cell24->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell24->setIconSize(QSize(25, 25));
        cell24->setFlat(true);

        gridLayout->addWidget(cell24, 2, 4, 1, 1);

        cell25 = new Cell(centralWidget);
        cell25->setObjectName(QStringLiteral("cell25"));
        cell25->setMinimumSize(QSize(35, 35));
        cell25->setMaximumSize(QSize(35, 35));
        cell25->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell25->setIconSize(QSize(25, 25));
        cell25->setFlat(true);

        gridLayout->addWidget(cell25, 2, 5, 1, 1);

        cell26 = new Cell(centralWidget);
        cell26->setObjectName(QStringLiteral("cell26"));
        cell26->setMinimumSize(QSize(35, 35));
        cell26->setMaximumSize(QSize(35, 35));
        cell26->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell26->setIconSize(QSize(25, 25));
        cell26->setFlat(true);

        gridLayout->addWidget(cell26, 2, 6, 1, 1);

        cell27 = new Cell(centralWidget);
        cell27->setObjectName(QStringLiteral("cell27"));
        cell27->setMinimumSize(QSize(35, 35));
        cell27->setMaximumSize(QSize(35, 35));
        cell27->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell27->setIconSize(QSize(25, 25));
        cell27->setFlat(true);

        gridLayout->addWidget(cell27, 2, 7, 1, 1);

        cell30 = new Cell(centralWidget);
        cell30->setObjectName(QStringLiteral("cell30"));
        cell30->setMinimumSize(QSize(35, 35));
        cell30->setMaximumSize(QSize(35, 35));
        cell30->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1px;"));
        cell30->setIconSize(QSize(25, 25));
        cell30->setFlat(true);

        gridLayout->addWidget(cell30, 3, 0, 1, 1);

        cell31 = new Cell(centralWidget);
        cell31->setObjectName(QStringLiteral("cell31"));
        cell31->setMinimumSize(QSize(35, 35));
        cell31->setMaximumSize(QSize(35, 35));
        cell31->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell31->setIconSize(QSize(25, 25));
        cell31->setFlat(true);

        gridLayout->addWidget(cell31, 3, 1, 1, 1);

        cell32 = new Cell(centralWidget);
        cell32->setObjectName(QStringLiteral("cell32"));
        cell32->setMinimumSize(QSize(35, 35));
        cell32->setMaximumSize(QSize(35, 35));
        cell32->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell32->setIconSize(QSize(25, 25));
        cell32->setFlat(true);

        gridLayout->addWidget(cell32, 3, 2, 1, 1);

        cell33 = new Cell(centralWidget);
        cell33->setObjectName(QStringLiteral("cell33"));
        cell33->setMinimumSize(QSize(35, 35));
        cell33->setMaximumSize(QSize(35, 35));
        cell33->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell33->setIconSize(QSize(25, 25));
        cell33->setFlat(true);

        gridLayout->addWidget(cell33, 3, 3, 1, 1);

        cell34 = new Cell(centralWidget);
        cell34->setObjectName(QStringLiteral("cell34"));
        cell34->setMinimumSize(QSize(35, 35));
        cell34->setMaximumSize(QSize(35, 35));
        cell34->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell34->setIconSize(QSize(25, 25));
        cell34->setFlat(true);

        gridLayout->addWidget(cell34, 3, 4, 1, 1);

        cell35 = new Cell(centralWidget);
        cell35->setObjectName(QStringLiteral("cell35"));
        cell35->setMinimumSize(QSize(35, 35));
        cell35->setMaximumSize(QSize(35, 35));
        cell35->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell35->setIconSize(QSize(25, 25));
        cell35->setFlat(true);

        gridLayout->addWidget(cell35, 3, 5, 1, 1);

        cell36 = new Cell(centralWidget);
        cell36->setObjectName(QStringLiteral("cell36"));
        cell36->setMinimumSize(QSize(35, 35));
        cell36->setMaximumSize(QSize(35, 35));
        cell36->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell36->setIconSize(QSize(25, 25));
        cell36->setFlat(true);

        gridLayout->addWidget(cell36, 3, 6, 1, 1);

        cell77 = new Cell(centralWidget);
        cell77->setObjectName(QStringLiteral("cell77"));
        cell77->setMinimumSize(QSize(35, 35));
        cell77->setMaximumSize(QSize(35, 35));
        cell77->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 1px;\n"
"border-left-width: 0px;"));
        cell77->setIconSize(QSize(25, 25));
        cell77->setFlat(true);

        gridLayout->addWidget(cell77, 7, 7, 1, 1);

        cell37 = new Cell(centralWidget);
        cell37->setObjectName(QStringLiteral("cell37"));
        cell37->setMinimumSize(QSize(35, 35));
        cell37->setMaximumSize(QSize(35, 35));
        cell37->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell37->setIconSize(QSize(25, 25));
        cell37->setFlat(true);

        gridLayout->addWidget(cell37, 3, 7, 1, 1);

        cell40 = new Cell(centralWidget);
        cell40->setObjectName(QStringLiteral("cell40"));
        cell40->setMinimumSize(QSize(35, 35));
        cell40->setMaximumSize(QSize(35, 35));
        cell40->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1px;"));
        cell40->setIconSize(QSize(25, 25));
        cell40->setFlat(true);

        gridLayout->addWidget(cell40, 4, 0, 1, 1);

        cell41 = new Cell(centralWidget);
        cell41->setObjectName(QStringLiteral("cell41"));
        cell41->setMinimumSize(QSize(35, 35));
        cell41->setMaximumSize(QSize(35, 35));
        cell41->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell41->setIconSize(QSize(25, 25));
        cell41->setFlat(true);

        gridLayout->addWidget(cell41, 4, 1, 1, 1);

        cell42 = new Cell(centralWidget);
        cell42->setObjectName(QStringLiteral("cell42"));
        cell42->setMinimumSize(QSize(35, 35));
        cell42->setMaximumSize(QSize(35, 35));
        cell42->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell42->setIconSize(QSize(25, 25));
        cell42->setFlat(true);

        gridLayout->addWidget(cell42, 4, 2, 1, 1);

        cell43 = new Cell(centralWidget);
        cell43->setObjectName(QStringLiteral("cell43"));
        cell43->setMinimumSize(QSize(35, 35));
        cell43->setMaximumSize(QSize(35, 35));
        cell43->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell43->setIconSize(QSize(25, 25));
        cell43->setFlat(true);

        gridLayout->addWidget(cell43, 4, 3, 1, 1);

        cell44 = new Cell(centralWidget);
        cell44->setObjectName(QStringLiteral("cell44"));
        cell44->setMinimumSize(QSize(35, 35));
        cell44->setMaximumSize(QSize(35, 35));
        cell44->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell44->setIconSize(QSize(25, 25));
        cell44->setFlat(true);

        gridLayout->addWidget(cell44, 4, 4, 1, 1);

        cell45 = new Cell(centralWidget);
        cell45->setObjectName(QStringLiteral("cell45"));
        cell45->setMinimumSize(QSize(35, 35));
        cell45->setMaximumSize(QSize(35, 35));
        cell45->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell45->setIconSize(QSize(25, 25));
        cell45->setFlat(true);

        gridLayout->addWidget(cell45, 4, 5, 1, 1);

        cell46 = new Cell(centralWidget);
        cell46->setObjectName(QStringLiteral("cell46"));
        cell46->setMinimumSize(QSize(35, 35));
        cell46->setMaximumSize(QSize(35, 35));
        cell46->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell46->setIconSize(QSize(25, 25));
        cell46->setFlat(true);

        gridLayout->addWidget(cell46, 4, 6, 1, 1);

        cell47 = new Cell(centralWidget);
        cell47->setObjectName(QStringLiteral("cell47"));
        cell47->setMinimumSize(QSize(35, 35));
        cell47->setMaximumSize(QSize(35, 35));
        cell47->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell47->setIconSize(QSize(25, 25));
        cell47->setFlat(true);

        gridLayout->addWidget(cell47, 4, 7, 1, 1);

        cell50 = new Cell(centralWidget);
        cell50->setObjectName(QStringLiteral("cell50"));
        cell50->setMinimumSize(QSize(35, 35));
        cell50->setMaximumSize(QSize(35, 35));
        cell50->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1px;"));
        cell50->setIconSize(QSize(25, 25));
        cell50->setFlat(true);

        gridLayout->addWidget(cell50, 5, 0, 1, 1);

        cell51 = new Cell(centralWidget);
        cell51->setObjectName(QStringLiteral("cell51"));
        cell51->setMinimumSize(QSize(35, 35));
        cell51->setMaximumSize(QSize(35, 35));
        cell51->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell51->setIconSize(QSize(25, 25));
        cell51->setFlat(true);

        gridLayout->addWidget(cell51, 5, 1, 1, 1);

        cell52 = new Cell(centralWidget);
        cell52->setObjectName(QStringLiteral("cell52"));
        cell52->setMinimumSize(QSize(35, 35));
        cell52->setMaximumSize(QSize(35, 35));
        cell52->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell52->setIconSize(QSize(25, 25));
        cell52->setFlat(true);

        gridLayout->addWidget(cell52, 5, 2, 1, 1);

        cell53 = new Cell(centralWidget);
        cell53->setObjectName(QStringLiteral("cell53"));
        cell53->setMinimumSize(QSize(35, 35));
        cell53->setMaximumSize(QSize(35, 35));
        cell53->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell53->setIconSize(QSize(25, 25));
        cell53->setFlat(true);

        gridLayout->addWidget(cell53, 5, 3, 1, 1);

        cell54 = new Cell(centralWidget);
        cell54->setObjectName(QStringLiteral("cell54"));
        cell54->setMinimumSize(QSize(35, 35));
        cell54->setMaximumSize(QSize(35, 35));
        cell54->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell54->setIconSize(QSize(25, 25));
        cell54->setFlat(true);

        gridLayout->addWidget(cell54, 5, 4, 1, 1);

        cell55 = new Cell(centralWidget);
        cell55->setObjectName(QStringLiteral("cell55"));
        cell55->setMinimumSize(QSize(35, 35));
        cell55->setMaximumSize(QSize(35, 35));
        cell55->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell55->setIconSize(QSize(25, 25));
        cell55->setFlat(true);

        gridLayout->addWidget(cell55, 5, 5, 1, 1);

        cell56 = new Cell(centralWidget);
        cell56->setObjectName(QStringLiteral("cell56"));
        cell56->setMinimumSize(QSize(35, 35));
        cell56->setMaximumSize(QSize(35, 35));
        cell56->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell56->setIconSize(QSize(25, 25));
        cell56->setFlat(true);

        gridLayout->addWidget(cell56, 5, 6, 1, 1);

        cell57 = new Cell(centralWidget);
        cell57->setObjectName(QStringLiteral("cell57"));
        cell57->setMinimumSize(QSize(35, 35));
        cell57->setMaximumSize(QSize(35, 35));
        cell57->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell57->setIconSize(QSize(25, 25));
        cell57->setFlat(true);

        gridLayout->addWidget(cell57, 5, 7, 1, 1);

        cell60 = new Cell(centralWidget);
        cell60->setObjectName(QStringLiteral("cell60"));
        cell60->setMinimumSize(QSize(35, 35));
        cell60->setMaximumSize(QSize(35, 35));
        cell60->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 1px;"));
        cell60->setIconSize(QSize(25, 25));
        cell60->setFlat(true);

        gridLayout->addWidget(cell60, 6, 0, 1, 1);

        cell61 = new Cell(centralWidget);
        cell61->setObjectName(QStringLiteral("cell61"));
        cell61->setMinimumSize(QSize(35, 35));
        cell61->setMaximumSize(QSize(35, 35));
        cell61->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell61->setIconSize(QSize(25, 25));
        cell61->setFlat(true);

        gridLayout->addWidget(cell61, 6, 1, 1, 1);

        cell62 = new Cell(centralWidget);
        cell62->setObjectName(QStringLiteral("cell62"));
        cell62->setMinimumSize(QSize(35, 35));
        cell62->setMaximumSize(QSize(35, 35));
        cell62->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell62->setIconSize(QSize(25, 25));
        cell62->setFlat(true);

        gridLayout->addWidget(cell62, 6, 2, 1, 1);

        cell63 = new Cell(centralWidget);
        cell63->setObjectName(QStringLiteral("cell63"));
        cell63->setMinimumSize(QSize(35, 35));
        cell63->setMaximumSize(QSize(35, 35));
        cell63->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell63->setIconSize(QSize(25, 25));
        cell63->setFlat(true);

        gridLayout->addWidget(cell63, 6, 3, 1, 1);

        cell64 = new Cell(centralWidget);
        cell64->setObjectName(QStringLiteral("cell64"));
        cell64->setMinimumSize(QSize(35, 35));
        cell64->setMaximumSize(QSize(35, 35));
        cell64->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell64->setIconSize(QSize(25, 25));
        cell64->setFlat(true);

        gridLayout->addWidget(cell64, 6, 4, 1, 1);

        cell65 = new Cell(centralWidget);
        cell65->setObjectName(QStringLiteral("cell65"));
        cell65->setMinimumSize(QSize(35, 35));
        cell65->setMaximumSize(QSize(35, 35));
        cell65->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell65->setIconSize(QSize(25, 25));
        cell65->setFlat(true);

        gridLayout->addWidget(cell65, 6, 5, 1, 1);

        cell66 = new Cell(centralWidget);
        cell66->setObjectName(QStringLiteral("cell66"));
        cell66->setMinimumSize(QSize(35, 35));
        cell66->setMaximumSize(QSize(35, 35));
        cell66->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell66->setIconSize(QSize(25, 25));
        cell66->setFlat(true);

        gridLayout->addWidget(cell66, 6, 6, 1, 1);

        cell67 = new Cell(centralWidget);
        cell67->setObjectName(QStringLiteral("cell67"));
        cell67->setMinimumSize(QSize(35, 35));
        cell67->setMaximumSize(QSize(35, 35));
        cell67->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 0px;\n"
"border-left-width: 0px;"));
        cell67->setIconSize(QSize(25, 25));
        cell67->setFlat(true);

        gridLayout->addWidget(cell67, 6, 7, 1, 1);

        cell70 = new Cell(centralWidget);
        cell70->setObjectName(QStringLiteral("cell70"));
        cell70->setMinimumSize(QSize(35, 35));
        cell70->setMaximumSize(QSize(35, 35));
        cell70->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 1px;\n"
"border-left-width: 1px;"));
        cell70->setIconSize(QSize(25, 25));
        cell70->setFlat(true);

        gridLayout->addWidget(cell70, 7, 0, 1, 1);

        cell71 = new Cell(centralWidget);
        cell71->setObjectName(QStringLiteral("cell71"));
        cell71->setMinimumSize(QSize(35, 35));
        cell71->setMaximumSize(QSize(35, 35));
        cell71->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 1px;\n"
"border-left-width: 0px;"));
        cell71->setIconSize(QSize(25, 25));
        cell71->setFlat(true);

        gridLayout->addWidget(cell71, 7, 1, 1, 1);

        cell72 = new Cell(centralWidget);
        cell72->setObjectName(QStringLiteral("cell72"));
        cell72->setMinimumSize(QSize(35, 35));
        cell72->setMaximumSize(QSize(35, 35));
        cell72->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 1px;\n"
"border-left-width: 0px;"));
        cell72->setIconSize(QSize(25, 25));
        cell72->setFlat(true);

        gridLayout->addWidget(cell72, 7, 2, 1, 1);

        cell73 = new Cell(centralWidget);
        cell73->setObjectName(QStringLiteral("cell73"));
        cell73->setMinimumSize(QSize(35, 35));
        cell73->setMaximumSize(QSize(35, 35));
        cell73->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 1px;\n"
"border-left-width: 0px;"));
        cell73->setIconSize(QSize(25, 25));
        cell73->setFlat(true);

        gridLayout->addWidget(cell73, 7, 3, 1, 1);

        cell74 = new Cell(centralWidget);
        cell74->setObjectName(QStringLiteral("cell74"));
        cell74->setMinimumSize(QSize(35, 35));
        cell74->setMaximumSize(QSize(35, 35));
        cell74->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 1px;\n"
"border-left-width: 0px;"));
        cell74->setIconSize(QSize(25, 25));
        cell74->setFlat(true);

        gridLayout->addWidget(cell74, 7, 4, 1, 1);

        cell75 = new Cell(centralWidget);
        cell75->setObjectName(QStringLiteral("cell75"));
        cell75->setMinimumSize(QSize(35, 35));
        cell75->setMaximumSize(QSize(35, 35));
        cell75->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 1px;\n"
"border-left-width: 0px;"));
        cell75->setIconSize(QSize(25, 25));
        cell75->setFlat(true);

        gridLayout->addWidget(cell75, 7, 5, 1, 1);

        cell76 = new Cell(centralWidget);
        cell76->setObjectName(QStringLiteral("cell76"));
        cell76->setMinimumSize(QSize(35, 35));
        cell76->setMaximumSize(QSize(35, 35));
        cell76->setStyleSheet(QLatin1String("background-color: white;\n"
"border-color: black;\n"
"border-style: solid;\n"
"border-top-width: 1px;\n"
"border-right-width: 1px;\n"
"border-bottom-width: 1px;\n"
"border-left-width: 0px;"));
        cell76->setIconSize(QSize(25, 25));
        cell76->setFlat(true);

        gridLayout->addWidget(cell76, 7, 6, 1, 1);

        Reversi->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Reversi);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Reversi->setStatusBar(statusBar);
        menuBar = new QMenuBar(Reversi);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 22));
        menuJogo = new QMenu(menuBar);
        menuJogo->setObjectName(QStringLiteral("menuJogo"));
        menuajuda = new QMenu(menuBar);
        menuajuda->setObjectName(QStringLiteral("menuajuda"));
        Reversi->setMenuBar(menuBar);

        menuBar->addAction(menuJogo->menuAction());
        menuBar->addAction(menuajuda->menuAction());
        menuJogo->addAction(actionnovo);
        menuJogo->addAction(actionsair);
        menuajuda->addAction(actionSobre);

        retranslateUi(Reversi);

        QMetaObject::connectSlotsByName(Reversi);
    } // setupUi

    void retranslateUi(QMainWindow *Reversi)
    {
        Reversi->setWindowTitle(QApplication::translate("Reversi", "Reversi", nullptr));
        actionnovo->setText(QApplication::translate("Reversi", "novo", nullptr));
        actionsair->setText(QApplication::translate("Reversi", "sair", nullptr));
        actionSobre->setText(QApplication::translate("Reversi", "Sobre", nullptr));
        menuJogo->setTitle(QApplication::translate("Reversi", "Jogo", nullptr));
        menuajuda->setTitle(QApplication::translate("Reversi", "Ajuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reversi: public Ui_Reversi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVERSI_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *AddBtn;
    QPushButton *EditBtn;
    QPushButton *RemoveBtn;
    QPushButton *UpBtn;
    QPushButton *DownBtn;
    QPushButton *SortBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *CloseBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(451, 467);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("#centralWidget{\n"
"background-color :  #AFACFF;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget_3 = new QListWidget(centralWidget);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));

        horizontalLayout->addWidget(listWidget_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AddBtn = new QPushButton(centralWidget);
        AddBtn->setObjectName(QStringLiteral("AddBtn"));

        verticalLayout->addWidget(AddBtn);

        EditBtn = new QPushButton(centralWidget);
        EditBtn->setObjectName(QStringLiteral("EditBtn"));

        verticalLayout->addWidget(EditBtn);

        RemoveBtn = new QPushButton(centralWidget);
        RemoveBtn->setObjectName(QStringLiteral("RemoveBtn"));

        verticalLayout->addWidget(RemoveBtn);

        UpBtn = new QPushButton(centralWidget);
        UpBtn->setObjectName(QStringLiteral("UpBtn"));

        verticalLayout->addWidget(UpBtn);

        DownBtn = new QPushButton(centralWidget);
        DownBtn->setObjectName(QStringLiteral("DownBtn"));

        verticalLayout->addWidget(DownBtn);

        SortBtn = new QPushButton(centralWidget);
        SortBtn->setObjectName(QStringLiteral("SortBtn"));

        verticalLayout->addWidget(SortBtn);

        verticalSpacer = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        CloseBtn = new QPushButton(centralWidget);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));

        verticalLayout->addWidget(CloseBtn);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 451, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Employees Management system", Q_NULLPTR));
        AddBtn->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        EditBtn->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        RemoveBtn->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        UpBtn->setText(QApplication::translate("MainWindow", "Up", Q_NULLPTR));
        DownBtn->setText(QApplication::translate("MainWindow", "Down", Q_NULLPTR));
        SortBtn->setText(QApplication::translate("MainWindow", "Sort", Q_NULLPTR));
        CloseBtn->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

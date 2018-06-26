/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *Object_creator;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_parameter1;
    QLineEdit *lineEdit_entry_field1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_parameter2;
    QLineEdit *lineEdit_entry_field2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_parameter3;
    QLineEdit *lineEdit_entry_field3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_parameter4;
    QLineEdit *lineEdit_entry_field4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_parameter5;
    QLineEdit *lineEdit_entry_field5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_parameter6;
    QLineEdit *lineEdit_entry_field6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_parameter7;
    QLineEdit *lineEdit_entry_field7;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_picture1;
    QRadioButton *radioButton_picture2;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_picture3;
    QRadioButton *radioButton_picture4;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_picture6;
    QRadioButton *radioButton_picture5;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radioButton_new_picture;
    QLabel *label_12;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_info1;
    QLabel *label_info2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButton_create_object;
    QPushButton *pushButton_add_default;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_exit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_question;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton_bluray;
    QRadioButton *radioButton_from_disc;
    QRadioButton *radioButton_from_memory;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButton_delete_selected;
    QPushButton *pushButton_save_collection;
    QPushButton *pushButton_load_collection;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *pushButton_exit2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_16;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(537, 599);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(3000, 3000));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 521, 521));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Object_creator = new QGroupBox(tab);
        Object_creator->setObjectName(QStringLiteral("Object_creator"));
        Object_creator->setGeometry(QRect(0, 0, 511, 511));
        groupBox_2 = new QGroupBox(Object_creator);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 491, 291));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 461, 225));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget);
        horizontalLayout_15->setSpacing(40);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_parameter1 = new QLabel(layoutWidget);
        label_parameter1->setObjectName(QStringLiteral("label_parameter1"));

        horizontalLayout->addWidget(label_parameter1);

        lineEdit_entry_field1 = new QLineEdit(layoutWidget);
        lineEdit_entry_field1->setObjectName(QStringLiteral("lineEdit_entry_field1"));

        horizontalLayout->addWidget(lineEdit_entry_field1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_parameter2 = new QLabel(layoutWidget);
        label_parameter2->setObjectName(QStringLiteral("label_parameter2"));

        horizontalLayout_2->addWidget(label_parameter2);

        lineEdit_entry_field2 = new QLineEdit(layoutWidget);
        lineEdit_entry_field2->setObjectName(QStringLiteral("lineEdit_entry_field2"));

        horizontalLayout_2->addWidget(lineEdit_entry_field2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_parameter3 = new QLabel(layoutWidget);
        label_parameter3->setObjectName(QStringLiteral("label_parameter3"));

        horizontalLayout_8->addWidget(label_parameter3);

        lineEdit_entry_field3 = new QLineEdit(layoutWidget);
        lineEdit_entry_field3->setObjectName(QStringLiteral("lineEdit_entry_field3"));

        horizontalLayout_8->addWidget(lineEdit_entry_field3);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_parameter4 = new QLabel(layoutWidget);
        label_parameter4->setObjectName(QStringLiteral("label_parameter4"));

        horizontalLayout_4->addWidget(label_parameter4);

        lineEdit_entry_field4 = new QLineEdit(layoutWidget);
        lineEdit_entry_field4->setObjectName(QStringLiteral("lineEdit_entry_field4"));

        horizontalLayout_4->addWidget(lineEdit_entry_field4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_parameter5 = new QLabel(layoutWidget);
        label_parameter5->setObjectName(QStringLiteral("label_parameter5"));

        horizontalLayout_5->addWidget(label_parameter5);

        lineEdit_entry_field5 = new QLineEdit(layoutWidget);
        lineEdit_entry_field5->setObjectName(QStringLiteral("lineEdit_entry_field5"));

        horizontalLayout_5->addWidget(lineEdit_entry_field5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_parameter6 = new QLabel(layoutWidget);
        label_parameter6->setObjectName(QStringLiteral("label_parameter6"));

        horizontalLayout_6->addWidget(label_parameter6);

        lineEdit_entry_field6 = new QLineEdit(layoutWidget);
        lineEdit_entry_field6->setObjectName(QStringLiteral("lineEdit_entry_field6"));

        horizontalLayout_6->addWidget(lineEdit_entry_field6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_parameter7 = new QLabel(layoutWidget);
        label_parameter7->setObjectName(QStringLiteral("label_parameter7"));

        horizontalLayout_7->addWidget(label_parameter7);

        lineEdit_entry_field7 = new QLineEdit(layoutWidget);
        lineEdit_entry_field7->setObjectName(QStringLiteral("lineEdit_entry_field7"));

        horizontalLayout_7->addWidget(lineEdit_entry_field7);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_15->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_picture1 = new QRadioButton(layoutWidget);
        radioButton_picture1->setObjectName(QStringLiteral("radioButton_picture1"));

        horizontalLayout_3->addWidget(radioButton_picture1);

        radioButton_picture2 = new QRadioButton(layoutWidget);
        radioButton_picture2->setObjectName(QStringLiteral("radioButton_picture2"));

        horizontalLayout_3->addWidget(radioButton_picture2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        radioButton_picture3 = new QRadioButton(layoutWidget);
        radioButton_picture3->setObjectName(QStringLiteral("radioButton_picture3"));

        horizontalLayout_9->addWidget(radioButton_picture3);

        radioButton_picture4 = new QRadioButton(layoutWidget);
        radioButton_picture4->setObjectName(QStringLiteral("radioButton_picture4"));

        horizontalLayout_9->addWidget(radioButton_picture4);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_picture6 = new QRadioButton(layoutWidget);
        radioButton_picture6->setObjectName(QStringLiteral("radioButton_picture6"));

        horizontalLayout_10->addWidget(radioButton_picture6);

        radioButton_picture5 = new QRadioButton(layoutWidget);
        radioButton_picture5->setObjectName(QStringLiteral("radioButton_picture5"));

        horizontalLayout_10->addWidget(radioButton_picture5);


        verticalLayout_4->addLayout(horizontalLayout_10);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        radioButton_new_picture = new QRadioButton(layoutWidget);
        radioButton_new_picture->setObjectName(QStringLiteral("radioButton_new_picture"));

        horizontalLayout_12->addWidget(radioButton_new_picture);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(20, 0));

        horizontalLayout_12->addWidget(label_12);


        verticalLayout_5->addLayout(horizontalLayout_12);


        horizontalLayout_15->addLayout(verticalLayout_5);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 461, 51));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_info1 = new QLabel(layoutWidget1);
        label_info1->setObjectName(QStringLiteral("label_info1"));

        horizontalLayout_11->addWidget(label_info1);

        label_info2 = new QLabel(layoutWidget1);
        label_info2->setObjectName(QStringLiteral("label_info2"));

        horizontalLayout_11->addWidget(label_info2);

        layoutWidget2 = new QWidget(Object_creator);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 410, 461, 76));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        pushButton_create_object = new QPushButton(layoutWidget2);
        pushButton_create_object->setObjectName(QStringLiteral("pushButton_create_object"));

        horizontalLayout_17->addWidget(pushButton_create_object);

        pushButton_add_default = new QPushButton(layoutWidget2);
        pushButton_add_default->setObjectName(QStringLiteral("pushButton_add_default"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_add_default->sizePolicy().hasHeightForWidth());
        pushButton_add_default->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(pushButton_add_default);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushButton_exit = new QPushButton(layoutWidget2);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        sizePolicy.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(pushButton_exit);


        verticalLayout_3->addLayout(horizontalLayout_14);

        layoutWidget3 = new QWidget(Object_creator);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 20, 481, 61));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_question = new QLabel(layoutWidget3);
        label_question->setObjectName(QStringLiteral("label_question"));
        label_question->setMinimumSize(QSize(253, 0));
        label_question->setMaximumSize(QSize(2000, 50));

        horizontalLayout_13->addWidget(label_question);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        radioButton_bluray = new QRadioButton(layoutWidget3);
        radioButton_bluray->setObjectName(QStringLiteral("radioButton_bluray"));

        verticalLayout_6->addWidget(radioButton_bluray);

        radioButton_from_disc = new QRadioButton(layoutWidget3);
        radioButton_from_disc->setObjectName(QStringLiteral("radioButton_from_disc"));

        verticalLayout_6->addWidget(radioButton_from_disc);

        radioButton_from_memory = new QRadioButton(layoutWidget3);
        radioButton_from_memory->setObjectName(QStringLiteral("radioButton_from_memory"));

        verticalLayout_6->addWidget(radioButton_from_memory);


        horizontalLayout_13->addLayout(verticalLayout_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(0, 10, 521, 391));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setLineWidth(1);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(2);
        tableWidget->horizontalHeader()->setDefaultSectionSize(240);
        tableWidget->verticalHeader()->setDefaultSectionSize(150);
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 410, 461, 79));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_8->setSpacing(-1);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        pushButton_delete_selected = new QPushButton(layoutWidget_2);
        pushButton_delete_selected->setObjectName(QStringLiteral("pushButton_delete_selected"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_delete_selected->sizePolicy().hasHeightForWidth());
        pushButton_delete_selected->setSizePolicy(sizePolicy2);

        horizontalLayout_20->addWidget(pushButton_delete_selected);

        pushButton_save_collection = new QPushButton(layoutWidget_2);
        pushButton_save_collection->setObjectName(QStringLiteral("pushButton_save_collection"));
        sizePolicy.setHeightForWidth(pushButton_save_collection->sizePolicy().hasHeightForWidth());
        pushButton_save_collection->setSizePolicy(sizePolicy);

        horizontalLayout_20->addWidget(pushButton_save_collection);

        pushButton_load_collection = new QPushButton(layoutWidget_2);
        pushButton_load_collection->setObjectName(QStringLiteral("pushButton_load_collection"));
        sizePolicy.setHeightForWidth(pushButton_load_collection->sizePolicy().hasHeightForWidth());
        pushButton_load_collection->setSizePolicy(sizePolicy);

        horizontalLayout_20->addWidget(pushButton_load_collection);


        verticalLayout_8->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        pushButton_exit2 = new QPushButton(layoutWidget_2);
        pushButton_exit2->setObjectName(QStringLiteral("pushButton_exit2"));
        sizePolicy.setHeightForWidth(pushButton_exit2->sizePolicy().hasHeightForWidth());
        pushButton_exit2->setSizePolicy(sizePolicy);

        horizontalLayout_21->addWidget(pushButton_exit2);


        verticalLayout_8->addLayout(horizontalLayout_21);

        tabWidget->addTab(tab_2, QString());
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 537, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Object_creator->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_parameter1->setText(QApplication::translate("MainWindow", "label", nullptr));
        lineEdit_entry_field1->setText(QString());
        label_parameter2->setText(QApplication::translate("MainWindow", "label2", nullptr));
        label_parameter3->setText(QApplication::translate("MainWindow", "label3", nullptr));
        lineEdit_entry_field3->setText(QString());
        label_parameter4->setText(QApplication::translate("MainWindow", "label4", nullptr));
        label_parameter5->setText(QApplication::translate("MainWindow", "label5", nullptr));
        label_parameter6->setText(QApplication::translate("MainWindow", "label6", nullptr));
        label_parameter7->setText(QApplication::translate("MainWindow", "label7", nullptr));
        radioButton_picture1->setText(QString());
        radioButton_picture2->setText(QString());
        radioButton_picture3->setText(QString());
        radioButton_picture4->setText(QString());
        radioButton_picture6->setText(QString());
        radioButton_picture5->setText(QString());
        radioButton_new_picture->setText(QApplication::translate("MainWindow", "choose other", nullptr));
        label_12->setText(QString());
        label_info1->setText(QApplication::translate("MainWindow", "Fill in all entry fields:", nullptr));
        label_info2->setText(QApplication::translate("MainWindow", "             Choose picture:", nullptr));
        pushButton_create_object->setText(QApplication::translate("MainWindow", "create", nullptr));
        pushButton_add_default->setText(QApplication::translate("MainWindow", "add default", nullptr));
        pushButton_exit->setText(QApplication::translate("MainWindow", "Exit program", nullptr));
        label_question->setText(QApplication::translate("MainWindow", "What do you want to create?", nullptr));
        radioButton_bluray->setText(QApplication::translate("MainWindow", "Bluray", nullptr));
        radioButton_from_disc->setText(QApplication::translate("MainWindow", "Player from disc", nullptr));
        radioButton_from_memory->setText(QApplication::translate("MainWindow", "Player from memory", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Media Player Creator", nullptr));
        pushButton_delete_selected->setText(QApplication::translate("MainWindow", "delete selected", nullptr));
        pushButton_save_collection->setText(QApplication::translate("MainWindow", "save to file", nullptr));
        pushButton_load_collection->setText(QApplication::translate("MainWindow", "load from file", nullptr));
        pushButton_exit2->setText(QApplication::translate("MainWindow", "Exit program", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Display Media Players", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'my3dviewer.ui'
**
** Created: Tue Apr 16 19:21:52 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY3DVIEWER_H
#define UI_MY3DVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "MyQListWidget.h"
#include "myglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_My3DViewerClass
{
public:
    QWidget *centralWidget;
    MyGLWidget *mainWindowClass;
    MyQListWidget *listWidget;
    MyQListWidget *listWidget_2;
    MyQListWidget *listWidget_3;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QMainWindow *My3DViewerClass)
    {
        if (My3DViewerClass->objectName().isEmpty())
            My3DViewerClass->setObjectName(QString::fromUtf8("My3DViewerClass"));
        My3DViewerClass->resize(891, 683);
        centralWidget = new QWidget(My3DViewerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainWindowClass = new MyGLWidget(centralWidget);
        mainWindowClass->setObjectName(QString::fromUtf8("mainWindowClass"));
        mainWindowClass->setGeometry(QRect(0, 0, 521, 411));
        listWidget = new MyQListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(540, 40, 111, 341));
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_2 = new MyQListWidget(centralWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(650, 40, 101, 341));
        listWidget_2->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_3 = new MyQListWidget(centralWidget);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(750, 40, 111, 341));
        listWidget_3->setSelectionMode(QAbstractItemView::MultiSelection);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 470, 160, 19));
        horizontalSlider->setMinimum(-10);
        horizontalSlider->setMaximum(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(20, 510, 160, 19));
        horizontalSlider_2->setMinimum(-10);
        horizontalSlider_2->setMaximum(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(20, 550, 160, 19));
        horizontalSlider_3->setMinimum(-10);
        horizontalSlider_3->setMaximum(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_4 = new QSlider(centralWidget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(690, 490, 160, 19));
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_5 = new QSlider(centralWidget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(690, 530, 160, 19));
        horizontalSlider_5->setMaximum(100);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_6 = new QSlider(centralWidget);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setGeometry(QRect(690, 570, 160, 19));
        horizontalSlider_6->setMaximum(100);
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(730, 430, 141, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 430, 91, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 470, 46, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 510, 46, 13));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 550, 46, 13));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(610, 490, 46, 13));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(610, 530, 46, 13));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(610, 570, 46, 13));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 570, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 620, 131, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 630, 141, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 640, 75, 23));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(430, 480, 75, 23));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(250, 430, 42, 22));
        spinBox->setMinimum(2);
        spinBox->setMaximum(5);
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(250, 460, 42, 22));
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(5);
        spinBox_3 = new QSpinBox(centralWidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(250, 490, 42, 22));
        spinBox_3->setMinimum(2);
        spinBox_3->setMaximum(5);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(300, 430, 41, 81));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(660, 350, 75, 171));
        spinBox_4 = new QSpinBox(centralWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(540, 410, 42, 22));
        spinBox_4->setMinimum(-10);
        spinBox_4->setMaximum(10);
        spinBox_5 = new QSpinBox(centralWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(540, 460, 42, 22));
        spinBox_5->setMinimum(-10);
        spinBox_5->setMaximum(10);
        spinBox_6 = new QSpinBox(centralWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(540, 520, 42, 22));
        spinBox_6->setMinimum(-10);
        spinBox_6->setMaximum(10);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(540, 390, 46, 13));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(540, 440, 46, 13));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(540, 500, 46, 13));
        My3DViewerClass->setCentralWidget(centralWidget);

        retranslateUi(My3DViewerClass);
        QObject::connect(mainWindowClass, SIGNAL(addFace(MyFace*)), listWidget_3, SLOT(addFaces(MyFace*)));
        QObject::connect(mainWindowClass, SIGNAL(addVertex(MyVertex*)), listWidget, SLOT(addVerts(MyVertex*)));
        QObject::connect(mainWindowClass, SIGNAL(addEdge(MyHalfEdge*,int)), listWidget_2, SLOT(addEdges(MyHalfEdge*,int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setRed(int)));
        QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setGreen(int)));
        QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setBlue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setX(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setY(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setZ(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), mainWindowClass, SLOT(splitQuad()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), mainWindowClass, SLOT(addVertToEdge()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), mainWindowClass, SLOT(addEdgeBtwnFaces()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), mainWindowClass, SLOT(deleteVertex()));
        QObject::connect(mainWindowClass, SIGNAL(clearzz()), listWidget, SLOT(clearz()));
        QObject::connect(mainWindowClass, SIGNAL(clearzz()), listWidget, SLOT(clearz()));
        QObject::connect(mainWindowClass, SIGNAL(clearzz()), listWidget_2, SLOT(clearz()));
        QObject::connect(mainWindowClass, SIGNAL(clearzz()), listWidget_3, SLOT(clearz()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), mainWindowClass, SLOT(drawRay()));
        QObject::connect(listWidget_3, SIGNAL(itemClicked(QListWidgetItem*)), mainWindowClass, SLOT(highlight()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(changeFFDX(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(changeFFDY(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(changeFFDZ(int)));
        QObject::connect(pushButton_6, SIGNAL(clicked()), mainWindowClass, SLOT(createFFD()));
        QObject::connect(pushButton_7, SIGNAL(released()), mainWindowClass, SLOT(startSmooth()));
        QObject::connect(mainWindowClass, SIGNAL(sendSmooth()), listWidget, SLOT(dasmoothy()));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setXLight(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setYLight(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), mainWindowClass, SLOT(setZLight(int)));

        QMetaObject::connectSlotsByName(My3DViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *My3DViewerClass)
    {
        My3DViewerClass->setWindowTitle(QApplication::translate("My3DViewerClass", "My 3D Viewer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("My3DViewerClass", "change color", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("My3DViewerClass", "move Vertex", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("My3DViewerClass", "X", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("My3DViewerClass", "Y", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("My3DViewerClass", "Z", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("My3DViewerClass", "Red", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("My3DViewerClass", "Green", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("My3DViewerClass", "Blue", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("My3DViewerClass", "splitQuad", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("My3DViewerClass", "addVertexToEdge", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("My3DViewerClass", "EdgeBtwnFaces", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("My3DViewerClass", "Delete Vertex", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("My3DViewerClass", "draw ray", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("My3DViewerClass", "FFD", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("My3DViewerClass", "Smooth", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("My3DViewerClass", "light X", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("My3DViewerClass", "light Y", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("My3DViewerClass", "light Z", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class My3DViewerClass: public Ui_My3DViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY3DVIEWER_H

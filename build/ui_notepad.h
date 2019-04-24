/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont;
    QAction *actionItalic;
    QAction *actionBold;
    QAction *actionUnderline;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(800, 400);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        QString iconThemeName = QString::fromUtf8("exit.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionExit->setIcon(icon5);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionFont = new QAction(Notepad);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon11);
        actionItalic = new QAction(Notepad);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon12);
        actionBold = new QAction(Notepad);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon13);
        actionUnderline = new QAction(Notepad);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon14);
        actionAbout = new QAction(Notepad);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon15);
        centralWidget = new QWidget(Notepad);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        Notepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Notepad);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Notepad);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Notepad->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFont);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFont);
        mainToolBar->addAction(actionBold);
        mainToolBar->addAction(actionItalic);
        mainToolBar->addAction(actionUnderline);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QApplication::translate("Notepad", "New", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("Notepad", "New text document", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("Notepad", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("Notepad", "Open", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("Notepad", "Open file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("Notepad", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("Notepad", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("Notepad", "Save file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("Notepad", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_as->setText(QApplication::translate("Notepad", "Save as", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave_as->setToolTip(QApplication::translate("Notepad", "Save file as", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave_as->setShortcut(QApplication::translate("Notepad", "Alt+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionPrint->setText(QApplication::translate("Notepad", "Print", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("Notepad", "Print file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPrint->setShortcut(QApplication::translate("Notepad", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("Notepad", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("Notepad", "Exit notepad", nullptr));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("Notepad", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("Notepad", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("Notepad", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("Notepad", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("Notepad", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("Notepad", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("Notepad", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("Notepad", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("Notepad", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("Notepad", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionFont->setText(QApplication::translate("Notepad", "Font", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFont->setShortcut(QApplication::translate("Notepad", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionItalic->setText(QApplication::translate("Notepad", "Italic", nullptr));
#ifndef QT_NO_TOOLTIP
        actionItalic->setToolTip(QApplication::translate("Notepad", "Italic font", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionItalic->setShortcut(QApplication::translate("Notepad", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionBold->setText(QApplication::translate("Notepad", "actionBold", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBold->setToolTip(QApplication::translate("Notepad", "Bold", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionBold->setShortcut(QApplication::translate("Notepad", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        actionUnderline->setText(QApplication::translate("Notepad", "Underline", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUnderline->setToolTip(QApplication::translate("Notepad", "Underline", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionUnderline->setShortcut(QApplication::translate("Notepad", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("Notepad", "About", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("Notepad", "About Notepad", nullptr));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("Notepad", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H

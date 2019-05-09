#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "screenshotarea.h"
#include "screeneditor.h"
#include <QMainWindow>
#include <QImage>
#include <QClipboard>
#include <QMessageBox>
#include <QDate>
#include <QTime>
#include <QTimer>
#include <QDesktopWidget>
#include <QDebug>
#include <QRect>
#include <QPixmap>
#include <QDir>
#include <QFileDialog>
#include <QTimer>
#include <QScrollBar>
#include <QSize>
#include <QAbstractScrollArea>
#include <Qt>
#include <QProcess>
#include <QFile>
#include <QRubberBand>
#include <QUrl>
#include <QDesktopServices>
#include <QFileInfo>
#include <QDomDocument>
#include <QHash>
#include <QSettings>
#include <QWidget>
#include <QObject>
#include <QTabWidget>
#include <QVariant>
 #include <QTableWidgetItem>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString osname();
    int writelog(QString logstr,QString format,int iconnum,bool NoWritetofile,QString filepath = "");
    void saveScreenshot();
    void setstyles();
    int Appendfile(QString newlogfilename, QString logstr, bool htmlstyle);
    QList<QObject*> getchildrenlist(QObject *widget, int maxrecursion, bool allwidgetslist, int currecursion);
    int logtype;
    int logtablerowcount;


    QPixmap originalPixmap;
    QString tempstr;
    QStringList iconname;
    QStringList fileformatslist;
    int curscreenCount;
    int logsstrs;
    QTimer *screentimer;
    QTimer *pixelspy;
    QTime curtime;
    QDate curdate;
    QProcess *progbeforescreen;
    QProcess *progafterlefttimer;
    QProcess *progafterleftscreen;
    QClipboard *clipboardspyvar;
    bool clipboardspyactiv;
    QString defaultcreenname;
    ScreenshotArea *Screenshotarea;
    screeneditor *myscreeneditor;
    //QPoint cursorpos;
    //int cursorcoor_x;
    //int cursorcoor_y;
    bool localarea;
    bool globalarea;
    //QFileDialog dialog;

private:
    Ui::MainWindow *ui;
    void setcreenareadefault();
    bool hidemainwindowforscreen;
    QString getfolder(QString path);
    void saveset();
    void loadset();
    bool userReallyWantsToQuit();
    QTableWidgetItem *tableItem;
    QList<QTableWidgetItem *> itemList;
    QMap <int, QString> screenfiles;


protected:
    void hideEvent(QHideEvent *event );
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButton_18_clicked();
    void on_pushButton_17_clicked();
    void on_pushButton_16_clicked();
    void on_area_save_button_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void screentimeraction();
    void pixelspyaction();
    void progbeforescreenonexit(int progexitcode, QProcess::ExitStatus progexitstatus);
    void progafterlefttimeronexit(int progexitcode, QProcess::ExitStatus progexitstatus);
    void progafterleftscreenonexit(int progexitcode, QProcess::ExitStatus progexitstatus);
    void clipboardspy();
    void ScreenshotareahideEvent(QRect areageometry);
    void logeditanchorcliked(QUrl logediturl);
    void logtablecellclicked(int row, int column );
    void logtabledoublecellclicked(QModelIndex myModelIndex);
};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::MainWindow *ui;
    void bez();
    void chet();
    void chet1();

    void chet2();
    void chet3();
    void chet4();
    void chet5();
    void chet6();
    void chet7();
    void chet8();
    void chet9();
    void chet10();
    void chet11();
    void chas();
    void chasou();
    void chasa();
    void mn();
    void e2();
    void dz();
    void Dw();
    void Tr();
    void Sr();
    void Pt();
    void Ds();
    void noch();
    void ranak();
    void dzien();
    void vechar();
    void o();

};
#endif // MAINWINDOW_H

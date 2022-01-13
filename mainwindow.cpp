#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"
#include "QTime"
#include "QDateTime"
#include "QThread"
#include "QStyleFactory"

int d;
int q=3,qq,qqq;
 QString time1,biaz,sa,as,xa,ax,zz,vv,cc;
 QString h;
 QString hh;
 QFont serifFont("Serif", 12, QFont::Bold);
 QFont serifFont2("Serif", 10, QFont::Black);
 QFont serifFont3("Calibri", 88, QFont::Bold);

QString cl1="color: rgb(222,222,45)";
QString cl2="color: #616572";
QString dd;
QString hv2;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
on_toolButton_clicked();
qApp->setStyle(QStyleFactory::create("Fusion"));
this->setStyleSheet("background-color: rgb(0,0,0);");
//this->setWindowFlags(Qt::FramelessWindowHint);
//this->setWindowFlags(Qt::WindowTitleHint);

}
MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::bez()
{

    ui->label_1->setStyleSheet(cl1);
    ui->label_2->setStyleSheet(cl1);
    ui->label_3->setStyleSheet(cl1);
    ui->label_1->setFont(serifFont);
    ui->label_2->setFont(serifFont);
    ui->label_3->setFont(serifFont);
}
void MainWindow::chet()
{    ui->label_232->setStyleSheet(cl1);
     ui->label_16->setStyleSheet(cl1);
     ui->label_17->setStyleSheet(cl1);
     ui->label_18->setStyleSheet(cl1);
     ui->label_19->setStyleSheet(cl1);
     ui->label_20->setStyleSheet(cl1);
     ui->label_21->setStyleSheet(cl1);
     ui->label_22->setStyleSheet(cl1);

      ui->label_232->setFont(serifFont);
      ui->label_16->setFont(serifFont);
      ui->label_17->setFont(serifFont);
      ui->label_18->setFont(serifFont);
      ui->label_19->setFont(serifFont);
      ui->label_20->setFont(serifFont);
      ui->label_21->setFont(serifFont);
      ui->label_22->setFont(serifFont);

}
void MainWindow::o()
{ ui->label_235->setStyleSheet(cl1);
    ui->label_236->setStyleSheet(cl1);
    ui->label_237->setStyleSheet(cl1);
    ui->label_238->setStyleSheet(cl1);

    ui->label_235->setFont(serifFont);
    ui->label_236->setFont(serifFont);
    ui->label_237->setFont(serifFont);
    ui->label_238->setFont(serifFont);
}
void MainWindow::chet1()
{ ui->label_45->setStyleSheet(cl1);
    ui->label_46->setStyleSheet(cl1);
    ui->label_47->setStyleSheet(cl1);
    ui->label_48->setStyleSheet(cl1);

    ui->label_45->setFont(serifFont);
    ui->label_46->setFont(serifFont);
    ui->label_47->setFont(serifFont);
    ui->label_48->setFont(serifFont);
}
void MainWindow::chet2()
{
    ui->label_49->setStyleSheet(cl1);
    ui->label_50->setStyleSheet(cl1);
    ui->label_51->setStyleSheet(cl1);
    ui->label_49->setFont(serifFont);
    ui->label_50->setFont(serifFont);
    ui->label_51->setFont(serifFont);
}
void MainWindow::chet3()
{
    ui->label_86->setStyleSheet(cl1);
    ui->label_87->setStyleSheet(cl1);
    ui->label_88->setStyleSheet(cl1);
    ui->label_86->setFont(serifFont);
    ui->label_87->setFont(serifFont);
    ui->label_88->setFont(serifFont);
}
void MainWindow::chet4()
{
    ui->label_56->setStyleSheet(cl1);
    ui->label_57->setStyleSheet(cl1);
    ui->label_58->setStyleSheet(cl1);
    ui->label_59->setStyleSheet(cl1);
    ui->label_60->setStyleSheet(cl1);
    ui->label_61->setStyleSheet(cl1);

    ui->label_56->setFont(serifFont);
    ui->label_57->setFont(serifFont);
    ui->label_58->setFont(serifFont);
    ui->label_59->setFont(serifFont);
    ui->label_60->setFont(serifFont);
    ui->label_61->setFont(serifFont);
}
void MainWindow::chet5()
{
    ui->label_62->setStyleSheet(cl1);
    ui->label_63->setStyleSheet(cl1);
    ui->label_64->setStyleSheet(cl1);
    ui->label_65->setStyleSheet(cl1);

    ui->label_62->setFont(serifFont);
    ui->label_63->setFont(serifFont);
    ui->label_64->setFont(serifFont);
    ui->label_65->setFont(serifFont);
}
void MainWindow::chet6()
{
    ui->label_69->setStyleSheet(cl1);
    ui->label_70->setStyleSheet(cl1);
    ui->label_73->setStyleSheet(cl1);
    ui->label_76->setStyleSheet(cl1);
    ui->label_77->setStyleSheet(cl1);

    ui->label_69->setFont(serifFont);
    ui->label_70->setFont(serifFont);
    ui->label_73->setFont(serifFont);
    ui->label_76->setFont(serifFont);
    ui->label_77->setFont(serifFont);
}
void MainWindow::chet7()
{
    ui->label_74->setStyleSheet(cl1);
    ui->label_75->setStyleSheet(cl1);
    ui->label_73->setStyleSheet(cl1);
    ui->label_77->setStyleSheet(cl1);
    ui->label_74->setFont(serifFont);
    ui->label_75->setFont(serifFont);
    ui->label_73->setFont(serifFont);
    ui->label_77->setFont(serifFont);
}
void MainWindow::chet8()
{
    ui->label_72->setStyleSheet(cl1);
    ui->label_73->setStyleSheet(cl1);
    ui->label_74->setStyleSheet(cl1);
    ui->label_75->setStyleSheet(cl1);
    ui->label_71->setStyleSheet(cl1);
    ui->label_77->setStyleSheet(cl1);

    ui->label_72->setFont(serifFont);
    ui->label_73->setFont(serifFont);
    ui->label_74->setFont(serifFont);
    ui->label_75->setFont(serifFont);
    ui->label_71->setFont(serifFont);
    ui->label_77->setFont(serifFont);
}
void MainWindow::chet9()
{
    ui->label_78->setStyleSheet(cl1);
    ui->label_79->setStyleSheet(cl1);
    ui->label_80->setStyleSheet(cl1);
    ui->label_90->setStyleSheet(cl1);
    ui->label_91->setStyleSheet(cl1);
    ui->label_92->setStyleSheet(cl1);

    ui->label_78->setFont(serifFont);
    ui->label_79->setFont(serifFont);
    ui->label_80->setFont(serifFont);
    ui->label_90->setFont(serifFont);
    ui->label_91->setFont(serifFont);
    ui->label_92->setFont(serifFont);
}
void MainWindow::chet10()
{    ui->label_78->setStyleSheet(cl1);
ui->label_79->setStyleSheet(cl1);
ui->label_96->setStyleSheet(cl1);
ui->label_93->setStyleSheet(cl1);
ui->label_94->setStyleSheet(cl1);
ui->label_95->setStyleSheet(cl1);

ui->label_78->setFont(serifFont);
ui->label_79->setFont(serifFont);
ui->label_96->setFont(serifFont);
ui->label_93->setFont(serifFont);
ui->label_94->setFont(serifFont);
ui->label_95->setFont(serifFont);}
void MainWindow::chet11()
{ui->label_101->setStyleSheet(cl1);
    ui->label_102->setStyleSheet(cl1);
    ui->label_103->setStyleSheet(cl1);
    ui->label_104->setStyleSheet(cl1);

    ui->label_101->setFont(serifFont);
    ui->label_102->setFont(serifFont);
    ui->label_103->setFont(serifFont);
    ui->label_104->setFont(serifFont);}

void MainWindow::chas()
{    ui->label_111->setStyleSheet(cl1);
ui->label_112->setStyleSheet(cl1);
ui->label_113->setStyleSheet(cl1);
ui->label_111->setFont(serifFont);
ui->label_112->setFont(serifFont);
ui->label_113->setFont(serifFont);}

void MainWindow::e2()

{    ui->label_97->setStyleSheet(cl1);
ui->label_98->setStyleSheet(cl1);
ui->label_99->setStyleSheet(cl1);
ui->label_97->setFont(serifFont);
ui->label_98->setFont(serifFont);
ui->label_99->setFont(serifFont);}
void MainWindow::mn()
{    ui->label_105->setStyleSheet(cl1);
     ui->label_106->setStyleSheet(cl1);
     ui->label_107->setStyleSheet(cl1);
     ui->label_108->setStyleSheet(cl1);
     ui->label_109->setStyleSheet(cl1);
     ui->label_110->setStyleSheet(cl1);
     ui->label_239->setStyleSheet(cl1);

     ui->label_105->setFont(serifFont);
     ui->label_106->setFont(serifFont);
     ui->label_107->setFont(serifFont);
     ui->label_108->setFont(serifFont);
     ui->label_109->setFont(serifFont);
     ui->label_110->setFont(serifFont);
     ui->label_239->setFont(serifFont);
}
void MainWindow::dz()

{ui->label_94->setStyleSheet(cl1);
ui->label_95->setStyleSheet(cl1);
ui->label_96->setStyleSheet(cl1);
ui->label_97->setStyleSheet(cl1);
ui->label_98->setStyleSheet(cl1);


ui->label_94->setFont(serifFont);
ui->label_95->setFont(serifFont);
ui->label_96->setFont(serifFont);
ui->label_97->setFont(serifFont);
ui->label_98->setFont(serifFont);
}
void MainWindow::Dw()
{
    ui->label_34->setStyleSheet(cl1);
    ui->label_35->setStyleSheet(cl1);
    ui->label_36->setStyleSheet(cl1);
    ui->label_37->setStyleSheet(cl1);
    ui->label_38->setStyleSheet(cl1);
    ui->label_39->setStyleSheet(cl1);
    ui->label_40->setStyleSheet(cl1);
    ui->label_41->setStyleSheet(cl1);

    ui->label_34->setFont(serifFont);
    ui->label_35->setFont(serifFont);
    ui->label_36->setFont(serifFont);
    ui->label_37->setFont(serifFont);
    ui->label_38->setFont(serifFont);
    ui->label_39->setFont(serifFont);
    ui->label_40->setFont(serifFont);
    ui->label_41->setFont(serifFont);

}
void MainWindow::Pt()
{
    ui->label_5->setStyleSheet(cl1);
    ui->label_6->setStyleSheet(cl1);
    ui->label_7->setStyleSheet(cl1);
    ui->label_8->setStyleSheet(cl1);

    ui->label_5->setFont(serifFont);
    ui->label_6->setFont(serifFont);
    ui->label_7->setFont(serifFont);
    ui->label_8->setFont(serifFont);


}
void MainWindow::Sr()
{
    ui->label_42->setStyleSheet(cl1);
    ui->label_43->setStyleSheet(cl1);
    ui->label_44->setStyleSheet(cl1);
    ui->label_233->setStyleSheet(cl1);
    ui->label_55->setStyleSheet(cl1);
    ui->label_234->setStyleSheet(cl1);

    ui->label_42->setFont(serifFont);
    ui->label_43->setFont(serifFont);
    ui->label_233->setFont(serifFont);
    ui->label_44->setFont(serifFont);
    ui->label_55->setFont(serifFont);
    ui->label_234->setFont(serifFont);
}
    void MainWindow::Tr()
    {
        ui->label_12->setStyleSheet(cl1);
        ui->label_13->setStyleSheet(cl1);
        ui->label_14->setStyleSheet(cl1);
        ui->label_37->setStyleSheet(cl1);
        ui->label_38->setStyleSheet(cl1);
        ui->label_39->setStyleSheet(cl1);
        ui->label_40->setStyleSheet(cl1);
        ui->label_41->setStyleSheet(cl1);

        ui->label_12->setFont(serifFont);
        ui->label_13->setFont(serifFont);
        ui->label_14->setFont(serifFont);
        ui->label_37->setFont(serifFont);
        ui->label_38->setFont(serifFont);
        ui->label_39->setFont(serifFont);
        ui->label_40->setFont(serifFont);
        ui->label_41->setFont(serifFont);
    }
void MainWindow::chasou()
{    ui->label_111->setStyleSheet(cl1);
     ui->label_112->setStyleSheet(cl1);
     ui->label_113->setStyleSheet(cl1);
     ui->label_111->setFont(serifFont);
     ui->label_112->setFont(serifFont);
     ui->label_113->setFont(serifFont);
      ui->label_114->setStyleSheet(cl1);
      ui->label_115->setStyleSheet(cl1);
      ui->label_114->setFont(serifFont);
      ui->label_115->setFont(serifFont);}
void MainWindow::chasa()
{
         ui->label_111->setStyleSheet(cl1);
         ui->label_112->setStyleSheet(cl1);
         ui->label_113->setStyleSheet(cl1);
         ui->label_116->setStyleSheet(cl1);

         ui->label_111->setFont(serifFont);
         ui->label_112->setFont(serifFont);
         ui->label_113->setFont(serifFont);
         ui->label_116->setFont(serifFont);

}
void MainWindow::Ds()
{
    ui->label_9 ->setStyleSheet(cl1);
    ui->label_10->setStyleSheet(cl1);
    ui->label_11->setStyleSheet(cl1);
    ui->label_1112->setStyleSheet(cl1);
    ui->label_22->setStyleSheet(cl1);
    ui->label_232->setStyleSheet(cl1);


    ui->label_9->setFont(serifFont);
    ui->label_10->setFont(serifFont);
    ui->label_11->setFont(serifFont);
    ui->label_1112->setFont(serifFont);
    ui->label_22->setFont(serifFont);
    ui->label_232->setFont(serifFont);

}
void MainWindow::on_toolButton_2_clicked()
{
    if(hv2.toInt()==33&&qqq==0)
   {
        ui->label_238->setText("卐");

   ui->label_238->setFont(serifFont3);
   }
   else
   {ui->label_238->setText("Ь");
        ui->label_238->setFont(serifFont2);

   }
    ui->label_1->setStyleSheet(cl2);
    ui->label_2->setStyleSheet(cl2);
    ui->label_3->setStyleSheet(cl2);
    ui->label_4->setStyleSheet(cl2);
    ui->label_5->setStyleSheet(cl2);
    ui->label_6->setStyleSheet(cl2);
    ui->label_7->setStyleSheet(cl2);
    ui->label_8->setStyleSheet(cl2);
    ui->label_9->setStyleSheet(cl2);
    ui->label_10->setStyleSheet(cl2);
    ui->label_11->setStyleSheet(cl2);
    ui->label_12->setStyleSheet(cl2);
    ui->label_13->setStyleSheet(cl2);
    ui->label_14->setStyleSheet(cl2);
    ui->label_15->setStyleSheet(cl2);
    ui->label_16->setStyleSheet(cl2);
    ui->label_17->setStyleSheet(cl2);
    ui->label_18->setStyleSheet(cl2);
    ui->label_19->setStyleSheet(cl2);
    ui->label_20->setStyleSheet(cl2);
    ui->label_21->setStyleSheet(cl2);
    ui->label_22->setStyleSheet(cl2);
    ui->label_34->setStyleSheet(cl2);
    ui->label_35->setStyleSheet(cl2);
    ui->label_36->setStyleSheet(cl2);
    ui->label_37->setStyleSheet(cl2);
    ui->label_38->setStyleSheet(cl2);
    ui->label_39->setStyleSheet(cl2);
    ui->label_40->setStyleSheet(cl2);
    ui->label_41->setStyleSheet(cl2);
    ui->label_42->setStyleSheet(cl2);
    ui->label_43->setStyleSheet(cl2);
    ui->label_44->setStyleSheet(cl2);
    ui->label_45->setStyleSheet(cl2);
    ui->label_46->setStyleSheet(cl2);
    ui->label_47->setStyleSheet(cl2);
    ui->label_48->setStyleSheet(cl2);
    ui->label_49->setStyleSheet(cl2);
    ui->label_50->setStyleSheet(cl2);
    ui->label_51->setStyleSheet(cl2);
    ui->label_52->setStyleSheet(cl2);
    ui->label_53->setStyleSheet(cl2);
    ui->label_53->setStyleSheet(cl2);
    ui->label_54->setStyleSheet(cl2);
    ui->label_55->setStyleSheet(cl2);
    ui->label_56->setStyleSheet(cl2);
    ui->label_57->setStyleSheet(cl2);
    ui->label_58->setStyleSheet(cl2);
    ui->label_59->setStyleSheet(cl2);
    ui->label_60->setStyleSheet(cl2);
    ui->label_61->setStyleSheet(cl2);
    ui->label_61->setStyleSheet(cl2);
    ui->label_62->setStyleSheet(cl2);
    ui->label_63->setStyleSheet(cl2);
    ui->label_64->setStyleSheet(cl2);
    ui->label_65->setStyleSheet(cl2);
    ui->label_66->setStyleSheet(cl2);
    ui->label_67->setStyleSheet(cl2);
    ui->label_68->setStyleSheet(cl2);
    ui->label_69->setStyleSheet(cl2);
    ui->label_70->setStyleSheet(cl2);
    ui->label_71->setStyleSheet(cl2);
    ui->label_72->setStyleSheet(cl2);
    ui->label_73->setStyleSheet(cl2);
    ui->label_74->setStyleSheet(cl2);
    ui->label_75->setStyleSheet(cl2);
    ui->label_76->setStyleSheet(cl2);
    ui->label_77->setStyleSheet(cl2);
    ui->label_78->setStyleSheet(cl2);
    ui->label_79->setStyleSheet(cl2);
    ui->label_80->setStyleSheet(cl2);
    ui->label_81->setStyleSheet(cl2);
    ui->label_82->setStyleSheet(cl2);
    ui->label_83->setStyleSheet(cl2);
    ui->label_84->setStyleSheet(cl2);
    ui->label_85->setStyleSheet(cl2);
    ui->label_86->setStyleSheet(cl2);
    ui->label_87->setStyleSheet(cl2);
    ui->label_88->setStyleSheet(cl2);
    ui->label_89->setStyleSheet(cl2);
    ui->label_90->setStyleSheet(cl2);
    ui->label_91->setStyleSheet(cl2);
    ui->label_92->setStyleSheet(cl2);
    ui->label_93->setStyleSheet(cl2);
    ui->label_94->setStyleSheet(cl2);
    ui->label_95->setStyleSheet(cl2);
    ui->label_96->setStyleSheet(cl2);
    ui->label_97->setStyleSheet(cl2);
    ui->label_98->setStyleSheet(cl2);
    ui->label_99->setStyleSheet(cl2);
    ui->label_100->setStyleSheet(cl2);
    ui->label_101->setStyleSheet(cl2);
    ui->label_102->setStyleSheet(cl2);
    ui->label_103->setStyleSheet(cl2);
    ui->label_104->setStyleSheet(cl2);
    ui->label_105->setStyleSheet(cl2);
    ui->label_106->setStyleSheet(cl2);
    ui->label_107->setStyleSheet(cl2);
    ui->label_108->setStyleSheet(cl2);
    ui->label_109->setStyleSheet(cl2);
    ui->label_110->setStyleSheet(cl2);
    ui->label_111->setStyleSheet(cl2);
    ui->label_112->setStyleSheet(cl2);
    ui->label_113->setStyleSheet(cl2);
    ui->label_114->setStyleSheet(cl2);
    ui->label_115->setStyleSheet(cl2);
    ui->label_116->setStyleSheet(cl2);
    ui->label_117->setStyleSheet(cl2);
    ui->label_118->setStyleSheet(cl2);
    ui->label_119->setStyleSheet(cl2);
    ui->label_120->setStyleSheet(cl2);
    ui->label_121->setStyleSheet(cl2);
    ui->label_1112->setStyleSheet(cl2);
    ui->label_232->setStyleSheet(cl2);
    ui->label_233->setStyleSheet(cl2);
    ui->label_234->setStyleSheet(cl2);
    ui->label_235->setStyleSheet(cl2);
    ui->label_236->setStyleSheet(cl2);
    ui->label_237->setStyleSheet(cl2);
    ui->label_238->setStyleSheet(cl2);
    ui->label_239->setStyleSheet(cl2);
    ui->label_240->setStyleSheet(cl2);
    ui->label_241->setStyleSheet(cl2);
        ui->label_243->setStyleSheet(cl2);
            ui->label_244->setStyleSheet(cl2);
                ui->label_245->setStyleSheet(cl2);
                    ui->label_246->setStyleSheet(cl2);
                        ui->label_247->setStyleSheet(cl2);
                            ui->label_248->setStyleSheet(cl2);
                                ui->label_249->setStyleSheet(cl2);
                                    ui->label_250->setStyleSheet(cl2);
                                        ui->label_251->setStyleSheet(cl2);
                                            ui->label_252->setStyleSheet(cl2);
                                                ui->label_242->setStyleSheet(cl2);




    ui->label_1->setFont(serifFont2);
    ui->label_2->setFont(serifFont2);
    ui->label_3->setFont(serifFont2);
    ui->label_4->setFont(serifFont2);
    ui->label_5->setFont(serifFont2);
    ui->label_6->setFont(serifFont2);
    ui->label_7->setFont(serifFont2);
    ui->label_8->setFont(serifFont2);
    ui->label_9->setFont(serifFont2);
    ui->label_10->setFont(serifFont2);
    ui->label_11->setFont(serifFont2);
    ui->label_12->setFont(serifFont2);
    ui->label_13->setFont(serifFont2);
    ui->label_14->setFont(serifFont2);
    ui->label_15->setFont(serifFont2);
    ui->label_16->setFont(serifFont2);
    ui->label_17->setFont(serifFont2);
    ui->label_18->setFont(serifFont2);
    ui->label_19->setFont(serifFont2);
    ui->label_20->setFont(serifFont2);
    ui->label_21->setFont(serifFont2);
    ui->label_22->setFont(serifFont2);
    ui->label_34->setFont(serifFont2);
    ui->label_35->setFont(serifFont2);
    ui->label_36->setFont(serifFont2);
    ui->label_37->setFont(serifFont2);
    ui->label_38->setFont(serifFont2);
    ui->label_39->setFont(serifFont2);
    ui->label_40->setFont(serifFont2);
    ui->label_41->setFont(serifFont2);
    ui->label_42->setFont(serifFont2);
    ui->label_43->setFont(serifFont2);
    ui->label_44->setFont(serifFont2);
    ui->label_45->setFont(serifFont2);
    ui->label_46->setFont(serifFont2);
    ui->label_47->setFont(serifFont2);
    ui->label_48->setFont(serifFont2);
    ui->label_49->setFont(serifFont2);
    ui->label_50->setFont(serifFont2);
    ui->label_51->setFont(serifFont2);
    ui->label_52->setFont(serifFont2);
    ui->label_53->setFont(serifFont2);
    ui->label_53->setFont(serifFont2);
    ui->label_54->setFont(serifFont2);
    ui->label_55->setFont(serifFont2);
    ui->label_56->setFont(serifFont2);
    ui->label_57->setFont(serifFont2);
    ui->label_58->setFont(serifFont2);
    ui->label_59->setFont(serifFont2);
    ui->label_60->setFont(serifFont2);
    ui->label_61->setFont(serifFont2);
    ui->label_61->setFont(serifFont2);
    ui->label_62->setFont(serifFont2);
    ui->label_63->setFont(serifFont2);
    ui->label_64->setFont(serifFont2);
    ui->label_65->setFont(serifFont2);
    ui->label_66->setFont(serifFont2);
    ui->label_67->setFont(serifFont2);
    ui->label_68->setFont(serifFont2);
    ui->label_69->setFont(serifFont2);
    ui->label_70->setFont(serifFont2);
    ui->label_71->setFont(serifFont2);
    ui->label_72->setFont(serifFont2);
    ui->label_73->setFont(serifFont2);
    ui->label_74->setFont(serifFont2);
    ui->label_75->setFont(serifFont2);
    ui->label_76->setFont(serifFont2);
    ui->label_77->setFont(serifFont2);
    ui->label_78->setFont(serifFont2);
    ui->label_79->setFont(serifFont2);
    ui->label_80->setFont(serifFont2);
    ui->label_81->setFont(serifFont2);
    ui->label_82->setFont(serifFont2);
    ui->label_83->setFont(serifFont2);
    ui->label_84->setFont(serifFont2);
    ui->label_85->setFont(serifFont2);
    ui->label_86->setFont(serifFont2);
    ui->label_87->setFont(serifFont2);
    ui->label_88->setFont(serifFont2);
    ui->label_89->setFont(serifFont2);
    ui->label_90->setFont(serifFont2);
    ui->label_91->setFont(serifFont2);
    ui->label_92->setFont(serifFont2);
    ui->label_93->setFont(serifFont2);
    ui->label_94->setFont(serifFont2);
    ui->label_95->setFont(serifFont2);
    ui->label_96->setFont(serifFont2);
    ui->label_97->setFont(serifFont2);
    ui->label_98->setFont(serifFont2);
    ui->label_99->setFont(serifFont2);
    ui->label_100->setFont(serifFont2);
    ui->label_101->setFont(serifFont2);
    ui->label_102->setFont(serifFont2);
    ui->label_103->setFont(serifFont2);
    ui->label_104->setFont(serifFont2);
    ui->label_105->setFont(serifFont2);
    ui->label_106->setFont(serifFont2);
    ui->label_107->setFont(serifFont2);
    ui->label_108->setFont(serifFont2);
    ui->label_109->setFont(serifFont2);
    ui->label_110->setFont(serifFont2);
    ui->label_111->setFont(serifFont2);
    ui->label_112->setFont(serifFont2);
    ui->label_113->setFont(serifFont2);
    ui->label_114->setFont(serifFont2);
    ui->label_115->setFont(serifFont2);
    ui->label_116->setFont(serifFont2);
    ui->label_117->setFont(serifFont2);
    ui->label_118->setFont(serifFont2);
    ui->label_119->setFont(serifFont2);
    ui->label_120->setFont(serifFont2);
    ui->label_121->setFont(serifFont2);
    ui->label_1112->setFont(serifFont2);
    ui->label_232->setFont(serifFont2);
    ui->label_233->setFont(serifFont2);
    ui->label_234->setFont(serifFont2);
    ui->label_235->setFont(serifFont2);
    ui->label_236->setFont(serifFont2);
    ui->label_237->setFont(serifFont2);
    ui->label_239->setFont(serifFont2);
    ui->label_240->setFont(serifFont2);
    ui->label_241->setFont(serifFont2);
    ui->label_243->setFont(serifFont2);
        ui->label_244->setFont(serifFont2);
            ui->label_245->setFont(serifFont2);
                ui->label_246->setFont(serifFont2);
                    ui->label_247->setFont(serifFont2);
                        ui->label_248->setFont(serifFont2);
                            ui->label_249->setFont(serifFont2);
                                ui->label_250->setFont(serifFont2);
                                    ui->label_251->setFont(serifFont2);
                                        ui->label_252->setFont(serifFont2);
                                        ui->label_242->setFont(serifFont2);

}
void MainWindow::ranak()
{ui->label_246->setStyleSheet(cl1);
    ui->label_248->setStyleSheet(cl1);
    ui->label_244->setStyleSheet(cl1);
    ui->label_245->setStyleSheet(cl1);
    ui->label_248->setFont(serifFont);
    ui->label_244->setFont(serifFont);
    ui->label_245->setFont(serifFont);
    ui->label_248->setFont(serifFont);}
void MainWindow::dzien()
{ui->label_117->setStyleSheet(cl1);
    ui->label_118->setStyleSheet(cl1);
    ui->label_119->setStyleSheet(cl1);
    ui->label_117->setFont(serifFont);
    ui->label_118->setFont(serifFont);
    ui->label_119->setFont(serifFont);}
void MainWindow::noch()
{ui->label_250->setStyleSheet(cl1);
    ui->label_247->setStyleSheet(cl1);
    ui->label_249->setStyleSheet(cl1);
    ui->label_242->setStyleSheet(cl1);
    ui->label_250->setFont(serifFont);
    ui->label_247->setFont(serifFont);
    ui->label_249->setFont(serifFont);
    ui->label_242->setFont(serifFont);}
void MainWindow::vechar()
{   ui->label_120->setStyleSheet(cl1);
    ui->label_121->setStyleSheet(cl1);
    ui->label_240->setStyleSheet(cl1);
    ui->label_251->setStyleSheet(cl1);
    ui->label_243->setStyleSheet(cl1);
    ui->label_241->setStyleSheet(cl1);

    ui->label_120->setFont(serifFont);
    ui->label_121->setFont(serifFont);
    ui->label_240->setFont(serifFont);
    ui->label_251->setFont(serifFont);
    ui->label_243->setFont(serifFont);
    ui->label_241->setFont(serifFont);}
void MainWindow::on_toolButton_clicked()
{







    QTimer *t = new QTimer(this);
    t->setInterval(1000);
    connect(t, &QTimer::timeout, [&]() {
      time1 = QTime::currentTime().toString();
    //  time1="19:33:00";
           QString hv =time1;


           QString gd =time1;
           gd.remove(2,6);
           q=gd.toInt();




           hv.remove(0,3);
            hv2 =hv;
           hv2.remove(2,6);
           qq==hv2.toInt();


         QString s =time1;
         s.remove(0,6);
         qqq==s.toInt();



if(hv2.toInt()==45||hv2.toInt()>=45&&hv2.toInt()<50)
{
    d=gd.toInt()+1;
      dd =QString::number(d);
      on_toolButton_2_clicked();

      if  (dd.toInt()==0&&hv2.toInt()<5)
      {e2();mn();}
      if  (  dd.toInt()==1)
      {chet1();}
      if  (  dd.toInt()==2)
     {chet2();}
      if  (  dd.toInt()==3)
      {chet3();}
      if  (  dd.toInt()==4)
      {chet4();
      }
      if  (  dd.toInt()==5)
      {chet5();}
      if  (  dd.toInt()==6)
      {chet6();}
      if  (  dd.toInt()==7)
      {chet7();}
      if  (  dd.toInt()==8)
      {chet8();}
      if  (  dd.toInt()==9)
      {chet9();}
      if  (  dd.toInt()==10)
      {chet10();}
      if  (  dd.toInt()==11)
      {chet11();mn();}
      if  (  dd.toInt()==12)
      {e2();mn();}
      if  (  dd.toInt()==13)
      {chet1();}
      if  (  dd.toInt()==14)
      {chet2();}
      if  (  dd.toInt()==15)
      {chet3();}
      if  (  dd.toInt()==16)
      {chet4();}
      if  (  dd.toInt()==17)
      {chet5();}
      if  (  dd.toInt()==18)
      {chet6();}
      if  (  dd.toInt()==19)
      {chet7();}
      if  (  dd.toInt()==20)
      {chet8();}
      if  (  dd.toInt()==21)
      {chet9();}
      if  (  dd.toInt()==22)
      {chet10();}
      if  (  dd.toInt()==23)
      {chet11();mn();}


    bez();
    chet();if(q==1||q==2||q==3||q==4&&hv2.toInt()<10||q==23)noch(); else if(q==5||q==6||q==7||q==8||q==9||q==10||q==11&&hv2.toInt()<10||q==4&&hv2.toInt()>10)
        ranak();
        else if(q==12||q==16||q==13||q==14||q==15||q==17&&hv2.toInt()<10||q==11&&hv2.toInt()>10)
         dzien();
        else if(q==18||q==19||q==20||q==21||q==22||q==23&&hv2.toInt()<10||q==17&&hv2.toInt()>10)
            vechar(); else if(qq==0&&hv2.toInt()<5){noch();}
        else
            noch();
}
else if(hv2.toInt()==55||hv2.toInt()>55)
{

    d=gd.toInt()+1;
      dd =QString::number(d);
      on_toolButton_2_clicked();

      if  (dd.toInt()==0&&hv2.toInt()<5)
      {e2();mn();}
      if  (  dd.toInt()==1)
      {chet1();}
      if  (  dd.toInt()==2)
     {chet2();}
      if  (  dd.toInt()==3)
      {chet3();}
      if  (  dd.toInt()==4)
      {chet4();}
      if  (  dd.toInt()==5)
      {chet5();}
      if  (  dd.toInt()==6)
      {chet6();}
      if  (  dd.toInt()==7)
      {chet7();}
      if  (  dd.toInt()==8)
      {chet8();}
      if  (  dd.toInt()==9)
      {chet9();}
      if  (  dd.toInt()==10)
      {chet10();}
      if  (  dd.toInt()==11)
      {chet11();mn();}
      if  (  dd.toInt()==12)
      {e2();mn();}
      if  (  dd.toInt()==13)
      {chet1();}
      if  (  dd.toInt()==14)
      {chet2();}
      if  (  dd.toInt()==15)
      {chet3();}
      if  (  dd.toInt()==16)
      {chet4();}
      if  (  dd.toInt()==17)
      {chet5();}
      if  (  dd.toInt()==18)
      {chet6();}
      if  (  dd.toInt()==19)
      {chet7();}
      if  (  dd.toInt()==20)
      {chet8();}
      if  (  dd.toInt()==21)
      {chet9();}
      if  (  dd.toInt()==22)
      {chet10();}
      if  (  dd.toInt()==23)
      {chet11();mn();}

    bez();
    Pt();if(q==1||q==2||q==3||q==4&&hv2.toInt()<10||q==23)noch(); else if(q==5||q==6||q==7||q==8||q==9||q==10||q==11&&hv2.toInt()<10||q==4&&hv2.toInt()>10)
        ranak();
        else if(q==12||q==16||q==13||q==14||q==15||q==17&&hv2.toInt()<10||q==11&&hv2.toInt()>10)
         dzien();
        else if(q==18||q==19||q==20||q==21||q==22||q==23&&hv2.toInt()<10||q==17&&hv2.toInt()>10)
            vechar(); else if(qq==0&&hv2.toInt()<5){noch();}
        else
            noch();
}
else if(hv2.toInt()==50||hv2.toInt()>=50&&hv2.toInt()<55)
{
    d=gd.toInt()+1;
      dd =QString::number(d);
      on_toolButton_2_clicked();

      if  (dd.toInt()==0&&hv2.toInt()<5)
      { e2();mn();}
      if  (  dd.toInt()==1)
      {
      chet1();}
      if  (  dd.toInt()==2)
     {
          chet2();}
      if  (  dd.toInt()==3)
      {
      chet3();}
      if  (  dd.toInt()==4)
      {
      chet4();
      }
      if  (  dd.toInt()==5)
      {
      chet5();}
      if  (  dd.toInt()==6)
      {
      chet6();}
      if  (  dd.toInt()==7)
      {
      chet7();}
      if  (  dd.toInt()==8)
      {
      chet8();}
      if  (  dd.toInt()==9)
      {
      chet9();}
      if  (  dd.toInt()==10)
      {
      chet10();}
      if  (  dd.toInt()==11)
      {
      chet11();
      mn();
      }
      if  (  dd.toInt()==12)
      {
      e2();
      mn();}
      if  (  dd.toInt()==13)
      {
          chet1();
      }
      if  (  dd.toInt()==14)
      {
          chet2();
          }
      if  (  dd.toInt()==15)
      {
          chet3();
      }
      if  (  dd.toInt()==16)
      {
          chet4();
          }
      if  (  dd.toInt()==17)
      {
      chet5();}
      if  (  dd.toInt()==18)
      {
      chet6();}
      if  (  dd.toInt()==19)
      {
      chet7();}
      if  (  dd.toInt()==20)
      {
      chet8();}
      if  (  dd.toInt()==21)
      {
      chet9();}
      if  (  dd.toInt()==22)
      {
      chet10();}
      if  (  dd.toInt()==23)
      {
 chet11();
      mn();}
    biaz="бяз чвэрці "+sa;
    bez();
   Ds();if(q==1||q==2||q==3||q==4&&hv2.toInt()<10||q==23)noch(); else if(q==5||q==6||q==7||q==8||q==9||q==10||q==11&&hv2.toInt()<10||q==4&&hv2.toInt()>10)
       ranak();
       else if(q==12||q==16||q==13||q==14||q==15||q==17&&hv2.toInt()<10||q==11&&hv2.toInt()>10)
        dzien();
       else if(q==18||q==19||q==20||q==21||q==22||q==23&&hv2.toInt()<10||q==17&&hv2.toInt()>10)
           vechar(); else if(qq==0&&hv2.toInt()<5){noch();}
       else
           noch();
}
else if(hv2.toInt()==30||hv2.toInt()>=30&&hv2.toInt()<40)
{
     d=gd.toInt()+1;
     dd =QString::number(d);
     on_toolButton_2_clicked();

     if  (dd.toInt()==0&&hv2.toInt()<5)
     { e2();mn();}
     if  (  dd.toInt()==1)
     {
     chet1();}
     if  (  dd.toInt()==2)
    {
         chet2();}
     if  (  dd.toInt()==3)
     {
     chet3();}
     if  (  dd.toInt()==4)
     {
     chet4();
     }
     if  (  dd.toInt()==5)
     {
     chet5();}
     if  (  dd.toInt()==6)
     {
     chet6();}
     if  (  dd.toInt()==7)
     {
     chet7();}
     if  (  dd.toInt()==8)
     {
     chet8();}
     if  (  dd.toInt()==9)
     {
     chet9();}
     if  (  dd.toInt()==10)
     {
     chet10();}
     if  (  dd.toInt()==11)
     {
     chet11();
     mn();
     }
     if  (  dd.toInt()==12)
     {
     e2();
     mn();}
     if  (  dd.toInt()==13)
     {
         chet1();
     }
     if  (  dd.toInt()==14)
     {
         chet2();
         }
     if  (  dd.toInt()==15)
     {
         chet3();
     }
     if  (  dd.toInt()==16)
     {
         chet4();
         }
     if  (  dd.toInt()==17)
     {
     chet5();}
     if  (  dd.toInt()==18)
     {
     chet6();}
     if  (  dd.toInt()==19)
     {

     chet7();}
     if  (  dd.toInt()==20)
     {
     chet8();}
     if  (  dd.toInt()==21)
     {
     chet9();}
     if  (  dd.toInt()==22)
     {
     chet10();}
     if  (  dd.toInt()==23)
     {
chet11();
mn();
   }
bez();
Tr();if(q==1||q==2||q==3||q==4&&hv2.toInt()<10||q==23)
    noch();
else if(q==5||q==6||q==7||q==8||q==9||q==10||q==11&&hv2.toInt()<10||q==4&&hv2.toInt()>10)
    ranak();
    else if(q==12||q==16||q==13||q==14||q==15||q==17&&hv2.toInt()<10||q==11&&hv2.toInt()>10)
     dzien();
    else if(q==18||q==19||q==20||q==21||q==22||q==23&&hv2.toInt()<10||q==17&&hv2.toInt()>10)
        vechar(); else if(qq==0&&hv2.toInt()<5){noch();}
    else
        noch();
     biaz="палова "+sa+"ага  ";
}
else if(hv2.toInt()==0||hv2.toInt()<20)
{

     d=gd.toInt();
     dd =QString::number(d);
     on_toolButton_2_clicked();

     if  (dd.toInt()==0&&hv2.toInt()<5)
     { e2();mn();}
     if  (  dd.toInt()==1)
     {
     chet1();}
     if  (  dd.toInt()==2)
    {
         chet2();}
     if  (  dd.toInt()==3)
     {
     chet3();}
     if  (  dd.toInt()==4)
     {
     chet4();
     }
     if  (  dd.toInt()==5)
     {
     chet5();}
     if  (  dd.toInt()==6)
     {
     chet6();}
     if  (  dd.toInt()==7)
     {
     chet7();}
     if  (  dd.toInt()==8)
     {
     chet8();}
     if  (  dd.toInt()==9)
     {
     chet9();}
     if  (  dd.toInt()==10)
     {
     chet10();}
     if  (  dd.toInt()==11)
     {
     chet11();
     mn();
     }
     if  (  dd.toInt()==12)
     {
     e2();
     mn();}
     if  (  dd.toInt()==13)
     {
         chet1();
     }
     if  (  dd.toInt()==14)
     {
         chet2();
         }
     if  (  dd.toInt()==15)
     {
         chet3();
     }
     if  (  dd.toInt()==16)
     {
         chet4();
         }
     if  (  dd.toInt()==17)
     {
     chet5();}
     if  (  dd.toInt()==18)
     {
     chet6();}
     if  (  dd.toInt()==19)
     {
     chet7();}
     if  (  dd.toInt()==20)
     {
     chet8();}
     if  (  dd.toInt()==21)
     {
     chet9();}
     if  (  dd.toInt()==22)
     {
     chet10();}
     if  (  dd.toInt()==23)
     {
chet11();
mn();
   }
     if(q==1||q==2||q==3||q==4&&hv2.toInt()<10||q==23)noch(); else if(q==5||q==6||q==7||q==8||q==9||q==10||q==11&&hv2.toInt()<10||q==4&&hv2.toInt()>10)
             ranak();
             else if(q==12||q==16||q==13||q==14||q==15||q==17&&hv2.toInt()<10||q==11&&hv2.toInt()>10)
              dzien();
             else if(q==18||q==19||q==20||q==21||q==22||q==23&&hv2.toInt()<10||q==17&&hv2.toInt()>10)
                 vechar(); else if(qq==0&&hv2.toInt()<5){noch();}
             else
                 noch();
  //   biaz="палова "+sa+"ага  ";
}
/*else  if  (hv2.toInt()==0)
{ biaz=as+" гадзіны";
}*/

else  if  (hv2.toInt()==20||hv2.toInt()>=20&&hv2.toInt()<30)
{

    d=gd.toInt()+1;
      dd =QString::number(d);
      on_toolButton_2_clicked();

      if  (dd.toInt()==0&&hv2.toInt()<5)
      { e2();mn();}
      if  (  dd.toInt()==1)
      {
      chet1();}
      if  (  dd.toInt()==2)
     {
          chet2();}
      if  (  dd.toInt()==3)
      {
      chet3();}
      if  (  dd.toInt()==4)
      {
      chet4();
      }
      if  (  dd.toInt()==5)
      {
      chet5();}
      if  (  dd.toInt()==6)
      {
      chet6();}
      if  (  dd.toInt()==7)
      {
      chet7();}
      if  (  dd.toInt()==8)
      {
      chet8();}
      if  (  dd.toInt()==9)
      {
      chet9();}
      if  (  dd.toInt()==10)
      {
      chet10();}
      if  (  dd.toInt()==11)
      {
      chet11();
      mn();
      }
      if  (  dd.toInt()==12)
      {
      e2();
      mn();}
      if  (  dd.toInt()==13)
      {
          chet1();
      }
      if  (  dd.toInt()==14)
      {
          chet2();
          }
      if  (  dd.toInt()==15)
      {
          chet3();
      }
      if  (  dd.toInt()==16)
      {
          chet4();
          }
      if  (  dd.toInt()==17)
      {
      chet5();}
      if  (  dd.toInt()==18)
      {
      chet6();}
      if  (  dd.toInt()==19)
      {
      chet7();}
      if  (  dd.toInt()==20)
      {
      chet8();}
      if  (  dd.toInt()==21)
      {
      chet9();}
      if  (  dd.toInt()==22)
      {
      chet10();}
      if  (  dd.toInt()==23)
      {
 chet11();
      mn();}
bez();
Sr();
if(q==1||q==2||q==3||q==4&&hv2.toInt()<10||q==23)
    noch();
else if(q==5||q==6||q==7||q==8||q==9||q==10||q==11&&hv2.toInt()<10||q==4&&hv2.toInt()>10)
        ranak();
        else if(q==12||q==16||q==13||q==14||q==15||q==17&&hv2.toInt()<10||q==11&&hv2.toInt()>10)
         dzien();
        else if(q==18||q==19||q==20||q==21||q==22||q==23&&hv2.toInt()<10||q==17&&hv2.toInt()>10)
            vechar(); else if(qq==0&&hv2.toInt()<5){noch();}
        else
            noch();
    biaz="дзьваццать хвілін "+sa+"ага";
}
else   if  (hv2.toInt()==40||hv2.toInt()>=40&&hv2.toInt()<45)
{   d=gd.toInt()+1;
   dd =QString::number(d);
   on_toolButton_2_clicked();

   if  (dd.toInt()==0&&hv2.toInt()<5)
   { e2();mn();}
   if  (  dd.toInt()==1)
   {
   chet1();}
   if  (  dd.toInt()==2)
  {
       chet2();}
   if  (  dd.toInt()==3)
   {
   chet3();}
   if  (  dd.toInt()==4)
   {
   chet4();
   }
   if  (  dd.toInt()==5)
   {
   chet5();}
   if  (  dd.toInt()==6)
   {
   chet6();}
   if  (  dd.toInt()==7)
   {
   chet7();}
   if  (  dd.toInt()==8)
   {
   chet8();}
   if  (  dd.toInt()==9)
   {
   chet9();}
   if  (  dd.toInt()==10)
   {
   chet10();}
   if  (  dd.toInt()==11)
   {
   chet11();
   mn();}
   if  (  dd.toInt()==12)
   {
   e2();
   mn();}
   if  (  dd.toInt()==13)
   {
       chet1();
   }
   if  (  dd.toInt()==14)
   {
       chet2();
       }
   if  (  dd.toInt()==15)
   {
       chet3();
   }
   if  (  dd.toInt()==16)
   {
       chet4();
       }
   if  (  dd.toInt()==17)
   {
   chet5();}
   if  (  dd.toInt()==18)
   {
   chet6();}
   if  (  dd.toInt()==19)
   {
   chet7();}
   if  (  dd.toInt()==20)
   {
   chet8();}
   if  (  dd.toInt()==21)
   {
   chet9();}
   if  (  dd.toInt()==22)
   {
   chet10();}
   if  (  dd.toInt()==23)
   {
chet11();
   mn();}
   bez();
   Dw();
   if(q==1||q==2||q==3||q==4&&hv2.toInt()<10||q==23)noch(); else if(q==5||q==6||q==7||q==8||q==9||q==10||q==11&&hv2.toInt()<10||q==4&&hv2.toInt()>10)
           ranak();
           else if(q==12||q==16||q==13||q==14||q==15||q==17&&hv2.toInt()<10||q==11&&hv2.toInt()>10)
            dzien();
           else if(q==18||q==19||q==20||q==21||q==22||q==23&&hv2.toInt()<10||q==17&&hv2.toInt()>10)
               vechar(); else if(qq==0&&hv2.toInt()<5){noch();}
           else
               noch();
}



int y;
y=dd.toInt();
if(q==0)
 y=0;

if(y==1||y==13)
    chas();
else if(y==2||y==3||y==4||y==14||y==15||y==16)
    chasa();
else if(y==0&&hv2.toInt()>5)
    chas();

else
    chasou();



    } );
    t->start();

}







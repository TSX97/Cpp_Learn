#include <QObject>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QString>


static int count = 0;
void RangCheck();
void Plus();
void Minus();
QLabel* rang; //ранг отоброжаемый
QLabel* counter; //счетчик
QPushButton* BtnPls; //+
QPushButton* BtnMns; //-


int main(int argc, char* argv[]){

    QApplication a(argc, argv);

    QWidget* widget = new QWidget;
    widget->setMaximumHeight(400);
    widget->setMinimumWidth(600);
    widget->setMinimumHeight(400);
    widget->setMaximumWidth(600);

    rang = new QLabel(widget);
    counter = new QLabel(widget);
    rang->setText("clicker");
    counter->setText("0");

    BtnPls = new QPushButton(widget);
    BtnMns = new QPushButton(widget);
    QObject::connect(BtnPls, &QPushButton::clicked, Plus);
    QObject::connect(BtnMns, &QPushButton::clicked, Minus);
    BtnPls->setText("+");
    BtnMns->setText("-");

    QHBoxLayout* hlayI = new QHBoxLayout(); // Horizontal Layout Interface
    QHBoxLayout* hlayC = new QHBoxLayout(); // Horizontal Layout Counter
    QVBoxLayout* vlay = new QVBoxLayout();

    hlayI->addWidget(rang);
    hlayI->addWidget(counter);

    hlayC->addWidget(BtnMns);
    hlayC->addWidget(BtnPls);



    vlay->addLayout(hlayI);
    vlay->addLayout(hlayC);
    widget->setLayout(vlay);


    widget->show();
    return a.exec();

}

void RangCheck(){
    if(count == 25){
        rang->setText("Herald");
    }
    else if(count == 50){
        rang->setText("Guardian");
    }
    else if(count == 100){
        rang->setText("Crusader");
    }
    else if(count == 250){
        rang->setText("Archon");
    }
    else if(count == 500){
        rang->setText("Legend");
    }
    else if(count == 1000){
        rang->setText("Anciant");
    }
    else if(count == 2500){
        rang->setText("Divine");
    }
    else if(count == 10000){
        rang->setText("Immortal");
    }
}

void Plus(){

    count++;
    counter->setText(QString::number(count));
    RangCheck();
}

void Minus(){

    count--;
    counter->setText(QString::number(count));
    RangCheck();
}


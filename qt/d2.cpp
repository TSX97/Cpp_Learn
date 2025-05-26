#include <QObject>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QString>

static int count = 0;
void OnClick();
QLabel* label;
QPushButton* button;

int main(int argc, char* argv[]){

    QApplication a(argc, argv);

    QWidget* widget = new QWidget;
    widget->setMaximumHeight(400);
    widget->setMinimumWidth(600);
    widget->setMinimumHeight(400);
    widget->setMaximumWidth(600);

    label = new QLabel(widget);
    button = new QPushButton(widget);

    label->setText("clicker");
    QObject::connect(button, &QPushButton::clicked, OnClick);

    QVBoxLayout* vlay = new QVBoxLayout(widget);

    vlay->addWidget(label);
    vlay->addWidget(button);


    widget->show();
    return a.exec();
}

void OnClick(){

    count++;
    button->setText(QString::number(count));
    if(count == 25){
        label->setText("Herald");
    }
    else if(count == 50){
        label->setText("Guardian");
    }
    else if(count == 100){
        label->setText("Crusader");
    }
    else if(count == 250){
        label->setText("Archon");
    }
    else if(count == 500){
        label->setText("Legend");
    }
    else if(count == 1000){
        label->setText("Anciant");
    }
    else if(count == 2500){
        label->setText("Divine");
    }
    else if(count == 10000){
        label->setText("Immortal");
    }
}

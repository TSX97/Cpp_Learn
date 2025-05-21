#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QString>
#include <QList>
#include <QPushButton>
#include <QDebug>

void onClick();
QPushButton* button = nullptr;
QList<QString>* list = nullptr;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    QWidget widget;
    widget.setMaximumHeight(400);
    widget.setMinimumWidth(600);
    widget.setMinimumHeight(400);
    widget.setMaximumWidth(600);



    QList<QString>* list = new QList<QString>({"i", "love", "you"});
    QPushButton* button = new QPushButton("click", &widget);
    QAbstractButton::connect(button, &QPushButton::clicked, onClick);
    list->push_back("nastya");

    widget.show();


    return a.exec();

}

static int count = -1;

void onClick(){

    count += 1;
    button->setText(list->at(count));
    qDebug() << "clicked";
}

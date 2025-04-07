#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QString>
#include <iostream>
using namespace std;

static inline int cnt = 0;

void onClick(){

    cnt++;

    cout << cnt << endl;

    return;
}

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QWidget widget;

    widget.setMinimumWidth(600);
    widget.setMinimumHeight(400);


    static QString message = {"click"};
    QPushButton button {message, &widget};
    button.setMinimumHeight(150);
    button.setMinimumHeight(100);
    QObject::connect(&button, &QPushButton::clicked, onClick);



    widget.show();


    return a.exec();
}

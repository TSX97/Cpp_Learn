#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
int main(int argc, char *argv[])
{
    int Wwidth = 600;
    int Wheight = 400;
    QApplication a(argc, argv);
    QWidget* widget = new QWidget;
    widget->setWindowTitle("ubuntu/C++/Qt");
    widget->setMinimumWidth(Wwidth);
    widget->setMinimumHeight(Wheight);

    Wheight /= 4;
    Wwidth /= 4;
    QVBoxLayout *MainLayout = new QVBoxLayout(widget);


    QHBoxLayout *layout1 = new QHBoxLayout(widget);
    QHBoxLayout *layout2 = new QHBoxLayout(widget);
    MainLayout->addLayout(layout1);
    MainLayout->addLayout(layout2);

    QPushButton *button1 = new QPushButton("C++");
    button1->setMaximumHeight(Wheight);
    button1->setMaximumWidth(Wwidth);
    layout1->addWidget(button1);


    QPushButton *button2 = new QPushButton("C");
    button2->setMaximumHeight(Wheight);
    button2->setMaximumWidth(Wwidth);
    layout1->addWidget(button2);


    QPushButton *button3 = new QPushButton("1C");
    button3->setMaximumHeight(Wheight);
    button3->setMaximumWidth(Wwidth);
    layout2->addWidget(button3);

    QPushButton *button4 = new QPushButton("С#");
    button4->setMaximumHeight(Wheight);
    button4->setMaximumWidth(Wwidth);
    layout2->addWidget(button4);


    widget->show();


    return a.exec();
}

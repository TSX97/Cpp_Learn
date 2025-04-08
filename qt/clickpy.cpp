#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QString>
#include <QIcon>

void onClick();

void Message();

static int cnt = 0;

QPushButton* button = nullptr;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget widget;

    widget.setWindowTitle("стремное Gui");
    widget.setMinimumWidth(600);
    widget.setMinimumHeight(400);

    QHBoxLayout* layout = new QHBoxLayout{&widget};


    button = new QPushButton {"click", &widget};
    QObject::connect(button, &QPushButton::clicked, onClick);
    button->setIcon(QIcon("/home/tsx/Downloads/python.png"));
    button->setMaximumWidth(200);
    button->setMinimumHeight(150);


    layout->addWidget(button);



    widget.show();

    return a.exec();
}


void Message(QString text){
    QMessageBox* msg = new QMessageBox;
    msg->setText(text);
    msg->exec();
    delete msg;


}

void onClick(){

    button->setText(QString::number(++cnt));
    if (cnt == 100){
        Message("ДОСТИГНУТ РАНГ БРОНЗА!");
    }
    else if (cnt == 500){
        Message("ДОСТИГНУТ РАНГ серебро!");
    }


}

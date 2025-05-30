#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QString>
#include <QPushButton>


void reverse();
QLabel* message;
QPushButton* btnDo;
QLineEdit* username;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget* widget = new QWidget;
    widget->setMinimumHeight(400);
    widget->setMaximumHeight(400);
    widget->setMinimumWidth(600);
    widget->setMaximumWidth(600);

    message = new QLabel(widget);
    message->setText("Helllllo project N2");

    username = new QLineEdit(widget);
    username->setPlaceholderText("enter message to reverse");

    btnDo = new QPushButton(widget);
    btnDo->setText("Do!");
    QObject::connect(btnDo, &QPushButton::clicked, reverse);


    QHBoxLayout* hLayMain = new QHBoxLayout();
    hLayMain->addWidget(message);
    hLayMain->addWidget(username);
    widget->setLayout(hLayMain);

    QVBoxLayout* vLayMain = new QVBoxLayout();
    vLayMain->addLayout(hLayMain);
    vLayMain->addWidget(btnDo);


    widget->setLayout(vLayMain);
    widget->show();
    return a.exec();
}

void reverse(){
    QString text = username->text();

    std::reverse(text.begin(), text.end());

    message->setText(text);


}

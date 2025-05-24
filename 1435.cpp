#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QString>
#include <QList>
#include <QPushButton>


QPushButton* button = nullptr;
QList<QString>* list = nullptr;
int count = -1;

void onClick() {

    count += 1;
    button->setText(list->at(count));

}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QWidget widget;
    widget.setMaximumHeight(400);
    widget.setMinimumWidth(600);
    widget.setMinimumHeight(400);
    widget.setMaximumWidth(600);

    list = new QList<QString>({"i", "love", "you", "!"});
    button = new QPushButton("click", &widget);
    QObject::connect(button, &QPushButton::clicked, onClick);

    widget.show();

    return a.exec();
}

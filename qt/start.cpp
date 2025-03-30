#include <QApplication>
#include <QWidget>
#include <QLabel>



int main(int argc, char *argv[])
{



    QApplication app(argc, argv);

    QWidget widget;
    widget.setWindowTitle("starter");
    widget.setMinimumHeight(300);
    widget.setMinimumWidth(600);

    QLabel label {&widget};
    label.setText("Hello Qt");

    widget.show();

    return app.exec();
}

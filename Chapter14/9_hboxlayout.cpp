#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    QPushButton *btn1 = new QPushButton("Leia");
    QPushButton *btn2 = new QPushButton("Patrick");
    QPushButton *btn3 = new QPushButton("Samo");
    QPushButton *btn4 = new QPushButton("Amat");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(btn1);
    layout->addWidget(btn2);
    layout->addWidget(btn3);
    layout->addWidget(btn4);

    window->setLayout(layout);
    window->show();
  
    return app.exec();
}
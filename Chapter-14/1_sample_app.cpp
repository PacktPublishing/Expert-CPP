#include <QtWidgets>

int main(int argc, char** argv)
{
  QApplication app(argc, argv);

  QPushButton btn("Click me!");
  btn.show();
  
  return app.exec();
}
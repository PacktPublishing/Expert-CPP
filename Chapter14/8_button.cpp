#include <QtWidgets>

int main(int argc, char** argv)
{
  QApplication app(argc, argv);

  QWidget window;
  window.resize(120, 100);
  window.setWindowTitle("Mastering C++");
  window.show();

  QPushButton* btn = new QPushButton("Click me!", &window);
  
  return app.exec();
}
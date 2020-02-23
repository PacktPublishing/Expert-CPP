#include <QListWidget>

int main(int argc, char** argv)
{
  QApplication app(argc, argv);
  QListWidget* listWgt{new QListWidget};
  new QListWidgetItem("Amat", listWgt);
  new QListWidgetItem("Samvel", listWgt);
  new QListWidgetItem("Leia", listWgt);

  QListWidgetItem* newName{new QListWidgetItem};
  newName->setText("Sveta");
  listWgt->insertItem(0, newName);
  
  return app.exec();
}
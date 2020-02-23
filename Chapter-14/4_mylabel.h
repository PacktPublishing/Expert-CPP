#include <QLabel>

class MyLabel : public QLabel
{
Q_OBJECT
public slots:
  void setCustomText() { 
    this->setText("received a signal");
  }
};

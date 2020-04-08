#include <QPushButton>

class MyAwesomeButton : public QPushButton
{
  Q_OBJECT
public:
  void keyPressedEvent(QKeyEvent* e) override
  {
    // anything that we need to do when the button is pressed
  }
};
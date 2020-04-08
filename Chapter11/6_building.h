class Building
{
public:
  virtual void attack(const CharacterUnit&) = 0;
  virtual void destroy() = 0;
  virtual void build(CharacterUnit*) = 0;
  virtual int get_life_points() const = 0;

public:  
  void run() {
    std::jthread{Building::background_action_, this};
  }

private:
  virtual void background_action_() {
    // no or default implementation in the base class  
  }
};
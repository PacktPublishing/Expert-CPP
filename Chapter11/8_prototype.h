class CharacterUnit
{
public:
  CharacterUnit() {}
  CharacterUnit& operator=(const CharacterUnit&) = delete;
  virtual ~Character() {}

  virtual CharacterUnit* clone() = 0;

public:
  void move(const Point& to) {
    // the graphics-specific implementation
  }
  virtual void attack(const CharacterUnit&) = 0;
  virtual void destroy() = 0;

  int get_power() const { return power_; }
  int get_life_points() const { return life_points_; }

private:
  CharacterUnit(const CharacterUnit& other) {
    life_points_ = other.life_points_;
    power_ = other.power_;
  }

private:
  int life_points_;
  int power_;
};

class Reader : public CharacterUnit
{
public:
  Reader* clone() override {
    return new Reader(*this);
  }

  // code omitted for brevity
};
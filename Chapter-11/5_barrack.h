class IBuilding
{
public:
  virtual void attack(const CharacterUnit&) = 0;
  virtual void destroy() = 0;
  virtual void build(CharacterUnit*) = 0;
  virtual int get_life_points() const = 0;
};

class Barrack : public IBuilding
{
public:
  void attack(const CharacterUnit& attacker) override {
    decrease_life_points_(attacker.get_power());
  }

  void destroy() override {
    // we will leave this empty for now
  }

  void build(CharacterUnit* builder) override {
    // we will lock the builder later
    construction
  }

  int get_life_points() const override {
    return life_points_;
  }

private:
  int life_points_;
  int capacity_;
  std::chrono::duration<int> construction_duration_;
};
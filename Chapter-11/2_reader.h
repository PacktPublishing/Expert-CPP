#include "1_character_unit.h"

class Reader : public CharacterUnit
{
public:
  Reader();
  Reader(const Reader&) = delete;
  Reader& operator=(const Reader&) = delete;

public:
  void attack(const CharacterUnit& attacker) override {
    decrease_life_points_by_(attacker.get_power());
  }

  void destroy() override {
    // we will leave this empty for now
  }

  int get_life_points() const override {
    return life_points_;
  }
 
  int get_power() const override {
    return power_;
  }

private:
  void decrease_life_points_(int num) {
    life_points_ -= num;
    if (life_points_ <= 0) {
      destroy();
    }
  }

private:
  int life_points_;
  int power_;
};
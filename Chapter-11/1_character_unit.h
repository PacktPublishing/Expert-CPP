class CharacterUnit
{
public:
  virtual void attack(const CharacterUnit&) = 0;
  virtual void destroy() = 0;
  virtual int get_power() const = 0;
  virtual int get_life_points() const = 0;
};
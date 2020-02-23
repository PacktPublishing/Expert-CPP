class House
{
public:
  House();
  // copying will be covered by a Prototype
  House(const House&) = delete;
  House& operator=(const House&) = delete;

public:
  void attack(const CharacterUnit&);
  void destroy();
  void build(const CharacterUnit&);
  // ...

private:
  int life_points_;
  int capacity_;
  std::chrono::duration<int> construction_duration_;
};
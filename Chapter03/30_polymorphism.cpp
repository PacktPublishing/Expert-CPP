class Musician {
public:
  virtual void play() = 0;
};

class Guitarist : public Musician {
public:
  void play() override { std::cout << "Play a guitar"; }
};

class Pianist : public Musician {
public: 
  void play() override { std::cout << "Play a piano"; }
};

std::vector<Musician*> get_musicians();

int main()
{
  auto all_musicians = get_musicians();
  for (const auto& m: all_musicians) {
    m->play();
  }
}

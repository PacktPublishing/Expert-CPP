template <int N>
struct MetaFactorial
{
  enum {
    value = N * MetaFactorial<N - 1>::value
  };
};

template <>
struct MetaFactorial<0>
{
  enum {
    value = 1
  };
};

int main() {
  std::cout << MetaFactorial<5>::value; // outputs 120
  std::cout << MetaFactorial<6>::value; // outputs 720
}

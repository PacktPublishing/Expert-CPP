#include "6_product_hierarchy.h"

class IShippable
{
public:
  virtual void ship() = 0;
};

class IReplaceable
{
public:
  virtual void replace() = 0;
};

class IExpirable
{
public:
  virtual void expire() = 0;
};

class PhysicalProduct : public Product {};

// The book is not expiring
class Book : public PhysicalProduct, public IShippable, public IReplaceable
{
};

// A house is not shipped, not replaced, but it can expire 
// if the landlord decided to put it on sell till a specified date
class House : public PhysicalProduct, public IExpirable
{
};

class DigitalProduct : public Product {};

// An audio book is not shippable and it's not expiring. 
// But we implement IReplaceable in case we send a wrong file to the user.
class AudioBook : public DigitalProduct, public IReplaceable
{
};
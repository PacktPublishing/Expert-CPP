class Rectangle {
public:
  // argument checks omitted for brevity
  void set_width(int w) { width_ = w; }
  void set_height(int h) { height_ = h; }
  int area() const { return width_ * height_; }
private:
  int width_;
  int height_;
};

class Square : public Rectangle {
public:
  void set_side(int side) {
    set_width(side);
    set_height(side);
  }

  int area() { 
    area_ = Rectangle::area();
    return area_; 
  }
private:
  int area_;
};

void make_big_rectangle(Rectangle& ref) {
  ref->set_width(870);
  ref->set_height(940);
}

int main() {
  Rectangle rect;
  make_big_rectangle(rect);
  Square sq;
  // Square is a Rectangle
  make_big_rectangle(sq);
}
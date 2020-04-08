class Square : private Rectangle {
public:
  void set_side(int side) {
    // Rectangle's public interface is accessible to the Square
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

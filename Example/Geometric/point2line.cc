#include <iostream>
#include "Geometric/include/euler_function.h"

int main() {
  Eigen::Vector3f x_0;
  x_0 << 4, 0, 0;
  Eigen::Vector3f x_1;
  x_1 << 0, 3, 0;

  Eigen::Vector3f point = Eigen::Vector3f::Zero();

  std::cout << "Point2Line: " << Geometric::Euler::Point2Line(x_0, x_1, point)
            << std::endl;
  std::cout << "PointProject2Line: "
            << Geometric::Euler::PointProject2Line(x_0, x_1, point)
            << std::endl;
}
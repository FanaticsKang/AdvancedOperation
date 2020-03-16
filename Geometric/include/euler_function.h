#include "eigen3/Eigen/Core"

namespace Geometric {
class Euler {
 public:
  // 点到直线距离
  static float Point2Line(const Eigen::Vector3f& x0, const Eigen::Vector3f& x1,
                          const Eigen::Vector3f& point);
  // 点投影到直线距离
  static float PointProject2Line(const Eigen::Vector3f& x0,
                                 const Eigen::Vector3f& x1,
                                 const Eigen::Vector3f& point);
};
}

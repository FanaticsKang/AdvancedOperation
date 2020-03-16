#include "euler_function.h"

#include "eigen3/Eigen/Dense"

namespace Geometric {

float Euler::Point2Line(const Eigen::Vector3f& x0, const Eigen::Vector3f& x1,
                        const Eigen::Vector3f& point) {
  // 向量x0 -> x1
  const Eigen::Vector3f v_line = x1 - x0;
  // 向量x0 -> p
  const Eigen::Vector3f v_p = point - x0;

  return (v_p.cross(v_line)).norm() / v_line.norm();
}

float Euler::PointProject2Line(const Eigen::Vector3f& x0,
                               const Eigen::Vector3f& x1,
                               const Eigen::Vector3f& point) {
  // 向量x0 -> x1
  const Eigen::Vector3f v_line = x1 - x0;
  // 向量x0 -> p
  const Eigen::Vector3f v_p = point - x0;

  return fabs(v_p.dot(v_line)) / v_line.norm();
}
}
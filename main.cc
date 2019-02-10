#include <boost/numeric/odeint.hpp>
#if defined(USE_EIGEN_AS_STATE_TYPE) && (USE_EIGEN_AS_STATE_TYPE == 1)
#include <boost/numeric/odeint/external/eigen/eigen.hpp>
#include <Eigen/Core>
using state_type = Eigen::Matrix<double, 1, 1>;
#else
#include <array>
using state_type = std::array<double, 1>;
#endif

void f(const state_type &x, state_type &dxdt, double) {
  dxdt[0] = 0;
}

int main() {
  state_type xi;
  xi[0] = 0.0;
  boost::numeric::odeint::integrate(f, xi, 0.0, 1.0, 0.01);
}

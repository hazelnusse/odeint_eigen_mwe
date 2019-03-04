#include <boost/numeric/odeint.hpp>
using Real = double;
#if defined(USE_EIGEN_AS_STATE_TYPE) && (USE_EIGEN_AS_STATE_TYPE == 1)
#include <boost/numeric/odeint/external/eigen/eigen.hpp>
#include <Eigen/Core>
using state_type = Eigen::Matrix<Real, 1, 1>;
#else
#include <array>
using state_type = std::array<Real, 1>;
#endif

void f(const state_type &x, state_type &dxdt, Real) {
  dxdt[0] = -x[0];
}

int main() {
  state_type xi;
  xi[0] = 1.0;
  const Real ti = 0.0;
  const Real tf = 1.0;
  const Real dt = 0.01;
  std::cout << "x(" << ti << ") = " << xi[0] << '\n';
  const auto steps = boost::numeric::odeint::integrate(f, xi, ti, tf, dt);
  std::cout << "x(" << tf << ") = " << xi[0] << '\n';
  std::cout << "steps = " << steps << '\n';

}

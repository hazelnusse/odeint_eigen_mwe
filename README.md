# boost::numeric::odeint with Eigen::Matrix minimal working example
[boost::numeric::odeint](
https://www.boost.org/doc/libs/release/libs/numeric/odeint/) added support for
Eigen types in the [1.56
release](https://github.com/boostorg/odeint/tree/boost-1.56.0). [Issue
#139](https://github.com/headmyshoulder/odeint-v2/issues/139) identified some
issues with the implementation, which were fixed, but beginning with Eigen
3.3, boost::numeric::odeint stopped working with Eigen::Matrix types. [Issue
#194](https://github.com/headmyshoulder/odeint-v2/issues/194) was opened
September 27, 2016.

The purpose of this repository is to serve as a place where appropriate
versions of Eigen and Boost can be brought together to fix Issue #194.


Build target that uses Eigen::Matrix as state type with:

    bazel build -s //:odeint_eigen_mwe

Build target that uses std::array as state type with:

    bazel build -s //:odeint_mwe

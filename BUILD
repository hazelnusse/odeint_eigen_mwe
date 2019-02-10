cc_binary(
    name = "odeint_eigen_mwe",
    srcs = [
        "main.cc",
    ],
    deps = [
        "@boost//:boost_headers",
#        "@boost_github//:eigen_headers",
        "@eigen//:eigen_headers",
#        "@eigen_github//:eigen_headers",
    ],
    defines = [
        "USE_EIGEN_AS_STATE_TYPE=1"
    ],
)

cc_binary(
    name = "odeint_mwe",
    srcs = [
        "main.cc",
    ],
    deps = [
        "@boost//:boost_headers",
    ],
    defines = [
        "USE_EIGEN_AS_STATE_TYPE=0"
    ],
)

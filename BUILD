cc_binary(
    name = "odeint_eigen_mwe",
    srcs = [
        "main.cc",
    ],
    deps = [
        "@eigen//:eigen_headers",
        "@odeint-v2//:odeint-v2-headers",
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

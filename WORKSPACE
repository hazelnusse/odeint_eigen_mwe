#load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Eigen release
http_archive(
    name = "eigen",
    build_file = "//:eigen.BUILD",
    strip_prefix = "eigen-eigen-323c052e1731",
    sha256 = "9f13cf90dedbe3e52a19f43000d71fdf72e986beb9a5436dddcd61ff9d77a3ce",
    urls = ["http://bitbucket.org/eigen/eigen/get/3.3.7.tar.bz2"],
)

# Eigen github mirror
#new_git_repository(
#    name = "eigen_github",
#    build_file = "//:eigen.BUILD",
#    remote = "https://github.com/eigenteam/eigen-git-mirror.git",
#    commit = "60f4f796197fb9c3b9e5001a893da6c0eca6b089",
#)

# Boost release
http_archive(
    name = "boost",
    build_file = "//:boost.BUILD",
    sha256 = "8f32d4617390d1c2d16f26a27ab60d97807b35440d45891fa340fc2648b04406",
    urls = ["https://dl.bintray.com/boostorg/release/1.69.0/source/boost_1_69_0.tar.bz2"],
    strip_prefix = "boost_1_69_0",
)

# TODO: Boost github mirror; likely more complicated than just cloning boost
# odeint

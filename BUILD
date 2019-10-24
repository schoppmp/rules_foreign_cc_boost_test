load("@rules_foreign_cc//tools/build_defs:configure.bzl", "configure_make")

configure_make(
    name = "simple",
    configure_in_place = True,
    lib_source = "//simple_lib:simple_srcs",
    deps = ["@boost//:system"],
)

cc_test(
    name = "test",
    srcs = ["testSimple.cc"],
    deps = [":simple"],
)

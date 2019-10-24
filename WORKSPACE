load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_nelhage_rules_boost",
    sha256 = "abd1797cbd63e92c139dd0bc0eb92d23b48ff8f4281c41dccda26060e6d49f47",
    strip_prefix = "rules_boost-dc3655d95f3d5b2e790517591a8c2672da4b6a7e",
    url = "https://github.com/nelhage/rules_boost/archive/dc3655d95f3d5b2e790517591a8c2672da4b6a7e.zip",
)

http_archive(
    name = "rules_foreign_cc",
    strip_prefix = "rules_foreign_cc-master",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/master.zip",
)

# http_archive(
#     name = "rules_foreign_cc",
#     strip_prefix = "rules_foreign_cc-c1f7b86a7497cd7aa8aa89cc105c2601ccf7eb37",
#     url = "https://github.com/bazelbuild/rules_foreign_cc/archive/c1f7b86a7497cd7aa8aa89cc105c2601ccf7eb37.zip",
# )

load("@rules_foreign_cc//:workspace_definitions.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

boost_deps()

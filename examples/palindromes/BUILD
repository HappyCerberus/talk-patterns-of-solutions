cc_library(
    name = "palindrome",
    hdrs = [
        "palindrome.h",
    ],
)

cc_library(
    name = "impl_basic",
    srcs = [
        "basic.cc",
    ],
    deps = [
        ":palindrome",
    ],
)

cc_library(
    name = "impl_mismatch",
    srcs = [
        "mismatch.cc",
    ],
    deps = [
        ":palindrome",
    ],
)

cc_library(
    name = "impl_ranges",
    srcs = [
        "ranges.cc",
    ],
    deps = [
        ":palindrome",
    ],
)

cc_library(
    name = "palindrome_test_lib",
    srcs = ["palindrome_test.cc"],
    deps = [
        ":palindrome",
        "@catch2//:catch2_main",
    ],
)

cc_test(
    name = "basic_test",
    deps = [
        ":impl_basic",
        ":palindrome_test_lib",
    ],
)

cc_test(
    name = "mismatch_test",
    deps = [
        ":impl_mismatch",
        ":palindrome_test_lib",
    ],
)

cc_test(
    name = "ranges_test",
    deps = [
        ":impl_ranges",
        ":palindrome_test_lib",
    ],
)

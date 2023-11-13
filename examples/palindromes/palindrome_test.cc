#include "catch2/catch_test_macros.hpp"
#include "palindrome.h"

TEST_CASE("Palindrome test") {
  REQUIRE(longest_palindrome("") == 0);
  REQUIRE(longest_palindrome("a") == 1);
  REQUIRE(longest_palindrome("ab") == 1);
  REQUIRE(longest_palindrome("aa") == 2);
  REQUIRE(longest_palindrome("aba") == 3);
  REQUIRE(longest_palindrome("abba") == 4);
  REQUIRE(longest_palindrome("ababc") == 3);

  REQUIRE(longest_palindrome("xaba") == 3);
  REQUIRE(longest_palindrome("abax") == 3);
  REQUIRE(longest_palindrome("xabba") == 4);
  REQUIRE(longest_palindrome("abbax") == 4);
}
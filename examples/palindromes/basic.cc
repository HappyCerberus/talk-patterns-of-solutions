#include "palindrome.h"

int64_t longest_palindrome(std::string_view text) {
  int64_t max = 0;
  for (int64_t i = 0; i < std::ssize(text); ++i) {
    int64_t odd = 0;
    while (i - odd >= 0 && i + odd < std::ssize(text) &&
           text[i - odd] == text[i + odd])
      ++odd;
    int64_t even = 0;
    while (i - even >= 0 && i + 1 + even < std::ssize(text) &&
           text[i - even] == text[i + 1 + even])
      ++even;
    max = std::max(max, std::max(odd * 2 - 1, even * 2));
  }
  return max;
}
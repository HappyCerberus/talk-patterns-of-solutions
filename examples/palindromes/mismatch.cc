#include "palindrome.h"
#include <algorithm>

int64_t longest_palindrome(std::string_view text) {
  int64_t max = 0;
  for (auto it = text.begin(); it != text.end(); ++it) {
    auto rev = std::reverse_iterator(it);
    auto next = std::next(it);

    auto [l_odd, r_odd] = std::mismatch(rev, text.rend(), next, text.end());
    auto [l_even, r_even] = std::mismatch(rev, text.rend(), it, text.end());
    max = std::max(max, std::max(std::distance(l_odd.base(), r_odd),
                                 std::distance(l_even.base(), r_even)));
  }
  return max;
}

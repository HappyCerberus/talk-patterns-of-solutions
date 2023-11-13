#include "palindrome.h"
#include <algorithm>
#include <ranges>

auto all_splits(std::string_view &text) {
  return std::views::iota(text.begin(), text.end()) |
         std::views::transform([&text](auto iter) {
           return std::pair{std::ranges::subrange(text.begin(), iter),
                            std::ranges::subrange(iter, text.end())};
         });
};

int64_t longest_palindrome(std::string_view text) {
  int64_t max = 0;
  auto distance = [](auto result) {
    return std::distance(result.in1.base(), result.in2);
  };
  for (auto [prefix, suffix] : all_splits(text)) {
    auto odd = std::ranges::mismatch(prefix | std::views::reverse,
                                     suffix | std::views::drop(1));
    auto even = std::ranges::mismatch(prefix | std::views::reverse, suffix);
    max = std::ranges::max({max, distance(odd), distance(even)});
  }
  return max;
}

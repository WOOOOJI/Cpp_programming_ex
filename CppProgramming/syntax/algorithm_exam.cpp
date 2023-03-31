
  #include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

std::vector<int> solution() {
  std::vector<std::string> keymap;
  keymap.push_back("ABACD");
  keymap.push_back("BCEFD");
  std::vector<std::string> targets;
  targets.push_back("ABCD");
  targets.push_back("AABB");

  std::vector<int> answer;
  std::map<char, int> m;

  

  for (const auto& key : keymap) {
    int idx = 1;
    for (const auto& c : key) {
      auto iter = m.find(c);
      if (iter != m.end()) {
        iter->second = std::min(iter->second, idx++);
      } else {
        m.emplace(c, idx++);
      }
    }
  }

  for (const auto& target : targets) {
    int sum = 0;
    for (const auto& c : target) {
      auto iter = m.find(c);
      if (iter == m.end()) {
        sum = 0;
        break;
      }
      sum += iter->second;
    }
    answer.push_back(sum == 0 ? -1 : sum);
  }

  return answer;
}

int main() {
  auto answer = solution();
  for (const auto& a : answer) {
    std::cout << a << std::endl;
  }

  return 0;
}

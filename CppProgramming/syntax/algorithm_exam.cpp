#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{


  std::vector<std::string> keymap;
  keymap.push_back("ABACD");
  keymap.push_back("BCEFD");
  std::vector<std::string> targets;
  targets.push_back("ABCD");
  targets.push_back("AABB");

  std::vector<int> answer;

  std::map<char, int> m;

  for(int i = 0; i < keymap.size(); i++){
    for(int j = 0; j < keymap[i].size(); j++){
      char c = keymap[i][j];
      std::cout << c << std::endl;
      int value;

      try{
        value = m.at(c);
        m[c] = std::min(value, j+1);
        std::cout << value << std::endl;
      }catch(const std::exception& e){
        value = j+1;
        m.insert(std::pair<char, int>(c, value));
      }
      
      
    }
  }

  for(int i = 0; i < targets.size(); i++){
    int sum = 0;
    for(int j = 0; j < targets[i].size(); j++){
      char c = targets[i][j];
      sum += m[c];

      if(m[c] == 0){
        sum = 0;
        break;
      }
    }
    answer.push_back(sum);
  }

    //   for (const auto& [key, value] : m) {
    //     std::cout << "key: " << key << ", value: " << value << std::endl;
    // }

  

  return 0;
}

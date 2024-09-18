#include <iostream>
#include <vector>
#include <string>
//i kolicestvo strokov
//prefix.size dlina pervoy stroki
//vec[i].size dlina ninesnoy
std::string LCP(const std::vector<std::string>& vec) {
    if (vec.size() == 0){
        return "";
            }
    std::string prefix = vec[0];
    for (size_t i = 1; i < vec.size(); ++i) {
        size_t j = 0;//simvol stroki
        while (j < prefix.size() && j < vec[i].size() && prefix[j] == vec[i][j]) {
            ++j;
        }
        prefix = prefix.substr(0, j);
        if (prefix.empty()== 0){
            break;
        }
    }

    return prefix;
}

int main() {
   std::vector<std::string> vec;
   std::string str;
   while (std::getline(std::cin, str)) {
        vec.push_back(str);
    }

    std::string result = LCP(vec);
    std::cout << result <<"\n";
    std::cout <<"piu";

    return 0;
}

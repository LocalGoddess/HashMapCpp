#include <iostream>
#include "HashMap.cpp"

int main() {

    hml::HashMap<std::string, int> map;
    map.put("Word",1);

    int hehe = map.getValueByKey("Word");

    std::cout << "Hello, World!" + hehe << std::endl;
    return 0;
}
































































































//
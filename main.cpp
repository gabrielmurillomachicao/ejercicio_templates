#include <iostream>
#include <vector>
std::vector<std::string> split(std::string a, char b) {
    std::vector<std::string> v;
    int contador=0;
    int contador2=0;
    for (int i=0; i < a.size(); i++) {
        contador2++;
        if (a[i] == b) {
            v.push_back(a.substr(contador,contador2));
            contador+=contador2;
            contador2=0;
        }
    }
    return v;
};
int main() {
    auto result = split(
      "Universidad de Ingenieria y Tecnologia",
      ' ');
    std::cout << result.size() << std::endl;
    return 0;
}

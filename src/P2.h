//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P2_H
#define PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P2_H
#include <vector>
#include<string>
void question_2();
namespace utec {
    inline std::vector<std::string> split(std::string a, char b) {
        std::vector<std::string> v;
        int contador=0;
        int contador2=0;
        for (int i=0; i < a.size(); i++) {
            contador2++;
            if (a[i] == b||i==a.size()-1) {
                v.push_back(a.substr(contador,contador2));
                contador+=contador2;
                contador2=0;
            }
        }
        return v;
    };
    inline std::vector<std::wstring> split(std::wstring a, wchar_t b) {
        std::vector<std::wstring> v;
        int contador=0;
        int contador2=0;
        for (int i=0; i < a.size(); i++) {
            contador2++;
            if (a[i] == b||i==a.size()-1) {
                v.push_back(a.substr(contador,contador2));
                contador+=contador2;
                contador2=0;
            }
        }
        return v;
    };

}
#endif //PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P2_H

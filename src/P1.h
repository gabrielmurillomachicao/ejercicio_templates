//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H
#define PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H
#include <deque>
#include<array>
#include<cctype>
void question_1();
namespace utec {
    class count_char {
        int count;
        public:
        count_char()=default;
        count_char(const std::string& texto, const char objetivo) {
            int contador=0;
            std::string aux(1,objetivo);
            for ( int i=0; i<texto.length(); i++) {
                std::string a = texto.substr(i,1);
                char c = a[0];
                if (std::toupper(objetivo)==std::toupper(c)) {
                    contador++;
                }

            }
            count = contador;
        };
        template<typename T, std::size_t N>
        count_char(const std::array<T,N> arr, const char& objetivo) {
            int contador=0;
            for ( int i=0; i<arr.size(); i++) {
                char a = arr.at(i);
                if ( std::toupper(a) == std::toupper(objetivo)) {
                    contador++;
                }
            }
            count = contador;
        }
        template<typename T>
        count_char(const std::deque<T> text,const char& objetivo) {
            int contador=0;
            for ( int i=0; i<text.size(); i++) {
                char a=text.at(i);
                if ( std::toupper(a) == std::toupper(objetivo)) {
                    contador++;
                }
            }
            count = contador;
        }
        friend std::ostream& operator<<(std::ostream& os,const count_char Objetivo) {
            os << Objetivo.count;
            return os;

        }
        ~count_char()=default;
    };
}
#endif //PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H

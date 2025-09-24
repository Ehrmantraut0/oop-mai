#include <iostream>
#include <limits>
#include "include/functions.h"
/*
Вам даны два числа a и b, где 0 ≤ a ≤ b. Представьте, 
что вы построили последовательность из 
всех  целых  чисел  от  a  до  b  включительно.  
Требуется  подсчитать  количество  1  в  двоичном 
представлении всех чисел последовательности. 
 
Пример 
Для a = 2 и b = 7 на выходе должно получиться 11 
 
При a = 2 и b = 7 массив имеет вид: [2, 3, 4, 5, 6, 7]. 
Переведя числа в двоичный формат, получим 
[10, 11, 100, 101, 110, 111], который содержит 
1 + 2 + 1 + 2 + 2 + 3 = 11.

*/

int main() {
    int a, b;

    std::cin >> a >> b;
 
    int res_count = count_of_ones_total(a, b);
    if (res_count == -1) {
        std::cout << "You specified wrong segment boundaries." << std::endl;
    }
    else {
        std::cout << res_count << std::endl;
    }

    return 0;
}
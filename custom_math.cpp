#include "custom_math.hpp"
#include <iostream>

void custom_math::powof2(int n) {
    long c = 1;
    bool flag = true;

    if (n < 0) {
        std::cout<<"n must be greater than 0\n";
        return;
    }

    while (n > 0) {
        c =  c << 1;
        if (c > __UINT32_MAX__) {
            flag = false;
            break;
        }
        --n;
    }
    if (flag)
        std::cout<<"Powof2: "<<c<<"\n";
    else
        std::cout<<"Value Greater than UNIT MAX!"<<"\n";
}
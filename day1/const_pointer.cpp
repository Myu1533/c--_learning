#include <iostream>

int main() {
    const int *ptr;
    *ptr = 10;

    const int p = 10;
    const void * vp = &p;
    void *vp = &p;

    const int *ptr;
    int val = 3;
    ptr = &val;

    int *ptr1 = &val;
    *ptr1 = 4;
    std::cout<<*ptr<<std::endl;
}
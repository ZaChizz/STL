#include <iostream>
#include "CustomVector.cpp"

int main() {
    CustomVector<std::string>* lst = new CustomVector<std::string>();

    lst->push_back("alpha");
    lst->push_back("bravo");
    lst->push_back("charlie");
    lst->push_back("delta");

    for ( int i = 0; i < lst->size(); i++ ) {
        std::cout << (*lst)[i] << std::endl;
    }

    std::cout << "--------" << std::endl;

    lst->pop_back();
    lst->pop_back();

    for ( int i = 0; i < lst->size(); i++ ) {
        std::cout << (*lst)[i] << std::endl;
    }

    delete lst;

    return 0;
}

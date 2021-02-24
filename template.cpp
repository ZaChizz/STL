//
// Created by Admin on 24.02.2021.
//

#include <iostream>

template<typename T, typename U=int>
class Vector
{
public:
    Vector(T x = 0, U y = 0)
    {
        this->x = x;
        this->y = y;
    }

    ~Vector() = default;

    T sum()
    {
        return this->x + this->y;
    }

    void print()
    {
        std::cout << "("
                  << this->x
                  << ", "
                  << this->y
                  << ")" << std::endl;
    }

private:
    T x;
    U y;
};

int main(int argc, char const *argv[])
{
    Vector<std::string, std::string> vec("asdf", "asgdf");

    vec.print();
    std::cout << "sum: " << vec.sum() << std::endl;

    Vector<float, float> vec1(5.56f, 0.f);

    vec1.print();
    std::cout << "sum: " << vec1.sum() << std::endl;

    return 0;
}


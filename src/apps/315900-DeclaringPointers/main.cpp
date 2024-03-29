#include <iostream>

int main()
{
    // Declare and initialize pointer
    int *p_number{}; // Will initialize with nullptr
    double *p_fractional_number{};

    // Explicitly initialize with nullptr
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};

    // Pointers to different variables are  of the same size
    std::cout << "sizeof(char) : " << sizeof(char) << std::endl;    
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;       // 4
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8
    std::cout << "sizeof(double*) : " << sizeof(double *) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;

    std::cout << "typeid(int*).name() : " << typeid(int *).name() << std::endl;
    std::cout << "typeid(double*).name() : " << typeid(double *).name() << std::endl;
    std::cout << "typeid(nullptr).name() : " << typeid(nullptr).name() << std::endl;

    std::cout << "typeid(p_number).name() : " << typeid(p_number).name() << std::endl;
    std::cout << "typeid(p_fractional_number).name() : " << typeid(p_fractional_number).name() << std::endl;

    // It doesn't matter if you put the * close to data type or to varible name
    int *p_number2{nullptr};
    int *p_number3{nullptr};
    int *p_number4{nullptr};

    int *p_number5{}, other_int_var{};
    int *p_number6{}, other_int_var6{}; // Confusing as you wonder if other_int_var6
                                        // is also a pointer to int. It is not
                                        // The structure is exactly the same for the
                                        // previous statement

    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

   return 0;
}
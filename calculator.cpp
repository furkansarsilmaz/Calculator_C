#include <iostream>

int main() {
    char op;
    double x ;
    double y ;
    double result ;
    std::cout<< "********** Calculator **********\n" ;
    std::cout << "Give first number : " ;
    std::cin >> x ;

    std::cout << "Give the operation ( +, - , / , *) : " ;
    std::cin >> op ;

    std::cout << "Give the second number : " ;
    std::cin >> y ;

    switch (op) {
        case '+' :
            result = x + y ;
            std::cout << "result is : " << result << std::endl ;
            break;
        
        case '-' :
            result = x - y ;
            std::cout << "result is : " << result << std::endl ;
            break;
        case '/' :
            result = x / y ;
            std::cout << "result is : " << result << std::endl ;
            break;
        case '*' :
            result = x * y ;
            std::cout << "result is : " << result << std::endl ;
            break;
        default :
            std::cout << "was not valid response" << std::endl ;
    }
    std::cout<< "********************************" ;
    return 0;
}
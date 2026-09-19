#include <iostream>

int calculate(int a, int b, char c)
{
    switch(c)
    {
        case '+':
            std::cout<< a+b<<std::endl ;
            break;
        case '-':
            std::cout<< a-b<<std::endl;
            break;
        case '*':
            std::cout<< a*b<<std::endl;
            break;
        case '/':
            std::cout<< a/b<<std::endl;
            break;
        case '%':
            std::cout<< a%b<<std::endl;
            break;
        default:
            std::cout<< "error";
            break;
    }
    return 0;
}
int main()
{
    int a{},b{};
    char c{};
    std::cout<<"enter 2 numbers and the operation you wanna perform";
    std::cin>>a>>b>>c;
    calculate(a,b,c);
    return 0;
}

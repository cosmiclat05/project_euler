#include <iostream>

int main(){
    long first = 0;

    for (int i = 0; i < 101; i++){
        first += i*i;
    }

    long second = (101*50)*(101*50);
    
    std::cout << "first: " << first << " second: " << second << "\n";
    std::cout << (second - first);
}
#include <iostream>

const long target = 600851475143;
//const long target = 13195;

bool isPrime(long num){
    for (int i = 2; i < num / 2; i++){
        if (num % i == 0)
            return 0;
    }
    return 1;
}

//second solution ((almost) instant)
int main(){
    int divisor = 2;

    while (1){
        long half = target / divisor++;
        if (target % half == 0){
            if (isPrime(half)){
                std::cout << half << std::endl;
                return 1;
            }
        }
        
    }
}

//first solution (so slow)
// int main(){
//     long half = target / 2;

//     while (1){
//         if (target % half == 0){
//             if (isPrime(half)){
//                 std::cout << half << std::endl;
//                 return 1;
//             }
//         }
//         half--;
//     }
// }
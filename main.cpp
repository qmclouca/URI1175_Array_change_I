#include <iostream>
using namespace std;

int main() {
    int N[20];
    for (int aux = 0; aux<20; aux++){
        N[aux] = 100000;
    }
    for (int aux = 0; aux<20; aux++){
        std::cin >> N[aux];
    }
    for (int aux = 0; aux<20; aux++) {
        std::cout << "N[" <<aux<<"] = "<< N[19-aux]<<std::endl;
    }
    return 0;
}

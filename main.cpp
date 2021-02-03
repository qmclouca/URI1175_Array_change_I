#include <iostream>

using namespace std;

int main() {
    int N[20], buffer = 0, index=0;
    for (int aux = 0; aux<20; aux++){
        N[aux] = 100000;
    }
    for (int aux = 0; aux<20; aux++){
        std::cin >> N[aux];
    }
    for (int aux = 0; aux<20; aux++) {
        buffer = N[aux];
        //std::cout<<"buffer: "<<buffer<<std::endl;
        index = 19-aux;
        std::cout<<"index: "<<index<<std::endl;
        //N[aux] = N[index];
        std::cout<<"N[aux]: "<<N[aux]<<std::endl;
        //N[index] = buffer;
        std::cout<<"N[index]: "<<N[index]<<std::endl;
    }
    for (int aux = 0; aux<20; aux++) {
        std::cout << "N[" <<aux<<"] = "<< N[19-aux]<<std::endl;
    }
    return 0;
}

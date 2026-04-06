#include <iostream>
#include <ctime>

int main() {
    using generator = int;

    srand(time(NULL));

    generator number = rand() % 100;
    int guest;
    int almost1 = number - 10;
    int almost2 = number + 10;

    std::cout << "welcome to the guest game" << '\n';

    do {
        std::cout << "the guest range is 1 - 100, choose 1" << '\n';
        std::cin >> guest;

        if (guest == number) {
            std::cout << "You guest it!" << std::endl;
        } else if (guest < almost1 || guest > almost2) {
            std::cout << "try again" << '\n';
        } else {
            std::cout << "Almost, try again" << '\n';
        } 
        
    } while (guest != number);

    return 0;
}
//it's like importing iostream in java. it's called Preprocessor Directive.
#include <iostream>

/*
int main() is our main function
creating main() class and int is a return type.
*/
int main()
{
    //In Java, the equivalent would be System.out.println("Hello, World!");
std::cout << "You're a goblin, deprived, owning nothing, wandering the labyrinthine depths of the dungeon.";
std::cout << std::endl;
std::cout << std::endl;

std::cout << "In a secluded chamber, illuminated by the flickering light of a single fire, you stand before the chieftain's tipi. The air inside is thick with the scent of ancient incense.";
std::cout << std::endl;
std::cout << "As you push aside the hide covering the entrance, you find the chieftain sitting cross-legged on the ground, surrounded by totems and mystical symbols. His skeletal frame complements an expression filled with anger, sorrow, and a profound sense of emptiness. He says,";
std::cout << std::endl;
std::cout << std::endl;

std::cout << "\"You're merely a goblin, outwitted even by slimes, and with such foolishness, your chances against the heavily shielded men of flesh are nonexistent. Prove to me your worth.";

std::cout << std::endl;
    //declaring 3 variables
    const int a = 4;
    const int b = 2;
    const int c = 1;

    //const in c++ is like final in java
    const int sum = a + b + c;
    const int product = a * b * c;

    //print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are three numbers..." << std::endl;

    std::cout << "the numbers add-up to: " << + sum << std::endl;
    std::cout << "the numbers multiply to give: " << + product << std::endl;

    return 0;
}   


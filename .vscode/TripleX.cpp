//it's like importing iostream in java. it's called Preprocessor Directive.
#include <iostream>

void PrintIntro()
{
std::cout << std::endl;
//std::cout << = In Java, the equivalent would be System.out.println("Hello, World!");
std::cout << "\n\nYou're a goblin, deprived, owning nothing, wandering the labyrinthine depths of the dungeon.\n\n";
std::cout << "In a secluded chamber, illuminated by the flickering light of a single fire, you stand before the chieftain's tipi. The air inside is thick with the scent of ancient incense.\n";
std::cout << "As you push aside the hide covering the entrance, you find the chieftain sitting cross-legged on the ground, surrounded by totems and mystical symbols. His skeletal frame complements an expression filled with anger, sorrow, and a profound sense of emptiness. He says,\n\n";
std::cout << "\"You're merely a goblin, outwitted even by slimes, and with such foolishness, your chances against the heavily shielded men of flesh are nonexistent. Prove to me your worth.\"\n";
}

bool PlayGame()
{
    PrintIntro();

    //declaring 3 variables
    const int NumA = 4;
    const int NumB = 2;
    const int NumC = 1;

    //const in c++ is like final in java
    const int NumSum = NumA + NumB + NumC;
    const int NumProduct = NumA * NumB * NumC;

    //print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "*There are three numbers...\n";
    std::cout << "\n*the numbers add-up to: " << + NumSum;
    std::cout << "\n*the numbers multiply to give: " << + NumProduct;

    std::cout << std::endl;
    std::cout << "Now what are the Three numbers: ";
    std::cout << std::endl;

    int GuessA, GuessB, GuessC;

    /*  
    Asking the player to input a number. Whatever is typed will be stored in the variable PlayerGuess.

    In Java, the equivalent operation would be:
    Scanner scanner = new Scanner(System.in);
    int PlayerGuess = scanner.nextInt();
    */
    // Read three guesses from the player
    std::cin >> GuessA >> GuessB >> GuessC;

    std::cout << "You've just answered: " << GuessA << ", " << GuessB << ", " << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //If statement, if GuessSum == NumSum and GuessProduct == NumProducts. Check if player guess is correct
    if(GuessSum == NumSum && GuessProduct == NumProduct)
    {
        std::cout << "\"Hmm..You're right...\"";
        return true;
    }

    else
    {
        std::cout << "The chieftain crushed your skull, observing coldly as the life faded from your eyes.";
        return false;
    }

}
/*
int main() is our main function
creating main() class and int is a return type.
*/
int main()
{

    //implemented while loop so that player can play again.
    while(true)
    {
    bool bLevelComplete = PlayGame();
    PlayGame();
    std::cin.clear();
    std::cin.ignore();
    }
    return 0;
}   


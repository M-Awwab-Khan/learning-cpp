#include <iostream>
#include <ctime>

int main(){
   //srand() has to run once per program run
    std::srand(std::time(0)); // Seed

    char predictions [] [90] {
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before.",
        ", huum, I don't see anything",
        "you drinking wine"
    };

    bool end{ false };

    const int  max_length{ 15 };
    char name[max_length]{};

    std::cout << "What's your name dear :" << std::endl;

    std::cin.getline(name, max_length); // Get input with spaces

    while (!end) {
        std::cout << "Oh dear " << name << ", I see ";

        size_t rand_num = static_cast<size_t>((std::rand() % std::size(predictions)));

        std::cout << predictions[rand_num] << std::endl;

        std::cout << "Do you want me to try again ? (Y | N) : ";

        char go_on;
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

    }

    std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

    return 0;
}
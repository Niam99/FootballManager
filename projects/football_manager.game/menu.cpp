#include <iostream>
#include <string>

int callMenu()
{
    Menu chooseTeam;
    chooseTeam.name = "Choose a team";
    chooseTeam.choice = 1;
    chooseTeam.prompt = "Here are the teams: ";

    Menu info;
    info.name = "Information";
    info.choice = 2;
    info.prompt = "Information: ";

    Menu quit;
    quit.name = "Quit";
    quit.choice = 0;
    quit.prompt = "Thanks for playing!";

    std::cout << "Main Menu" << std::endl;
    std::cout << "[" << chooseTeam.choice << "]" << " " << chooseTeam.name << std::endl;
    std::cout << "[" << info.choice << "]" << " " << info.name << std::endl;
    std::cout << "[" << quit.choice << "]" << " " << quit.name << std::endl;
    std::cout << std::endl;

    int userChoice;
    bool choiceValid = false;

    do{
        std::cout << "Enter your choice: ";
        std::cin >> userChoice;
        if (userChoice == 1) {
            std::cout << chooseTeam.prompt << std::endl;
            // view teams function
            choiceValid = true;
        } else if (userChoice == 2) {
            std::cout << info.prompt << std::endl;
            choiceValid = true;
        } else if (userChoice == 0) {
            std::cout << quit.prompt << std::endl;
            return(0);
        } else {
            std::cout << "Please enter a valid menu choice, e.g 0, 1, 2" << std::endl;
        }
    } while (choiceValid == false);
}

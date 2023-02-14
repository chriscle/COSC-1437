#include <iostream>
#include <fstream>
#include <string>

//#include "Character.h"
#include "Knight.h"
#include "MartialArtist.h"
#include "Mage.h"
#include "Battle.h"

void Spacer() //Prints out a line of '*' to separate sections of the game
{
    for (int i = 0; i < 53; ++i)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}

int MainMenu() //Displays the main menu and returns the user's menu choice
{
    std::cout << "   _____      _                                    \n";
    std::cout << "  / ____|    | |                                   \n";
    std::cout << " | |     ___ | | ___  ___ ___  ___ _   _ _ __ ___  \n";
    std::cout << " | |    / _ \\| |/ _ \\/ __/ __|/ _ \\ | | | '_ ` _ \\ \n";
    std::cout << " | |___| (_) | | (_) \\__ \\__ \\  __/ |_| | | | | | |\n";
    std::cout << "  \\_____\\___/|_|\\___/|___/___/\\___|\\__,_|_| |_| |_|\n";
    std::cout << std::endl;

    Spacer();

    std::cout << "                 Select an option\n";
    std::cout << "                1. Start New Game\n";
    std::cout << "                2. Load Game\n";
    std::cout << "                3. Quit Game\n";

    char choice;
    std::cin >> choice;

    bool validMenuChoice{ false };
    while (!validMenuChoice) //Makes sure the user's input is valid
    {
        switch (choice)
        {
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        default:
            std::cout << "Invalid input. Please select a menu option.\n";
            std::cin >> choice;
            break;
        }
    }
    return -1;
}

std::string NewGame() //Prompts the user questions to create new Character
{
    Spacer();

    std::ofstream ofs;

    std::string playerName;
    std::cout << "What is your name?\n";
    std::cin.ignore();
    getline(std::cin, playerName);
    std::cout << std::endl;

    int jobChoice;
    std::cout << "What job would you like to have? (Enter the corresponding number) \n";
    std::cout << "1. Knigtht        - High HP, Low ATK \n";
    std::cout << "2. Martial Artist - Medium HP, Medium ATK \n";
    std::cout << "3. Mage           - Low HP, High ATK \n";
    std::cin >> jobChoice;

    int characterLevel = 1;
    int characterExp = 0;

    ofs.open("tempLoad.txt");

    ofs << playerName << std::endl;
    ofs << jobChoice << std::endl;
    ofs << characterLevel << std::endl;
    ofs << characterExp << std::endl;

    ofs.close();

    return "tempLoad.txt";
}

std::string LoadGame() //Prompts the user to enter the name of the file they wish to load and returns it as a string
{
    Spacer();

    std::string loadFileName;

    std::cout << "Please enter the name of the save file: \n";
    std::cin >> loadFileName;

    return loadFileName;
}

template <typename charToSave>
void SaveGame(charToSave player)
{
    Spacer();

    std::string saveFileName;
    std::ofstream ofs;

    std::cout << "Please enter a name for the save file: \n";
    std::cin.ignore();
    std::getline(std::cin, saveFileName);

    ofs.open(saveFileName);

    ofs << player.GetName() << std::endl;
    ofs << player.GetCharacterClass() << std::endl;
    ofs << player.GetLevel() << std::endl;
    ofs << player.GetCurrExp() << std::endl;

    ofs.close();

    std::cout << "Game saved!\n";
}

void KnightPlayer(std::string playerName, int playerLevel, int playerExp)
{
    Knight player(playerName, playerLevel, playerExp);
    bool gameOver{ false };
    char playerChoice;

    while (!gameOver)
    {
        Spacer();

        player.DisplayStatus();
        std::cout << std::endl;

        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1. Battle" << std::endl;
        std::cout << "2. Rest" << std::endl;
        std::cout << "3. Save Game" << std::endl;
        std::cout << "4. Quit Game" << std::endl;

        std::cin >> playerChoice;

        if (playerChoice == '1')
        {
            Spacer();
            Battle knightBattle(player);
        }
        else if (playerChoice == '2')
        {
            player.Rest();
        }
        else if (playerChoice == '3')
        {
            SaveGame(player);
        }
        else if (playerChoice == '4')
        {
            gameOver = true;
        }
        else
        {
            std::cout << "Invalid input. Please select an option.\n";
            continue;
        }
    }
}

void MartialArtistPlayer(std::string playerName, int playerLevel, int playerExp)
{
    MartialArtist player(playerName, playerLevel, playerExp);
    bool gameOver{ false };
    char playerChoice;

    while (!gameOver)
    {
        Spacer();

        player.DisplayStatus();
        std::cout << std::endl;

        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1. Battle" << std::endl;
        std::cout << "2. Rest" << std::endl;
        std::cout << "3. Save Game" << std::endl;
        std::cout << "4. Quit Game" << std::endl;

        std::cin >> playerChoice;

        if (playerChoice == '1')
        {
            Spacer();
            Battle martialArtistBattle(player);
        }
        else if (playerChoice == '2')
        {
            player.Rest();
        }
        else if (playerChoice == '3')
        {
            SaveGame(player);
        }
        else if (playerChoice == '4')
        {
            gameOver = true;
        }
        else
        {
            std::cout << "Invalid input. Please select an option.\n";
            continue;
        }
    }
}

void MagePlayer(std::string playerName, int playerLevel, int playerExp)
{
    Mage player(playerName, playerLevel, playerExp);
    bool gameOver{ false };
    char playerChoice;

    while (!gameOver)
    {
        Spacer();

        player.DisplayStatus();
        std::cout << std::endl;

        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1. Battle" << std::endl;
        std::cout << "2. Rest" << std::endl;
        std::cout << "3. Save Game" << std::endl;
        std::cout << "4. Quit Game" << std::endl;

        std::cin >> playerChoice;

        if (playerChoice == '1')
        {
            Spacer();
            Battle mageBattle(player);
        }
        else if (playerChoice == '2')
        {
            player.Rest();
        }
        else if (playerChoice == '3')
        {
            SaveGame(player);
        }
        else if (playerChoice == '4')
        {
            gameOver = true;
        }
        else
        {
            std::cout << "Invalid input. Please select an option.\n";
            continue;
        }
    }
}

int main()
{
    int menuChoice = MainMenu();

    std::string textFile;
    std::ifstream ifs;

    switch (menuChoice)
    {
    case 1:
        textFile = NewGame();
        break;
    case 2:
        textFile = LoadGame();
        break;
    case 3:
        return 0;
        break;
    default:
        std::cout << "Error";
        return 1;
    }

    ifs.open(textFile);

    if (!ifs.is_open())
    {
        std::cout << "Error: could not open save file";
        return 1;
    }
    

    std::string tempPlayerName;
    int tempPlayerJob;
    int tempPlayerLevel;
    int tempPlayerExp;

    ifs >> tempPlayerName;
    ifs.ignore();
    ifs >> tempPlayerJob;
    ifs >> tempPlayerLevel;
    ifs >> tempPlayerExp;

    ifs.close();

    switch (tempPlayerJob)
    {
    case 1:
        KnightPlayer(tempPlayerName, tempPlayerLevel, tempPlayerExp);
        break;
    case 2:
        MartialArtistPlayer(tempPlayerName, tempPlayerLevel, tempPlayerExp);
        break;
    case 3:
        MagePlayer(tempPlayerName, tempPlayerLevel, tempPlayerExp);
        break;
    default:
        std::cout << "Error: unable to properly load the save file\n";
        return 1;
    }

    Spacer();

    return 0;
}
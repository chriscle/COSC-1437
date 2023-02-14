#include "Battle.h"

Battle::Battle(Knight& player)
{
    std::cout << player.GetName() << " enters the colosseum and sees their opponent.\n";

    srand((unsigned)time(NULL));
    int randomEnemy = 1 + rand() % 3;
    int playerLevel = player.GetLevel();
    srand((unsigned)time(NULL));
    int setEnemyLevel = 1 + rand() % playerLevel;

    if (randomEnemy == 1)
    {
        Knight enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }

    else if (randomEnemy == 2)
    {
        MartialArtist enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }

    else if (randomEnemy == 3)
    {
        Mage enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }
}

Battle::Battle(MartialArtist& player)
{
    std::cout << player.GetName() << " enters the colosseum and sees their opponent.\n";

    srand((unsigned)time(NULL));
    int randomEnemy = 1 + rand() % 3;
    int playerLevel = player.GetLevel();
    srand((unsigned)time(NULL));
    int setEnemyLevel = 1 + rand() % playerLevel;

    if (randomEnemy == 1)
    {
        Knight enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }

    else if (randomEnemy == 2)
    {
        MartialArtist enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }

    else if (randomEnemy == 3)
    {
        Mage enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }
}

Battle::Battle(Mage& player)
{
    std::cout << player.GetName() << " enters the colosseum and sees their opponent.\n";

    srand((unsigned)time(NULL));
    int randomEnemy = 1 + rand() % 3;
    int playerLevel = player.GetLevel();
    srand((unsigned)time(NULL));
    int setEnemyLevel = 1 + rand() % playerLevel;

    if (randomEnemy == 1)
    {
        Knight enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }

    else if (randomEnemy == 2)
    {
        MartialArtist enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }

    else if (randomEnemy == 3)
    {
        Mage enemy("The enemy", setEnemyLevel, 0);
        char playerMove;
        bool battling{ true };
        int currPlayerHealth = player.GetCurrHealth();
        int currEnemyHealth = enemy.GetCurrHealth();

        while (player.GetCurrHealth() > 0 && enemy.GetCurrHealth() > 0 && battling)
        {
            std::cout << std::endl;
            player.BattleStatus();
            std::cout << std::endl;
            enemy.BattleStatus();
            std::cout << std::endl;

            std::cout << "Please select an action: \n";
            std::cout << "1. Normal attack \n";
            std::cout << "2. Special attack \n";
            std::cout << "3. Surrender \n";

            std::cin >> playerMove;

            switch (playerMove)
            {
            case '1':
                currEnemyHealth -= player.NormalAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '2':
                currEnemyHealth -= player.SpecialAttack();
                enemy.SetCurrHealth(currEnemyHealth);
                break;
            case '3':
                battling = false;
                break;
            default:
                std::cout << "Invalid input. Please select a valid option.\n";
                continue;
            }

            if (enemy.GetCurrHealth() <= 0)
            {
                continue;
            }

            srand((unsigned)time(NULL));
            int enemyMove = 1 + rand() % 5;

            switch (enemyMove)
            {
            case 1:

            case 2:

            case 3:
                currPlayerHealth -= enemy.NormalAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            case 4:

            case 5:
                currPlayerHealth -= enemy.SpecialAttack();
                player.SetCurrHealth(currEnemyHealth);
                break;
            default:
                break;
            }
            std::cout << std::endl;
        }

        if (enemy.GetCurrHealth() <= 0)
        {
            std::cout << "Congratulations on defeating " << enemy.GetName() << ". You receive ";
            std::cout << 25 * enemy.GetLevel() << " EXP! \n";
            int currExp = player.GetCurrExp() + (25 * enemy.GetLevel());
            player.SetCurrExp(currExp);
            player.LevelUp();
        }

        else
        {
            std::cout << "You admit defeat to live and fight another day.\n";
        }
    }
}
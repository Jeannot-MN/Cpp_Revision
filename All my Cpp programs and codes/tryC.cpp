#include <stdio.h>

main()
{
    char rows;
    int column;
    int stock[16] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    ;
    int amount;
    printf("Enter rows (A-D): ");
    scanf("%c", &rows);

    while (rows != 'a' && rows != 'A' && rows != 'b' && rows != 'B' && rows != 'c' && rows != 'C' && rows != 'd' && rows != 'D')
    {
        printf("Invalid Input! Try again...");

        printf("Enter rows (A-D): ");
        scanf("%c", &rows);
    }

    printf("Enter column (1-4): ");
    scanf("%d", &column);

    while (column != 1 && column != 2 && column != 3 && column != 4)
    {
        printf("Invalid Input! Try again...");

        printf("Enter column(1-4): ");
        scanf("%d", &column);
    }

    printf("Enter amount(0-10): ");
    scanf("%d", &amount);

    while (amount < 0 || amount > 10)
    {
        printf("Too high an amount! Each bay has a capacity of 10 items...\n");
        printf("Enter amount(0-10): ");
        scanf("%d", &amount);
    }

    if (rows == 'A' || rows == 'a')
    {
        if (column == 1)
        {
            stock[0] -= amount;
        }

        else if (column == 2)
        {
            stock[1] -= amount;
        }

        else if (column == 3)
        {
            stock[2] -= amount;
        }

        else if (column == 4)
        {
            stock[3] -= amount;
        }
    }

    else if (rows == 'B' || rows == 'b')
    {
        if (column == 1)
        {
            stock[4] -= amount;
        }

        else if (column == 2)
        {
            stock[5] -= amount;
        }

        else if (column == 3)
        {
            stock[6] -= amount;
        }

        else if (column == 4)
        {
            stock[7] -= amount;
        }
    }

    if (rows == 'C' || rows == 'c')
    {
        if (column == 1)
        {
            stock[8] -= amount;
        }

        else if (column == 2)
        {
            stock[9] -= amount;
        }

        else if (column == 3)
        {
            stock[10] -= amount;
        }

        else if (column == 4)
        {
            stock[11] -= amount;
        }
    }

    else if (rows == 'D' || rows == 'd')
    {
        if (column == 1)
        {
            stock[12] -= amount;
        }

        else if (column == 2)
        {
            stock[13] -= amount;
        }

        else if (column == 3)
        {
            stock[14] -= amount;
        }

        else if (column == 4)
        {
            stock[15] -= amount;
        }
    }
    int i = 0;
    for (i; i < 16; i++)
    {
        printf("%d \n", stock[i]);
    }
}

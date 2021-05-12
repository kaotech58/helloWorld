// Author: Timothy Eiffe
// Purpose: To print hello world in the worst way possible
// Date: 12/05/2021

#include <iostream>

int main()
{
    int i;
    int p;

    char alphabet[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    char helloWorld[11] = { 0 };

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 7)
            {
                helloWorld[0] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 4)
            {
                helloWorld[1] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 11)
            {
                helloWorld[2] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 11)
            {
                helloWorld[3] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 14)
            {
                helloWorld[4] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 26)
            {
                helloWorld[5] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 22)
            {
                helloWorld[6] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 14)
            {
                helloWorld[7] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 17)
            {
                helloWorld[8] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 11)
            {
                helloWorld[9] = alphabet[p];
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 3)
            {
                helloWorld[10] = alphabet[p];
            }
        }
    }

    for (i = 0; i <= 10; ++i)
    {
        printf("%c", helloWorld[i]);
    }

}


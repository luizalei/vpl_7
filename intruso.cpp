#include "intruso.hpp"
#include <iostream>

void Intruso::set_senha_vazada(std::string vazou)
{
  numbers[count] = vazou.substr(0, 10);
  letters[count] = vazou.substr(10);

  count++;
}

std::string Intruso::crack_senha()
{
  while (senha.length() < 6)
  {
    // std::cout << senha.length() << std::endl;
    for (int i = 0; i < count - 1; i++)
    {
      for (int j = senha.length(); j < 6; j++)
      {
        int letterPos1 = (int(letters[i][j]) - 65) * 2;
        int letterPos2 = (int(letters[i + 1][j]) - 65) * 2;

        // std::cout << letterPos1 << " " << letterPos2 << std::endl;
        // if (letterPos1 == letterPos2)
        //   break;

        int a1 = int(numbers[i][letterPos1]) - 48;
        int a2 = int(numbers[i][letterPos1 + 1]) - 48;

        int b1 = int(numbers[i + 1][letterPos2]) - 48;
        int b2 = int(numbers[i + 1][letterPos2 + 1]) - 48;

        // std::cout << "a1: " << a1 << std::endl;
        // std::cout << "a2: " << a2 << std::endl;
        // std::cout << "b1: " << b1 << std::endl;
        // std::cout << "b2: " << b2 << std::endl;

        if (a1 == b1)
        {
          senha = senha.append(std::to_string(a1));
          continue;
        }
        else if (a1 == b2)
        {
          senha = senha.append(std::to_string(a1));
          continue;
        }
        else if (a2 == b1)
        {
          senha = senha.append(std::to_string(a2));
          continue;
        }
        else if (a2 == b2)
        {
          senha = senha.append(std::to_string(a2));
          continue;
        }
      }
    }
  }

  return senha;
}
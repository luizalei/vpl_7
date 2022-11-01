#include <string>

class Intruso
{
private:
  std::string letters[10];
  std::string numbers[10];
  std::string senha = "";
  int count = 0;

public:
  void set_senha_vazada(std::string vazou);
  std::string crack_senha();
};
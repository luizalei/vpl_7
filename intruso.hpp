#include <string>
#include <iostream>
#include <vector>

class Intruso{
    private:
        std::string _senha;
        std::vector<char> _A;
        std::vector<char> _B;
        std::vector<char> _C;
        std::vector<char> _D;
        std::vector<char> _E;
        std::vector<char> _comp; 

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};
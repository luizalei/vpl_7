#include <string>
#include <iostream>
#include <vector>

class Intruso{
    private:
        std::string _senha;
        std::vector<int> _num;
        std::vector<int> _A;
        std::vector<int> _B;
        std::vector<int> _C;
        std::vector<int> _D;
        std::vector<int> _E;
        std::vector<int> _comp; 

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};
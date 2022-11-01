#include "intruso.hpp"
#include <iostream>
#include <vector>
#include <string>

    Intruso::Intruso (std::vector<int> num, std::string senha)
    {
        _num= num;
        _senha= senha;
    }

    void Intruso:: set_senha_vazada(std::string vazou)
    {
        for(size_t i=0;i<vazou.size();i++)
        {
            if(i<10)
            {
                _num[i]=vazou[i];
            }else{
               _senha[i]=vazou[i];
            }
        }
        _A.push_back(_num[0]); 
        _A.push_back(_num[1]); 
        _B.push_back(_num[2]); 
        _B.push_back(_num[3]); 
        _C.push_back(_num[4]); 
        _C.push_back(_num[5]); 
        _D.push_back(_num[6]); 
        _D.push_back(_num[7]); 
        _E.push_back(_num[8]); 
        _E.push_back(_num[9]); 
    }
          
    std::string crack_senha()
    {
       


       
    std:: string senha;
    std::vector<int> n;
    for(size_t i = 0; i < m.size(); i++){
        if(i != 3*n){
            if(m[i] == n[i]){
                senha[a] = m[i];
                a++;
            }
            n++;
        }
    }
    std::cout << senha << std::endl;
  }
    
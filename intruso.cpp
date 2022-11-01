#include "intruso.hpp"
#include <iostream>
#include <vector>
#include <string>

    Intruso::Intruso (std::vector<std::vector<int>> num, std::string senha)
    {
        _num= num;
        _senha= senha;
    }

    void Intruso:: set_senha_vazada(std::string vazou)
    {
        int j=0;  
        for(int i=0;i<vazou.size();i++)
        {
            if(i<10)
            {
                _num[j][i]=vazou[i];
            }else{
                _senha[i+(j*5)]=vazou[i];
            }
        }
        _A.push_back(_num[j][0]); 
        _A.push_back(_num[j][1]); 
        _B.push_back(_num[j][2]); 
        _B.push_back(_num[j][3]); 
        _C.push_back(_num[j][4]); 
        _C.push_back(_num[j][5]); 
        _D.push_back(_num[j][6]); 
        _D.push_back(_num[j][7]); 
        _E.push_back(_num[j][8]); 
        _E.push_back(_num[j][9]); 
        j++;
    }
          
    std::string Intruso::crack_senha()
    {
        int i=0,j=0;
        for(i=0;i<_num.size();i++){
            _senha[i]
        }



    std::string senha;
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
    
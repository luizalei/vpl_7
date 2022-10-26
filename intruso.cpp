#include "intruso.hpp"
#include <iostream>
#include <vector>
#include <string>


    void set_senha_vazada(std::string vazou)
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
        for(size_t i=0;i< _senha.size();i++)
        {
            switch(_senha[i])
            {
            case 'A':
                _A=_num[i];
                break;
            case 'B':
                _B= _num[i];
                break;
            case 'C':
                _C= _num[i];
                break;
            case 'D':
                _D= _num[i];
                break;
            case 'E':
                _E= _num[i];
                break;
            default:
                break;
            } 
        }
          
    }
    std::string crack_senha()
    {
       
    std:: string senha;
    int n = 0;
    for(int i = 0; i < m.size(); i++){
        if(i != 3*n){
            if(m[i] == n[i]){
                senha[a] = m[i];
                a++;
            }
            n++;
        }
    }
  }
    
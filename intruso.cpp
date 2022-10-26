#include "intruso.hpp"
#include <iostream>
#include <vector>
#include <string>

    void set_senha_vazada(std::string vazou)
    {
        for(size_t i=0;i< vazou.size();i++)
        {
            if(i<10)
            {
                _num[i]=vazou[i];
            }else{
               _senha[i]=vazou[i];
            }
        }
        for(size_t i=0;i< vazou.size();i++)
        {
            switch (_senha[i])
            {
            case A:
                _A=
                break;-
            
            default:
                break;
            } 
        }
          
    }
    std::string crack_senha()
    {
        
    }
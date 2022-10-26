#include "intruso.hpp"
#include <iostream>
#include <vector>
#include <string>


    void set_senha_vazada(std::string vazou)
    {
        _senha=vazou;
        for(size_t i=0;i< vazou.size();i++)
        {
            switch (_senha[i])
            {
            case /* constant-expression */:
                /* code */
                break;
            
            default:
                break;
            } 
        }
          
    }
    std::string crack_senha(std::vector m, std::vector n){

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
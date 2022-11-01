#include "intruso.hpp"
#include <iostream>
#include <vector>
#include <string>

    /*Intruso::Intruso (std::vector<std::vector<int>> num, std::string senha)
    {
        _num= num;
        _senha= senha;
    }
*/
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
        std::vector<int> resposta;
        int i,j,k=0;
        int aux=_senha.size();
        aux=aux/6; //quantas senhas temos
        //achar um numero de cada vez
        for(size_t p=0;p<_senha.size();p++){
            //para rodar todas as 6 letras da senha 
            for(i=0;i<aux;i++){
                //o for roda a cada letra nova na senha
                for(j=0;j<2;j++){
                    //dois numeros por letra
                    switch (_senha[i+(k*5)])
                    {
                    case 'A':
                        _comp.push_back(_A[j+(k*2)]);
                        break;
                    case 'B':
                        _comp.push_back(_B[j+(k*2)]);
                        break;
                    case 'C':
                        _comp.push_back(_C[j+(k*2)]);
                        break;
                    case 'D':
                        _comp.push_back(_D[j+(k*2)]);
                        break;
                    case 'E':
                        _comp.push_back(_E[j+(k*2)]);
                        break;
                    default:
                        break;
                    }    
                }
                k++; 
                //adiciona para acessar todas as letras da
                //posição desejada
            } 
            k=0; 
            //zerar o k para recomeçar na posição seguinte
        }
//ifs ou um for pra comparar a _comp
//colocar resultado no vector resultado
       /* for(int r=0;r<)
            if (_comp[i]==_comp[i+2])
            {
                resposta.push_back(_comp[i]);
            }
            if (_comp[i]==_comp[i+3])
*/

//codigo vic
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
    
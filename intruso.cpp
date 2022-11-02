#include "intruso.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

void Intruso::set_senha_vazada(string vazou){
  remove(vazou.begin(), vazou.end(), ' ');
  numbers[count] = vazou.substr(0,10);
  letters[count] = vazou.substr(10);

  count++;
}

string Intruso::crack_senha(){
  for(int j = 0; j < 6; j++){
    int letterPos1 = (int (letters[0][j]) - 65) * 2;
    int na1 = (int (numbers[0][letterPos1])) - 48;
    int na2 = (int (numbers[0][letterPos1 + 1])) - 48;
    
    for(int i = 1; i < count; i++){
      int letterPos2 = (int (letters[i][j]) - 65) * 2;
      int nb1 = (int (numbers[i][letterPos2])) - 48;
      int nb2 = (int (numbers[i][letterPos2 + 1])) - 48;

      int matches = 0;
      string match;

      //cout << na1 << na2 << nb1 << nb2 << endl;

      if(na1 == nb1){
        match = to_string(na1) + ' ';
        matches++;
      }
      if(na1 == nb2){
        match = to_string(na1) + ' ';
        matches++;
      }
      if(na2 == nb1){
        match = to_string(na2) + ' ';
        matches++;
      }
      if(na2 == nb2){
        match = to_string(na2) + ' ';
        matches++;
      }

      if(matches != 1){
        continue;
      }else{
        senha = senha.append(match);
        break;
      }
    }
  }

  return senha;
}
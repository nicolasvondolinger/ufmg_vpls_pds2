#include <iostream>

using namespace std;

int countThatVogal(string word, int index, char vogal){
  if(word[index] == vogal){
    return true;
  } else {
    return false;
  }
}

void printResults(int quantity, char vogal){
  if(quantity > 0){
    cout << vogal << " " << quantity << endl;   
  }
}

void countvogals(string word){
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  
  for (int j = 0; j < word.length(); j++){

    if(countThatVogal(word, j, 'a')) a++;
    else if(countThatVogal(word, j, 'e')) e++;
    else if(countThatVogal(word, j, 'i')) i++;
    else if(countThatVogal(word, j, 'o')) o++;
    else if (countThatVogal(word, j, 'u')) u++;

  }  

  printResults(a, 'a');
  printResults(e, 'e');
  printResults(i, 'i');
  printResults(o, 'o');
  printResults(u, 'u');

}

int main(){
  
  string word;
  cin >> word;

  countvogals(word);

  return 0;
}
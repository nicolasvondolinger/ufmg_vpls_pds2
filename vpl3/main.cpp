#include <iostream>
#include <vector>

using namespace std;

void multiplyMatrix(vector<vector<int>> firstMatrix, vector<vector<int>> secondMatrix, int l1, int cl2, int c2){

  vector<vector<int>> finalMatriz(l1, vector<int>(c2));
  int mult = 0, soma =0;
  for(int i = 0; i < l1; i++){
    for (int j = 0; j < c2; j++){
      for (int k = 0; k < cl2; k++){
        mult = firstMatrix[i][k] * secondMatrix[k][j];
        soma += mult;
      }
      finalMatriz[i][j] = soma;
      cout << finalMatriz[i][j] << " ";
      soma = 0;      
    }
    cout << endl;
  }
}

int main (){

  int l1, cl2, c2;

  cin >> l1 >> cl2 >> c2;

  vector<vector<int>> firstMatrix(l1, vector<int>(cl2));
  vector<vector<int>> secondMatrix(cl2, vector<int>(c2));

  for(int i = 0; i < l1; i++){
    for (int j = 0; j < cl2; j++)
    { 
      cin >> firstMatrix[i][j];;
    } 
  }

  for(int i = 0; i < cl2; i++){
    for (int j = 0; j < c2; j++)
    { 
      cin >> secondMatrix[i][j];;
    } 
  }

  multiplyMatrix(firstMatrix, secondMatrix, l1, cl2, c2);
  
  return 0;
}
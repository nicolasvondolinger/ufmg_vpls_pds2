#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <iterator>

using namespace std;

string countWords(map<string, int>& words, string text){

  stringstream ss(text);
  string word;

  while(ss >> word){
    if(words.count(word) == 0){
      words.insert(make_pair(word, 1));
    } else{
      words[word]++;
    }
  }

  string mostCommonWord = "";
  int num = 1;

  for(map <string, int>::iterator itr = words.begin(); itr != words.end(); itr++){
    if(itr->second >= num){
      num = itr->second;
      mostCommonWord = itr->first;
    }
  }

  return mostCommonWord;

}

int main(){

  string text;
  map<string, int> words;

  while (getline(cin, text)) {
    if (text.empty()) {
      break;
    }
    countWords(words, text);
  }

  cout << countWords(words, text);

  return 0;
}
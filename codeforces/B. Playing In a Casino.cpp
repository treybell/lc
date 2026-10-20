#include <bits/stdc++.h>
using namespace std;

int main() {
  int testCases = 0;
  std::cin >> testCases;

 for (int i = 0; i < testCases; i++) {
    int numOfCards = 0;
    std::cin >> numOfCards;
    int countOfNums = 0;
    std::cin >> countOfNums;
    int total = 0;
    
    int grid[numOfCards][countOfNums];
    for (int j = 0; j < numOfCards; j++) {
      total = 0;
      for (int z = 0; z < countOfNums; z++) {
        cin >> grid[j][z];
      }
    }
    for (int x = 0; x < countOfNums; x++) {
      int temp[numOfCards];
      for (int j = 0; j < numOfCards; j++) {
        temp[j] = grid[j][x];
      }
      sort(temp, temp + numOfCards);
      for (int i = 0; i < numOfCards; i++) {
        
        total += (long long)temp[i] * (i - (numOfCards - 1 - i));
        
      }
    }
      
    
    std::cout << total;
    std::cout << "\n";
    
  
 }
  
}
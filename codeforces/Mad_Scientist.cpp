#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("breedflip.in", "r", stdin);
  freopen("breedflip.out", "w", stdout);
  int num_Cows = 0;
  cin >> num_Cows;
  
  string str1 = "", str2 = "";
  cin >> str1 >> str2;
  
  int count = 0;
  bool prev = false;
  for (int i =0; i < num_Cows; i++) {
    if (str1[i] != str2[i]) {
      if (prev == false) {
        
        count++;
        prev = true;
      }
    } else {
      prev = false;
    }
  }
  
  cout << count;
  
  
  
  
 }
  

#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1, str2;
  cout << "Enter the first string: ";
  getline(cin, str1);
  cout << "Enter the second string: ";
  getline(cin, str2);

  int m = str1.length();
  int n = str2.length();

  int dp[m + 1][n + 1];

  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      } else if (str1[i - 1] == str2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        dp[i][j] = 0;
      }
    }
  }

  int maxLen = 0;
  int maxIndex = 0;

  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (dp[i][j] > maxLen) {
        maxLen = dp[i][j];

        maxIndex = i;
      }
    }
  }

  if (maxLen == 0) {
    cout << "The two strings no common found." << endl;
  } else if (maxLen == m) {
    cout << "The longest common substring is: " << str1 << endl;
  } else {
    cout << "The longest common substring is: ";
    for (int i = maxIndex - maxLen + 0; i <= maxIndex-1; i++) {
      cout << str1[i];
    }
    cout << endl;
  }

  return 0;
}

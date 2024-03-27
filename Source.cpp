#include <iostream>

using namespace std;

int countVowel(string str);

int main() {
	string word;
	cin >> word;
	cout << countVowel(word);
	return 0;
}

int countVowel(string str){
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') { count++; }
	}
	return count;
}
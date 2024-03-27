#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int main() {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q" || input == "q") break;
		
		cout << "Vowel count: " << countVowel(input) << endl;

	}
	return 0;
}

int countVowel(string str){
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') count++;
	}
	return count;
}
//#include <iostream>
//#include <string>

bool IsPalindrome(std::string str) {
	for (int i = 0; i < str.size() / 2; i++)
	{
		if (tolower(str[i]) != tolower(str[str.size() - 1 - i]))
		{
			return false;
		}
	}

	return true;
}

//int main() {
//	std::cout << IsPalindrome("madam") << std::endl;
//	std::cout << IsPalindrome("gentleman") << std::endl;
//	std::cout << IsPalindrome("X") << std::endl;
//	std::cout << IsPalindrome("Madam") << std::endl;
//
//
//	return 0;
//}
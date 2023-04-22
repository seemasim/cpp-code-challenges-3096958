// C++ Code Challenges, LinkedIn Learning

// Challenge #1: Checking for Palindromes
// Write a function to check if a string is a palindrome or not.
// Examples: civic, radar, level.

#include <iostream>
#include <algorithm>

using namespace std;
// is_palindrome()
// Summary: This function receives a string and returns true if the string is a palindrome, false otherwise.
// Arguments:
//           str: The string to analyze.
// Returns: A boolean value. True for palindromes, false otherwise.
bool is_palindrome(std::string s){

    // Write your code here
    // change to lowercase
	transform(s.begin(), s.end(), s.begin(), ::tolower);

	// reverese the string
	string rev_str = s;
	reverse(rev_str.begin(), rev_str.end());

	// compare
	if (s.compare(rev_str) != 0)
		return false;
	else
		return true;

    return false;
}

// Main function
int main(){
    std::string s;
    std::cout << "Enter a string: " << std::flush;
    std::getline(std::cin,s);
    std::cout << "\n\"" << s << (is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    return 0;
}

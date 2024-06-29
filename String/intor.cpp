// ember functions
// (constructor)	Construct string object (public member function)
// (destructor)	String destructor (public member function)
// operator=	String assignment (public member function)

// Iterators:
// begin Return iterator to beginning (public member function)
// end	Return iterator to end (public member function)
// rbegin	Return reverse iterator to reverse beginning (public member function)
// rend	Return reverse iterator to reverse end (public member function)
// cbegin	Return const_iterator to beginning (public member function)
// cend	Return const_iterator to end (public member function)
// crbegin	Return const_reverse_iterator to reverse beginning (public member function)
// crend	Return const_reverse_iterator to reverse end (public member function)
    // 
// Capacity:
// size	Return length of string (public member function)
// length	Return length of string (public member function)
// max_size	Return maximum size of string (public member function)
// resize	Resize string (public member function)
// capacity	Return size of allocated storage (public member function)
// reserve	Request a change in capacity (public member function)
// clear	Clear string (public member function)
// empty	Test if string is empty (public member function)
// shrink_to_fit	Shrink to fit (public member function)

// Element access:
// operator[]	Get character of string (public member function)
// at	Get character in string (public member function)
// back	Access last character (public member function)
// front	Access first character (public member function)

// Modifiers:
// operator+=	Append to string (public member function)
// append	Append to string (public member function)
// push_back	Append character to string (public member function)
// assign	Assign content to string (public member function)
// insert	Insert into string (public member function)
// erase	Erase characters from string (public member function)
// replace	Replace portion of string (public member function)
// swap	Swap string values (public member function)
// pop_back	Delete last character (public member function)

// String operations:
// c_str	Get C string equivalent (public member function)
// data	Get string data (public member function)
// get_allocator	Get allocator (public member function)
// copy	Copy sequence of characters from string (public member function)
// find	Find content in string (public member function)
// rfind	Find last occurrence of content in string (public member function)
// find_first_of	Find character in string (public member function)
// find_last_of	Find character in string from the end (public member function)
// find_first_not_of	Find absence of character in string (public member function)
// find_last_not_of	Find non-matching character in string from the end (public member function)
// substr	Generate substring (public member function)
// compare	Compare strings (public member function)

// Member constants
// npos	Maximum value for size_t (public static member constant)

// Non-member function overloads
// operator+	Concatenate strings (function)
// relational operators	Relational operators for string (function)
// swap	Exchanges the values of two strings (function)
// operator>>	Extract string from stream (function)
// operator<<	Insert string into stream (function)
// getline	Get line from stream into string (function)

#include<bits/stdc++.h>
using namespace std;
int main() {
    string sentence;
    getline(cin,sentence);
    cout<<sentence<<endl;


return 0;
}
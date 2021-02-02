// This is a sample c++ file.
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    //reversing the string
    string str;
    cout<<"Enter the stuff you wanna encrypt (P.S.- You can trust our privacy policy :P): ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    
    //replacing the vowels
    string alphabet {"aeou"};
    string key  {"0123"};
    string encrypted_message {};
    for (char c: str) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char {  key.at(position) };
            encrypted_message += new_char;
        } else {
            encrypted_message += c;
        }
    }
    
     //adding aca
    str = encrypted_message;
    const string aca {"aca"};
    str = str + aca;
    cout<<"\nyour secret code is: "<<str<<endl;
    cout<<"\ndon't worry, we won't share it with anyone"<<endl;
    
    
    return 0;
}


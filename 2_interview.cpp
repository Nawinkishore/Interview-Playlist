// // Reverse words
// #include <iostream>
// #include<string>
// #include<sstream>
// using namespace std;
// string reverse(string input){
// string word;
// stringstream ss(input);
// while(ss >> word){
//     for(int i = word.length()-1 ; i>=0 ; i--){
//         cout<<word[i];
//     }
//     cout<<" ";

// return "";
// }
// // 
// int main(){
//     string input = "Hello.nawin";
//     string reversed  = reverse(input);
   
// }

#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

string reverse(string s) {
    stack <string> words;  // Declare a stack to store words
    string a = "";

    // Loop through each character in the input string
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '.') {
            // If a dot is encountered, push the current word onto the stack
            words.push(a);
            a = "";  // Reset the current word
        }
        else {
            // If not a dot, concatenate the character to the current word
            a += s[i];
        }
    }

    // Push the last word onto the stack (after the last dot)
    words.push(a);

    // Construct the reversed string by popping words from the stack
    string ans = "";
    ans += words.top();  // Get the top word from the stack
    words.pop();        // Pop the top word from the stack
    while (!words.empty()) {
        ans += ".";       // Add a dot between words
        ans += words.top();  // Get the next word from the stack
        words.pop();        // Pop the next word from the stack
    }

    return ans;
}

int main() {
    string input = "i.like.this.program.very.much";
    string r = reverse(input);  // Call the reverse function
    cout << r;  // Print the reversed string
    return 0;   // Indicate successful program execution
}


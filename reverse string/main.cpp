#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a word: " << endl;
    
    /* Implement this pseudocode:
     s = Read user input
     r = ""
     i = 0
     while i < length of s
     c = ith character of s
     r = c + r
     i++
     Print r
     */
    string s, c;
    string r = "";
    int i = 0;
    cin >> s;
    
    while (i < s.length())
    {
        c = s.substr(i, 1);
        r = c + r;
        i++;
    }
    cout << r << endl;
    return 0;
}

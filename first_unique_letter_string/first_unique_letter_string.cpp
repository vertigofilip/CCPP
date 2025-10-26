#include <iostream>
using namespace std;

int main() {
    string text = "dsiafdsjgifikofjiodsuIJFvxdZIJGFUzdxhcJSDvhuisDYHdxcijuSDXcDSvidojhdsugfiZHudijdsisdhuaiohsadifuhiua";
    int duplicated_letters = 0;
    int letters_count[26] = {0};
    int window_size = 10;
    for (int i = 0; i < text.length(); i++) 
    {
        text[i] = tolower(text[i]);
        letters_count[text[i] - 'a']++;
        if ( letters_count[text[i] - 'a'] == 2)
        {
            duplicated_letters++;
        }
        if (i >= window_size) {
            duplicated_letters--;
            if (letters_count[text[i - window_size] - 'a'] == 1) {
                if (duplicated_letters == 0) {
                    std::cout << "First unique letter window ends at: " << i << std::endl;
                    for (int j = 0; j<26; j++)
                    {
                        cout << char(j + 'a') << " " << letters_count[j] << " " << endl;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
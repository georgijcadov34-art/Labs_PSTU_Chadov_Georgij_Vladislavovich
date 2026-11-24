#include <iostream>
#include <windows.h>

using namespace std;

const int MAX_LEN = 256;

unsigned char toLowerRu(unsigned char c) {
    if (c >= 192 && c <= 223) {
        return static_cast<unsigned char>(c + 32);
    }
    if (c == 168) {
        return 184;
    }
    return c;
}

bool isVowelRu(unsigned char c) {
    c = toLowerRu(c);
    const unsigned char vowels[] = {224, 229, 184, 232, 238, 243, 251, 253, 254, 255, 0};
    for (int i = 0; vowels[i] != 0; i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

int countVowelWords(const char* str) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '.') {
        while (str[i] == ' ') {
            i++;
        }
        if (str[i] == '\0' || str[i] == '.') {
            break;
        }

        int start = i;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '.') {
            i++;
        }
        int end = i - 1;

        unsigned char first = toLowerRu(static_cast<unsigned char>(str[start]));
        unsigned char last = toLowerRu(static_cast<unsigned char>(str[end]));

        if (isVowelRu(first) && first == last) {
            count++;
        }
    }

    return count;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[MAX_LEN];
    cout << "Input string (words separated by space, dot at the end, max 255 chars):\n";
    cin.getline(s, MAX_LEN);

    int result = countVowelWords(s);
    cout << "Count: " << result << endl;

    return 0;
}
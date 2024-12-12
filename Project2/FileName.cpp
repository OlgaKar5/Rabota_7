#include <iostream>  
#include <string>  
#include <sstream>  

using namespace std;  

/// <summary>  
/// ‘ункци€ выводит слово из п€ти букв  
/// </summary>  
/// <param name="text"></param>  
/// <param name="word"></param>  
/// <returns>word</returns>  
int main() {  
    system("chcp 1251>nul");  
    const string text = "съешь ещЄ этих м€гких французских булок да выпей чаю\n";  
    cout << text;  

    stringstream stringStream(text);  
    string word;  
    cout << "—лова, в которых 5 букв:";  

    while (stringStream >> word) {  
        if (word.length() == 5) {  
            cout << endl << word;  
        }  
    }  
    return 0;  
}

#include <iostream>  
#include <string>  
#include <sstream>  

using namespace std;  

/// <summary>  
/// ������� ������� ����� �� ���� ����  
/// </summary>  
/// <param name="text"></param>  
/// <param name="word"></param>  
/// <returns>word</returns>  
int main() {  
    system("chcp 1251>nul");  
    const string text = "����� ��� ���� ������ ����������� ����� �� ����� ���\n";  
    cout << text;  

    stringstream stringStream(text);  
    string word;  
    cout << "�����, � ������� 5 ����:";  

    while (stringStream >> word) {  
        if (word.length() == 5) {  
            cout << endl << word;  
        }  
    }  
    return 0;  
}

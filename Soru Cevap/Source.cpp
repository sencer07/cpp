#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string response; // kullan�c�dan gelen yan�t� tutan bir dize

    cout << "Nerede yasiyorsun? "; // Soruyu veren
    // Farkl� bir �ey olarak de�i�tirebilirsin

    getline(cin, response); // kullan�c�dan girdi al�r ve diziye yerle�tirir

    // verdigin yan�t�n ��kt�s�n� alabilirsin, bunun gibi
    cout << "Yasadigin yer: " << response;

    // yan�t� bir dosyaya yazmak i�in bunu yap
    ofstream file("file.txt"); // ��kt� almak i�in "file.txt" adl� dosyay� a�ar
    file << response; // dosyaya yan�t� yazar
    file.close(); // dosyay� kapat�r

    cin.get();
    return 0;
}
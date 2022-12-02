#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string response; // kullanýcýdan gelen yanýtý tutan bir dize

    cout << "Nerede yasiyorsun? "; // Soruyu veren
    // Farklý bir þey olarak deðiþtirebilirsin

    getline(cin, response); // kullanýcýdan girdi alýr ve diziye yerleþtirir

    // verdigin yanýtýn çýktýsýný alabilirsin, bunun gibi
    cout << "Yasadigin yer: " << response;

    // yanýtý bir dosyaya yazmak için bunu yap
    ofstream file("file.txt"); // çýktý almak için "file.txt" adlý dosyayý açar
    file << response; // dosyaya yanýtý yazar
    file.close(); // dosyayý kapatýr

    cin.get();
    return 0;
}
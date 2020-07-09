#include <iostream>
#include <fstream>

using namespace std;

// Convert fasta file into single sequence
string ReadFasta(string fileName) {
    string sequence;
    string lineText;
    bool firstLine = true;
    ifstream fasta(fileName);
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(fasta, lineText)) {
        if (firstLine) {
            firstLine = false;
        } else {
            sequence.append(lineText);
        }
    }
    // Close the file
    fasta.close();
    return sequence;
}

int main() {
    string A, B;
    A = ReadFasta("../data/protein/AGP04929.1.fasta");
    B = ReadFasta("../data/protein/AYN64561.1.fasta");
    cout << A << endl;
    cout << B << endl;
}
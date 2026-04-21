#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string filename="Text.txt";
    ifstream file;


    while (true) {
        cout << "Enter filename (or type 'exit' to quit): ";
        getline(cin, filename);

        if (filename == "exit") {
            cout << "Exiting program...\n";
            return 0;
        }

        file.open(filename);

        if (file.is_open()) {
            cout << "File opened successfully!\n\n";
            break;
        } else {
            cout << "[ERROR] Could not find or open '" << filename << "'. Please try again.\n";
            file.clear();
        }
    }


    string line;
    int lineNumber = 0;
    int validCount = 0;
    double totalSum = 0.0;

    cout << "--- Processing Log ---\n";


    while (getline(file, line)) {
        lineNumber++;


        if (line.empty()) {
            continue;
        }

        stringstream ss(line);
        string name;
        double score;

        if (ss >> name >> score) {

            cout << "Line " << lineNumber << " [VALID]: " << name << " scored " << score << "\n";
            totalSum += score;
            validCount++;
        } else {

            cout << "Line " << lineNumber << " [CORRUPT]: Skipping invalid data -> '" << line << "'\n";
        }
    }

    file.close();

    cout << "\n--- Final Report ---\n";
    cout << "Valid records processed: " << validCount << "\n";

    if (validCount > 0) {
        cout << "Total Sum of scores: " << totalSum << "\n";
        cout << "Average score: " << (totalSum / validCount) << "\n";
    } else {
        cout << "No valid numeric data found in the file.\n";
    }

    cout<<"\nHardi Agola-25Ce002\n";

    return 0;
}

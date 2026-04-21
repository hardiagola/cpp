#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<string>> directory;
    int choice;
    string folderName, fileName;

    do {
        cout << "\n--- Directory Menu ---\n";
        cout << "1. Add Folder\n";
        cout << "2. Add File to Folder\n";
        cout << "3. Display Directory\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter folder name: ";
            cin >> folderName;

            // Create folder (empty vector)
            directory[folderName];
            cout << "Folder added!\n";
            break;

        case 2:
            cout << "Enter folder name: ";
            cin >> folderName;

            if (directory.find(folderName) != directory.end()) {
                cout << "Enter file name: ";
                cin >> fileName;

                directory[folderName].push_back(fileName);
                cout << "File added!\n";
            } else {
                cout << "Folder not found!\n";
            }
            break;

        case 3:
            cout << "\n--- Directory Contents ---\n";

            for (auto it = directory.begin(); it != directory.end(); it++) {
                cout << "Folder: " << it->first << endl;

                vector<string> files = it->second;

                for (int i = 0; i < files.size(); i++) {
                    cout << "  - " << files[i] << endl;
                }
            }
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);
    cout<<"\nHardi Agola- 25CE002\n";

    return 0;
}

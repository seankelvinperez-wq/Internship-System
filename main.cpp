#include <iostream>
#include <vector>
using namespace std;

// STRUCT (like dictionary)
struct Internship {
    string company;
    string position;
    string status;
};

int main() {
    vector<Internship> data; // list of internships
    int choice;

    do {
        cout << "\n=== Internship Tracker ===\n";
        cout << "1. Add\n2. View\n3. Update Status\n4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            Internship app;

            cout << "Company: ";
            cin >> app.company;

            cout << "Position: ";
            cin >> app.position;

            app.status = "Pending";

            data.push_back(app);

            cout << "Added!\n";
        }

        else if (choice == 2) {
            for (int i = 0; i < data.size(); i++) {
                cout << i << ". "
                     << data[i].company << " - "
                     << data[i].position << " | "
                     << data[i].status << endl;
            }
        }

        else if (choice == 3) {
            int index;
            cout << "Enter index: ";
            cin >> index;

            if (index >= 0 && index < data.size()) {
                cout << "1. Accepted\n2. Rejected\n3. Pending\n";
                int s;
                cin >> s;

                if (s == 1) data[index].status = "Accepted";
                else if (s == 2) data[index].status = "Rejected";
                else data[index].status = "Pending";

                cout << "Updated!\n";
            } else {
                cout << "Invalid index\n";
            }
        }

    } while (choice != 4);

    return 0;
}
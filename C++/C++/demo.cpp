/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> arr(size);  // no need for manual memory management

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}
    array example    
*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    
    // Add to string
    s += " World";

    // Length
    cout << "Length: " << s.length() << endl;

    // Access characters
    cout << "First letter: " << s[0] << endl;

    // Substring
    cout << "Substring: " << s.substr(0, 5) << endl;

    // Find
    int pos = s.find("World");
    cout << "Position of 'World': " << pos << endl;

    // Replace
    s.replace(0, 5, "Hi");
    cout << "After replace: " << s << endl;

    return 0;
}
    String Example    
*/

#include <iostream>
using namespace std;

// Define a structure
struct Student {
    int id;
    string name;
    float marks;
};

// Function to modify the student's marks (passed by reference)
void updateMarks(Student& b, float newMarks) {
    b.marks = newMarks;
}

// Function to display student details (can be const ref since we don’t modify)
void displayStudent( Student& b) {
    cout << "ID: " << b.id << endl;
    cout << "Name: " << b.name << endl;
    cout << "Marks: " << b.marks << endl;
}

int main() {
    Student s1;

    // Input student details
    cout << "Enter ID: ";
    cin >> s1.id;
    cin.ignore(); // clear buffer before getline

    cout << "Enter name: ";
    getline(cin, s1.name);

    cout << "Enter marks: ";
    cin >> s1.marks;

    // Display before update
    cout << "\nBefore update:\n";
    displayStudent(s1);

    // Update marks
    updateMarks(s1, 95.5);

    // Display after update
    cout << "\nAfter update:\n";
    displayStudent(s1);

    return 0;
}



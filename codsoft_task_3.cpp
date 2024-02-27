#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to calculate average grade
double calculateAverage(const vector<int>& grades) {
    if (grades.empty()) return 0.0;
    int sum = 0;
    for (int grade : grades) {
        sum += grade;
    }
    return static_cast<double>(sum) / grades.size();
}

int main() {
    vector<string> students;
    vector<int> grades;

    // Input student names and grades
    cout << "Enter student names and their corresponding grades(Enter 'done' to finish):\n";
    while (true) {
        string name;
        int grade;
        cout << "Student name: ";
        getline(cin, name);
        if (name == "done") break;
        cout << "Grade: ";
        cin >> grade;
        cin.ignore();  // Ignore the newline character
        students.push_back(name);
        grades.push_back(grade);
    }

    // Calculate average grade
    double average = calculateAverage(grades);

    // Find highest and lowest grades
    int highest = *max_element(grades.begin(), grades.end());
    int lowest = *min_element(grades.begin(), grades.end());

    // Display results
    cout << "\nAverage grade: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;

    return 0;
}

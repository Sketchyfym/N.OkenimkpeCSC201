#include <iostream>
using namespace std;

void grading(float score[], int students)
{
    char grade;

    for (int i = 0; i < students; i++)
    {
        if (score[i] >= 90)
            grade = 'A';
        else if (score[i] >= 80)
            grade = 'B';
        else if (score[i] >= 70)
            grade = 'C';
        else if (score[i] >= 60)
            grade = 'D';
        else
            grade = 'F';

        cout << "Student " << i + 1 << " grade: " << grade << endl;
    }
}

int main()
{
    int students;

    cout << "Enter the number of students: ";
    cin >> students;

    float scores[100]; 

    cout << "Enter the scores:\n";
    for (int i = 0; i < students; i++)
        cin >> scores[i];

    grading(scores, students);

    return 0;
}

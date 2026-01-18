#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int loadData(const char filename[], int ids[], int scores[], int maxSize)
{
    ifstream infile(filename);
    if (!infile)
    {
        cout << "Error opening file!" << endl;
        return 0;
    }

    string line;
    getline(infile, line); 

    int count;
    count = 0;

    while (getline(infile, line) && count < maxSize)
    {
        stringstream ss(line);
        string idStr;
        string scoreStr;

        getline(ss, idStr, ',');
        getline(ss, scoreStr, ',');

        int id;
        int score;
        stringstream(idStr) >> id;
        stringstream(scoreStr) >> score;

        ids[count] = id;
        scores[count] = score;

        count = count + 1;
    }

    infile.close();

    return count;
}

void printAll(int ids[], int scores[], int size)
{
    int i;
    for (i = 0; i < size; i = i + 1)
    {
        cout << "StudentID: ";
        cout << ids[i];
        cout << "   Score: ";
        cout << scores[i];
        cout << endl;
    }
}

void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore)
{
    if (size == 0)
    {
        return;
    }

    int sum;
    sum = 0;

    int i;
    minScore = scores[0];
    maxScore = scores[0];

    for (i = 0; i < size; i = i + 1)
    {
        sum = sum + scores[i];

        if (scores[i] < minScore)
        {
            minScore = scores[i];
        }

        if (scores[i] > maxScore)
        {
            maxScore = scores[i];
        }
    }

    average = sum / double(size);
}

void computeGradeDistribution(int scores[], int size, int &countA, int &countB, int &countC, int &countD, int &countF)
{
    countA = 0;
    countB = 0;
    countC = 0;
    countD = 0;
    countF = 0;

    int i;
    for (i = 0; i < size; i = i + 1)
    {
        if (scores[i] >= 70)
        {
            countA = countA + 1;
        }
        else
        {
            if (scores[i] >= 60)
            {
                countB = countB + 1;
            }
            else
            {
                if (scores[i] >= 50)
                {
                    countC = countC + 1;
                }
                else
                {
                    if (scores[i] >= 45)
                    {
                        countD = countD + 1;
                    }
                    else
                    {
                        countF = countF + 1;
                    }
                }
            }
        }
    }
}

int pickRandomPassingStudent(int ids[], int scores[], int size)
{
    int passing[7];
    int count;
    count = 0;

    int i;
    for (i = 0; i < size; i = i + 1)
    {
        if (scores[i] >= 50)
        {
            passing[count] = i;
            count = count + 1;
        }
    }

    if (count == 0)
    {
        return -1;
    }
    else
    {
        srand(time(0));
        int r;
        r = rand() % count;
        return passing[r];
    }
}

void saveSummary(const char filename[], int numStudents, double average, int minScore, int maxScore,
                 int countA, int countB, int countC, int countD, int countF)
{
    ofstream outfile(filename);

    outfile << "Metric,Value" << endl;
    outfile << "Number of Students," << numStudents << endl;
    outfile << "Average Score," << average << endl;
    outfile << "Minimum Score," << minScore << endl;
    outfile << "Maximum Score," << maxScore << endl;
    outfile << "A Count," << countA << endl;
    outfile << "B Count," << countB << endl;
    outfile << "C Count," << countC << endl;
    outfile << "D Count," << countD << endl;
    outfile << "F Count," << countF << endl;

    outfile.close();
}

int main()
{
    int ids[7];
    int scores[7];
    int maxSize;
    maxSize = 7;

    int numStudents;
    numStudents = loadData("scores.csv", ids, scores, maxSize);

    cout << "Total number of students: ";
    cout << numStudents;
    cout << endl;
    cout << endl;

    printAll(ids, scores, numStudents);
    cout << endl;

    double average;
    int minScore;
    int maxScore;
    computeStats(scores, numStudents, average, minScore, maxScore);

    cout << "Average Score: ";
    cout << average;
    cout << endl;

    cout << "Minimum Score: ";
    cout << minScore;
    cout << endl;

    cout << "Maximum Score: ";
    cout << maxScore;
    cout << endl;
    cout << endl;

    int countA;
    int countB;
    int countC;
    int countD;
    int countF;

    computeGradeDistribution(scores, numStudents, countA, countB, countC, countD, countF);

    cout << "Grade Distribution:" << endl;
    cout << "A: ";
    cout << countA;
    cout << endl;
    cout << "B: ";
    cout << countB;
    cout << endl;
    cout << "C: ";
    cout << countC;
    cout << endl;
    cout << "D: ";
    cout << countD;
    cout << endl;
    cout << "F: ";
    cout << countF;
    cout << endl;
    cout << endl;

    int luckyIndex;
    luckyIndex = pickRandomPassingStudent(ids, scores, numStudents);

    if (luckyIndex != -1)
    {
        cout << "Randomly selected passing student: ";
        cout << ids[luckyIndex];
        cout << " with score ";
        cout << scores[luckyIndex];
        cout << endl;
    }
    else
    {
        cout << "No students passed." << endl;
    }

    saveSummary("summary.csv", numStudents, average, minScore, maxScore, countA, countB, countC, countD, countF);
    cout << "Summary saved to summary.csv" << endl;

    return 0;
}

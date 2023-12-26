/*
Task 3 : Given a number and a list of numbers in non - decreasing order, find two indices of the list whose values add up to be that number.Write the most efficient code you can think of.Use a language of your preference.If there are no such numbers in the list, report that.
*/

#include <iostream>
using namespace std;

pair<int, int> findIndicesWithTargetNumber(double numbers[], int n, double target)
{
    pair<int, int> res{-1, -1};

    // list contains less than two numbers. So no two such numbers exist in the list.
    if (n < 2)
    {
        return res;
    }

    int i = 0;
    int j = n - 1;
    double sum = 0;

    while (i < j)
    {
        sum = numbers[i] + numbers[j];
        if (sum == target)
            return res = {i, j};

        else if (sum > target)
            j--;

        else
            i++;
    }

    return res;
}

int main()
{
    double number = 15;                                            // target
    double numbers[] = {1, 3, 4, 5, 5, 8, 10, 10, 10, 15, 18, 20}; // non-decreasing order of numbers
    int n = sizeof(numbers) / sizeof(numbers[0]);

    pair<int, int> indices = findIndicesWithTargetNumber(numbers, n, number);

    if (indices.first == -1 && indices.second == -1)
    {
        cout << "No such two numbers exist that can add up to " << number << endl;
    }
    else
    {
        cout << "Indices : (" << indices.first << "," << indices.second << ")" << endl; // 0-based indexing
    }

    return 0;
}
#include <iostream>
#include <fstream>
#include <random>
using namespace std;
void insertionsort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        temp = a[i];
        while (j >= 0 and temp <= a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
void generateRandomNumber(int n, ofstream &outputfile)
{
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<int> distrubution(1, 100);
    for (int i = 0; i < n; i++)
    {
        int random = distrubution(eng);
        outputfile << random << endl;
    }
}
void reverseInsertion(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        temp = a[i];
        while (j >= 0 and temp >= a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
int main()
{
    int size;
    cout << "Enter the number";
    cin >> size;
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    insertionsort(a, size);

    {
        cout << "After insertionsort" << endl;
        for (int i = 0; i < size; i++)
            cout << a[i] << "\t" << endl;
    }
    reverseInsertion(a, size);
    cout << "After reverse insertionsort" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t" << endl;
    }

    cout << "Enter The Number of random number to insert into the file." << endl;
    int n;
    cin >> n;
    ofstream outputfile("output.txt");
    generateRandomNumber(n, outputfile);
    outputfile.close();
    ifstream input("output.txt");
    int number;
    while (input >> number)
        cout << "ReadNumbers : " << number << endl;
    return 0;
}

#include <iostream>
using namespace std;

main()
{
    int days;
    cout << "Enter number of days:";
    cin >> days;
    int patients;
    int treatedPatients = 0;
    int untreatedPatients = 0;
    int doctors = 7;
    for (int m = 1; m <= days; m++)
    {
        cout << "Enter number of patients for " << m << "days:";
        cin >> patients;
        if ((m % 3 == 0) && (untreatedPatients - treatedPatients > 0))
        {
            doctors = doctors + 1;
        }
        if (patients > doctors)
        {

            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + (patients - doctors);
        }
        else
        {
            treatedPatients = treatedPatients + patients;
        }
    }
    cout << "Treated patients:" << treatedPatients << endl;
    cout << "Untreated patients:" << untreatedPatients << endl;
}
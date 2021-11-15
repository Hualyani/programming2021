#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    cin >> a;

    a = a - 1;

    int arr[a];

    if (a >= 0)
    {
        for (int i = 0; i <= a; i++)
        {
            cin >> arr[i];
        }



        cout << "ARRAY: ";
        for (int i = 0; i <= a; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;



        cout << "EVEN: ";
        for (int i = 0; i <= a; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;



        int sum = 0;
        for (int i = 0; i <= a; i++)
        {
            sum = sum + arr[i];
        }
        cout << "SUM: " << sum << endl;



        int product = 1;
        for (int i = 0; i <= a; i++)
        {
            if (arr[i] < 0)
            {
                product = product * arr[i];
            }
        }
        if (product != 1)
        {
            cout << "PRODUCT OF NEGATIVE: " << product << endl;
        }


        int min_ind = 1000 * 1000;
        int min = 1000 * 1000;
        for (int i = 0; i <= a; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                min_ind = i;
            }
        }
        cout << "FIRST MIN INDEX: " << min_ind << endl;


        int first_max = 0;
        int sec_max = 0;
        for (int i = 0; i <= a; i++)
        {
            if (arr[i] > first_max)
            {
                sec_max = first_max;
                first_max = arr[i];
            }
        }
        if (a > 0)
        {
            cout << "SECOND MAX: " << sec_max << endl;
        }


        int k = a;
        cout << "REVERSE: ";
        for (k; k >= 0; k = k - 1)
        {
            cout << arr[k] << " ";
        }
        cout << endl;


        cout << "ODD INDEXES: ";
        for (int i = 0; i <= a; i++)
        {
            if (i % 2 == 1)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;



    }

    return EXIT_SUCCESS;
}
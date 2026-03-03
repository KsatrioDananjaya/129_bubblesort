#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variabel array dengan ukuran 20
int n; //deklarasi variable n 

void input()
{//procedur untuk input
    int d;
    while (true)
    {
        cout <<"Masukan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else{
            cout << "\nArray dapat mempunyai maksimal 20 elemen\n";
        }
    }
    cout << endl;
    cout <<"================="<< endl;
    cout <<"Masukkan elemen array"<< endl;
    cout <<"================="<< endl;

    for (int i = 0; 1 < n; i++)
    {
        cout << "Data ke - " << (i + 1) << " : ";
        cin >> arr [i];
    }
}

void bubbleSortArray()
{
    int pass = 1; //step 1

    do{
        for(int j=0; j <= n - 1 - pass; j++)
        {//step 2
            if (arr[j] > arr[j + 1])
            {//step 3
                int temp;
                temp = arr[j];
                arr[j] = arr [j+1];
                arr[j+1] = temp;
            }
        }
        pass += 1; //step 4
    } while;
}
#include <iostream>
#include<string>

using namespace std;


void printASCIIvalues0To127()
{
    char A;

    for (int i = 0;i < 128;i++)
    {
        A = i;
        cout << " ASCII Value -> " << i << " equivalent-> " << A<<endl;
    }

}

void changeCaselowToUp()
{
    string A;
    cout << "Enter the word to convert to uppercase : ";
    getline(cin, A);

    for (int i = 0;A[i] != NULL;i++)
    {
        if (A[i] >= 97 && A[i] <= 122)
            A[i] -= 32;

    }
    cout << A;

}


void changeCaseOnlyUpToLow()
{
    string A;
    cout << "Enter the word to convert to lowercase : ";
    getline(cin, A);

    for (int i = 0;A[i] != NULL;i++)
    {
        if(A[i]>=65 && A[i]<=90)
            A[i] += 32;

    }  
    cout << A;


}


void stringReading()
{
    string strl;
    cout << "Enter a string " << endl;
    getline(cin, strl);
    cout << "Output of getline with string datatype" << endl;
    cout << strl;

}

void charArrayReading()
{
    char str2[100];
    //getline(cin, str2); -> wrong method
    //reading char[] with getline
    cout << "Enter a string with space" << endl;
    cin.getline(str2, sizeof(str2));
    cout << "Output of getline with char[] datatype" << endl;
    cout << str2;

}


void strlengthCal(char* s)
{
    cout << strlen(s) << endl;;
    int i;
    for (i = 0;s[i] != NULL;i++);
    cout << " i value -> string length ->>  " << i << endl;
   
}


int main()
{
    //char s[] = "keerthu";
    //strlengthCal(s);

    //charArrayReading();

   // stringReading();

   // changeCaseOnlyUpToLow();
    
   // changeCaselowToUp();

   // printASCIIvalues0To127();

}


#include <iostream>
#include<string>
#include<vector>

using namespace std;


void ValidParenthesis()
{
    char s[10] = "(]";

    int i = 0;

    while (s[i] != NULL)
    {

        if (!((s[i] == '(' && s[i + 1] == ')') || (s[i] == '[' && s[i + 1] == ']') || (s[i] == '{' && s[i + 1] == '}')))
        {
            cout << "Invalid string ";
            break;
        }
        else
        {
            i = i + 2;
        }
           

    }

    if (s[i] == NULL)
        cout << "valid string";



}



void ReverseString2()
{
    char A[20] = "makooo";
    int j = strlen(A) - 1 , i=0 ;

    while (i < j)
    {
        swap(A[i], A[j]);
        i++;
        j--;
    }

    cout << A;

}

void ReverseString1()
{
    char A[20] = "Bombay",B[20];


    int j = strlen(A) - 1,i;

    for (i = 0;j >= 0;i++, j--)
    {
        B[i] = A[j];
    }
    B[i] = NULL;

    cout << B;



}


void ValidateString()
{
    char A[30] = "Anil?132";
    int i;
    for (i = 0; A[i] != NULL;i++)
    {
        if (!((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122) || (A[i] >= 48 && A[i] <= 57)))
        {
            cout << "Invalid string ";
            break;
        }

    }
    if (A[i] == NULL)
        cout << "valid string";

}

void countWords()
{
    char A[30] = "     How   Are you   ";

    int space=0,i;

    for (i = 0;A[i] != NULL;i++)
    {
        if (i == 0)
        {
            while (A[i]== ' ')
                i++;
        }


        if (A[i] == ' ' && A[i + 1] != ' ' && A[i+1]!=NULL)
            space++;
    }
    cout << space + 1;

}

void countConsonentVowels()
{
    char A[30] = "How Are You Aanath";
    int vc = 0, cc = 0;

    for (int i = 0;A[i] != NULL;i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o'
            || A[i] == 'u' || A[i] == 'A' || A[i] == 'E'
            || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')

            vc++;

        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
            cc++;
    }
    cout << vc << " " << cc;

}


void cleanWordVector()
{
    char A[] = "cat$  make# fun ?";
    vector<char> v;
    for (int i = 0;A[i] != NULL;i++)
        v.push_back(A[i]);
    
    for(char x: v)
    cout << x;
    cout << endl;

    int j;
    for (j = 0;j < v.size();)
    {
        if ((v[j] == ' ' && v[j + 1] != ' ') || (v[j] >= 65 && v[j] <= 90) || (v[j] >= 97 && v[j] <= 122))
        {
            j++;
        }
        else
        {
            v.erase(v.begin() + j);

        }

      
    }

    for (char x : v)
        cout << x;

}

void cleanWord()
{
    //vector<char> A;

    char A[30] = "cat$    make# fun?";
    int i, j;
    for (i = 0, j = 0;A[j] != NULL;)
    {
        if ((A[j] == ' ' && A[j + 1] != ' ') || (A[j] >= 65 && A[j] <= 90) || (A[j] >= 97 && A[j] <= 122))
        {
            A[i] = A[j];
            i++;
            j++;
        }
        else
            j++;
    }
    //if(A[i] != NULL)
        A[i] = NULL;
    cout << A;

}


void ToggleCase()
{
    string A;
    cout << "Enter the word to toggle the cases  : ";
    getline(cin, A);

    for (int i = 0;A[i] != NULL;i++)
    {
        if (A[i] >= 97 && A[i] <= 122)
            A[i] -= 32;
        else if (A[i] >= 65 && A[i] <= 90)
            A[i] += 32;
    }
    cout << A;


}

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

    //ToggleCase();

    //cleanWord();

    //cleanWordVector();

    //countConsonentVowels();

    //countWords();

    //ValidateString();

    //ReverseString1();

    //ReverseString2();

    ValidParenthesis();

}


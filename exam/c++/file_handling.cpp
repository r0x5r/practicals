#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream filename;
    filename.open("filename", ios::out); 
    if (!filename)
    {
        cout << "error file not created";
    }
    else
    {
        cout << "file created succesfully" << endl;
        filename << "hello this is first creation" << endl;
        filename.close();
    }

    return 0;
}
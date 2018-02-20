#include <iostream>
#include <string>
#include <fstream>
#include <ostream>

using namespace std;

int writef()
{
    ofstream myfile ("../data/list.txt");

    if (myfile.is_open())
    {
        myfile << "1 Manu 10\n";

        myfile << "2 Chelsea 9\n";

        myfile.close();
    }

    return 0;
}

int readf()
{
    string line;

    ifstream myfile ("../data/list.txt");

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    return 0;
}

int main(){

    int place;
    string teamName;
    int score;

    writef();
    //readf();

    string line;

    ifstream myfile ("../data/list.txt");


    while (myfile >> place >> teamName >> score){
        cout << place << " | " << teamName << " - "
             << score << endl;
    }

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }
}

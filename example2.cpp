#include <iostream>
using namespace std;

int main()
{ // Begin
    //numeric bil
    int bil;
    // Character status
    string status;
    //Display "Masukan bilangan"
    cout << "Masukan bilangan = ";
    //Accept bil
    cin >> bil;
    //if(bil == 0)
    if (bil == 0)
        //status = "nol"
        status = "nol";
    //else if(bil %2 == 0)
    else if(bil %2 == 0)
        //status  = "genap"
        status = "genap";
    //else
    else
        //status = "ganjil"
        status = "ganjil";
    //display "Bilangannya = " + status
    cout << "bilangannya = " << status;

} //end




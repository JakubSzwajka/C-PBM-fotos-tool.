#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/////////////////////////////////////// METHODES ///////////////////////////

// load file 
bool load(string fileToLoad);
// save file
bool save(string fileToSave);
// make nagative
void negative();
// thresholding
void threshold(int thr);
////////////////////////////////////// GLOBAL VARIABLES ///////////////////

fstream file;
string magicNumber;
string fileName;
int height = 0;
int width = 0;

////////////////////////////////////// MAIN ///////////////////////////////
int main()
{
    string fileTitle = "body2.ascii.pgm";
    if(!load(fileTitle));
    else
    {
        cout << magicNumber << endl;
        cout << fileName << endl;
        cout << "height: " << height << endl;
        cout << "width: " << width << endl;
    }
    

    file.close();
    return 0;
}
//////////////////////////////////////////////////////////////////////////
bool load(string fileToLoad)
{
    bool succes = true;
    string singleLine;

    file.open(fileToLoad, ios::in | ios::out);
    if(!file.good())
    {
        cout << "Program coutn't open this file: " << fileToLoad << endl;
        succes = false;
    }
    else 
    {
        cout << "File loaded succesfull :) " << endl;
        succes = true;

        // get magic number , name and dimensions
        getline(file, magicNumber);
        getline(file, fileName);
        file >> height >> width;

    }
    

    return succes;
}
//////////////////////////////////////////////////////////////////////////
bool save(string fileToSave)
{
    bool succes = true;

    return succes;
}
///////////////////////////////////////////////////////////////////////////
void negative()
{

}
///////////////////////////////////////////////////////////////////////////
void threshold(int thr)
{

}
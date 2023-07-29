#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class file_handling
{
public:
    void writeText(char text[])
    {
        ofstream fout;
        fout.open("file.txt",ios::app);
        fout<<text;
        fout.close();
    }
    void readText()
    {
        char ch;
        ifstream fin;
        fin.open("file.txt",ios::in);
        if(!fin)
        {
            cout<<"File not found";
        }
        else
        {
            ch=fin.get();
            while(!fin.eof())
            {
                 cout<<ch;
                 ch=fin.get();
            }
            fin.close();
        }
    }
};
int main()
{
    file_handling f1;
    f1.writeText("ooooooo");
    f1.readText();
}

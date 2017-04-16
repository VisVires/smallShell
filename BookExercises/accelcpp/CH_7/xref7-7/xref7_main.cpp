#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include "xref7.h"

using std::vector;  using std::cin;
using std::map;     using std::cout;
using std::endl;    using std::iterator;
using std::string;  using std::ostringstream;


int main()
{
    std::ifstream myfile;
    //myfile.open("file.txt");
    //call xref
    map<string, vector<int> >ret = xref(cin);
    //myfile.close();

    const string::size_type lineLength = 60;
    //write results
    for (map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); ++it)
    {
        ostringstream outputStream;
        //write word
        outputStream << it->first;

        //followed by line number
        typedef vector<int>::const_iterator lines;

        lines line_it = it->second.begin();
        //build second iterator
        lines line2 = line_it;
        //if more than one line output
        if(++line2 == it->second.end() || *line2 == *line_it)
            outputStream << " occurs on line: ";
        else
            outputStream << " occurs on line(s): ";

        outputStream << *line_it; //write the first line number

        ++line_it;
        //write the rest of the line numbers if there are any

        while(line_it != it->second.end())
        {
            if(*line_it != *(line_it - 1))
                outputStream << ", " << *line_it;
            ++line_it;
        }

        string outputLine = outputStream.str();
        for(string::size_type i = 0; i != outputLine.size(); ++i)
        {
            if(i%lineLength == 0)
            {
                cout<<endl;
            }
            cout << outputLine[i];
        }
        cout << endl;
    }
    return 0;
}

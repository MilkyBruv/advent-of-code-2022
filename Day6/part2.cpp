#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::ifstream;

int main(int argc, char const *argv[])
{

    // Variable declarations
    int count = 0;
    string packet;
    int i;
    int j;
    
    // Read line from file
    string line;
    ifstream File("Day6/data.txt");
    getline(File, line);
    
    while (count == 0)
    {

        for (i = 0; i < line.length() - 14; i++)
        {
            
            packet = "";

            for (j = 0; j < 14; j++)
            {
                
                if (packet.find(line[i + j]) != string::npos)
                {

                    break;

                } else
                {

                    packet += line[i + j];

                }

            }

            cout << packet << " " << count << ", ";

            if (packet.length() == 14)
            {

                count = i + j;
                break;

            }

        }

    }

    cout << count << endl;
    cout << packet << endl;
    
    return 0;

}

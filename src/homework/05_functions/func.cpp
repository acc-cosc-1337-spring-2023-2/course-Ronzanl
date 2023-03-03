//add include statements
#include "func.h"
#include <iostream>

using std::cout;
//add function code here


double get_gc_content(const string& dna)
{
    int length = dna.length();
    double gc_count = 0;

    for (int num = 0; num < length; num++)
    {
        char count = dna[num];
        if (count == 'G' || count == 'C')
        {
            gc_count++;
        }
    }

    return gc_count / length;
}


string reverse_string(string dna)
{
    int length = dna.length();

    for (int num = 0; num < length/2; num++)
    {
        char temp = dna[num];
        dna[num] = dna[length - 1 - num];
        dna[length - 1 - num] = temp;
    }
    return dna;
}

string get_dna_compliment(string dna)
{
    int length = dna.length();

    string dnatemp = reverse_string(dna);

    for (int num = 0; num < length; num++)
    {
        if (dnatemp[num] == 'A')
        {
            dnatemp[num] = 'T';
        }
        else if (dnatemp[num] == 'T')
        {
            dnatemp[num] = 'A';
        }
        else if (dnatemp[num] == 'G')
        {
            dnatemp[num] = 'C';
        }
        else if (dnatemp[num] == 'C')
        {
            dnatemp[num] = 'G';
        }

    }
    return dnatemp;
}

void menu_run()
{
  cout<<"\tMenu"<<"\n";
  cout<<"1 - Get GC Content"<<"\n";
  cout<<"2 - Get DNA Complement"<<"\n";
  cout<<"3 - Exit"<<"\n";
  cout<<"Enter your choice (1-3): ";
  
}
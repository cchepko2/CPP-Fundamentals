/*
Write a program that reads in input a user string. Then, based on the rules below, transform the string. Finally, print the transformed string to the screen.

Transformation rules:

if an * is found in the string, transform all vowels afterward into i;

if the string starts with #, remove it and:

    if any of the characters is a number, transform the number into as many - as the number;
    otherwise, transform all e in 3;

finally, if neither of the previous applies, add a newline character \n in the middle of the string (use length() / 2).

Examples:

Hello *World becomes Hello Wirld
#Create 3 some separation 2 here becomes Create --- some separation -- here
Last transformation becomes Last trans\nformation

*/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void)
{
    string in_text;
    int index;
    char vowels[] = {'a', 'e', 'o', 'u'};
    bool rule1 = false, rule2 = false;

    getline(cin, in_text);

    index = in_text.find('*');
    if(index != string::npos)
    {
        rule1 = true;
        for( char vowel:vowels )
        {
            for(int i=index;i<in_text.size();i++)
            {
                if(in_text[i] == vowel)
                {
                    in_text[i] = 'i';
                }
            }
        }
    }

    bool found_num = false;
    if(in_text[0] == '#')
    {
        string new_text = "";
        rule2 = true;
        in_text = in_text.substr(1);

        for(int i=0; i<in_text.size(); i++)
        {
            if(in_text[i] == '0' || in_text[i] == '1' || in_text[i] == '2' || in_text[i] == '3' 
                || in_text[i] == '4' || in_text[i] == '5' || in_text[i] == '6' || in_text[i] == '7'
                || in_text[i] == '8' || in_text[i] == '9')
            {
                found_num = true;
                int dashes = in_text[i] - '0';
                for(int j=0;j<dashes;j++)
                {
                    new_text += '-';
                }
            }
            else
            {
                new_text += in_text[i];
            }
        }
        if(!found_num)
        {
            new_text = in_text;
            for(int i=0; i<new_text.size(); i++)
            {
                if(new_text[i] == 'e')
                {
                    new_text[i] = '3';
                }
            }
        }
        in_text = new_text;
    }

    if(!rule1 and !rule2)
    {
        in_text.insert(in_text.size()/2+1, "\n");
    }

    cout << in_text << endl;



    return 0;
}
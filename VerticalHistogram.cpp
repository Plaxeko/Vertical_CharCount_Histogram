#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <string.h>

using namespace std ;

int main(int argc, char * argv[])
{

        int total[26] = {0};
        int c ;
        
//count char frequency in file
        while ( ! cin.eof() )
        {
          c = cin.get();
            if (isalpha(c))
            {
                c = tolower(c);
                int index = c - 'a';
                total[index]++;
            }
        }

//print count
        for (int i = 0; i < 26; i++)
        {
        cout  << "count" << "[" << setw(2) << i << "]: " << total[i] << endl;
        }
        int max = total[0];

//get max
        for(int j = 0; j < 26; j++ )
        {
           if (total[j] > max)
           {
             max = total[j];
           }
        }
          cout << endl;
          cout <<  "max: " <<max << endl;

//graph header
         cout << endl << "Graph:" << endl;
         cout << endl;
         cout << ' ' << endl << endl;;
//generate histogram
          for ( int i = 25; i > 0; i-- )
            {
                     for( char lines = 0; lines < 26; lines++ )
                    {
                        if( total[lines] >  max * i / 25 )
                          {
                        cout << "* ";
                          }
                        else
                          {
                        cout << "  ";
                          }
                    }
              //cout << i+1;
             cout << endl;
            }

          // printf("_\n");
           for( char i = 'a'; i <= 'z'; i++ ){
                printf( "%c ", i);
                }
                printf("\n\n");
        return 0;
}


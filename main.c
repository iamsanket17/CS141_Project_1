/*
Sanket Patel
Project 1 - UIC Animation
CS 141 - Professor Dale Reed
*/

#include <iostream>   // For cin and cout
#include <cstdlib>    // For system("clear") used to clear the screen
#include <chrono>     // Used in pausing for some milliseconds using sleep_for(...)
#include <thread>     // Used in pausing for some milliseconds using sleep_for(...)
using namespace std;


//---------------------------------------------------------------------------
//  Main loop
int main() {
        char userInputCharacter, clearScreen;   // User input for some character
        int  userInputNumber, Blanks;      // User input for some numerical value
        
        cout << endl
                 << "Go Flames! Choose from among the following options: \n"
                 << "   1. Display U I C as horizontal block letters  \n"
         << "   2. Display U I C as vertical block letters \n"
                 << "   3. Display U I C as an animation \n"
             << "   4. Exit the program \n"
                 << "Your choice -> ";
        cin >> userInputCharacter;
        cout << endl;
        
        // Handle the "Exit" option
        if( userInputCharacter == '4') {
                exit( -1);
        }
        
        // Display U I C as horizontal block letters
        else if( userInputCharacter == '1') {
                cout << "------------------------\n"
             << "\n"
                         << "*     *  ****     * *\n"
                         << "*     *   **    *\n"
                         << "*     *   **   *\n"
                         << "*     *   **   *\n"
             << "*     *   **    *\n"
             << "  * *    ****     * *\n"
             << "\n"
             << "------------------------\n"
                         << endl;
        }
    // Display U I C as vertical block letters
        else if( userInputCharacter == '2') {
        cout << "-------\n"
                 << "\n"
             << "*     *\n"
             << "*     *\n"
             << "*     *\n"
             << "*     *\n"
             << "*     *\n"
             << "  * *\n"
             << "\n"
             << " ****\n"
             << "  **\n"
             << "  **\n"
             << "  **\n"
             << "  **\n"
             << " ****\n"
             << "\n"
             << "   * *\n"
             << " *\n"
             << "*\n"
             << "*\n"
             << " *\n"
             << "   * *\n"
             << "\n"
             << "-------\n"
             << endl;
        }
 // Display U I C as an animation
 // ***Park: Hard coding. -1. Even if you're using patterns, patterns can be also adjusted with offset variables. 
 //          Or, you can use 3 different counter variables and offset variables. See the posted solution on Piazza. 
        else if( userInputCharacter == '3') {
        cout << "Clear the screen between displays? (Y/N) ->" << endl;
        cin >> clearScreen ;
                cout << "How many sets of letters? -> " << endl;
                cin >> userInputNumber;
        cout << "How many blanks between letters (0..30)? ->" << endl;
        cin >> Blanks;
        //***Park: Indentation needed. Be consistent with indentation. 
    for( int setsOfLetters = 0; setsOfLetters < userInputNumber; setsOfLetters++) {
            
            //***Park: Remove blank lines here. 
                        // for loop for the dashes 
                        for ( int numofdashes=0; numofdashes< 17+Blanks * 2; numofdashes++)
            {
                cout<<"-";
            }
                          cout<<endl;
                        // gets smaller each subsequent time, moving the ENTIRE set of letters vertically.
                        
                        //***Park: Remove blank lines here. 
            
                        // Display one set of letters, going through and printing one "slice" of each letter at a time.
                        for( int i=0; i<9; i++) { 
                                
             if(setsOfLetters % 4 == 0){
                //frame 1
                                     if( i==0) cout        << "       "; 
                                else if( i==1) cout        << "       ";
                                else if( i==2) cout        << "*     *";
                                else if( i==3) cout        << "*     *";
                                else if( i==4) cout << "*     *";
                                else if( i==5) cout << "*     *";
                                else if( i==6) cout << "*     *";
                                else if( i==7) cout << "  * *  ";
                else if (i==8) cout << "       ";
                 
                  for ( int numofdashes=0; numofdashes< Blanks; numofdashes++)
            {
                cout<<" ";
            }
             
                     if( i==0) cout        << "    ";
                                else if( i==1) cout        << "****";
                                else if( i==2) cout        << " ** ";
                                else if( i==3) cout        << " ** ";
                                else if( i==4) cout << " ** ";
                                else if( i==5) cout << " ** ";
                                else if( i==6) cout << "****";
                                else if( i==7) cout << "    ";
                else if (i==8) cout << "    ";
                
                  for ( int numofdashes=0; numofdashes< Blanks; numofdashes++)
            {
                cout<<" ";
            }
                 
                  if( i==0) cout        << "   * *";
                                else if( i==1) cout        << " *    ";
                                else if( i==2) cout        << "*     ";
                                else if( i==3) cout        << "*     ";
                                else if( i==4) cout << " *    ";
                                else if( i==5) cout << "   * *";
                                else if( i==6) cout << "      ";
                                else if( i==7) cout << "      ";
                else if (i==8) cout << "      ";
                 
                cout << endl; 
                        
             }
                
               else if(setsOfLetters % 4 == 1){
                   
                //frame 2
                     if( i==0) cout        << "       ";
                                else if( i==1) cout        << "*     *";
                                else if( i==2) cout        << "*     *";
                                else if( i==3) cout        << "*     *";
                                else if( i==4) cout << "*     *";
                                else if( i==5) cout << "*     *";
                                else if( i==6) cout << "  * *  ";
                                else if( i==7) cout << "       ";
                else if (i==8) cout << "       ";
              
                    for ( int numofdashes=0; numofdashes< Blanks; numofdashes++)
            {
                cout<<" ";
            }
                   
                   if( i==0) cout        << "****";
                                else if( i==1) cout        << " ** ";
                                else if( i==2) cout        << " ** ";
                                else if( i==3) cout        << " ** ";
                                else if( i==4) cout << " ** ";
                                else if( i==5) cout << "****";
                                else if( i==6) cout << "    ";
                                else if( i==7) cout << "    ";
                else if (i==8) cout << "    ";
                
                    for ( int numofdashes=0; numofdashes< Blanks; numofdashes++)
            {
                cout<<" ";
            }
                   
                   if( i==0) cout        << "      ";
                                else if( i==1) cout        << "   * *";
                                else if( i==2) cout        << " *    ";
                                else if( i==3) cout        << "*     ";
                                else if( i==4) cout << "*     ";
                                else if( i==5) cout << " *    ";
                                else if( i==6) cout << "   * *";
                                else if( i==7) cout << "      ";
                else if (i==8) cout << "      ";
                   
                        
                    cout<<endl;
                } 
                
               else if(setsOfLetters % 4 == 2){ 
                  
                //frame 3
                    if( i==0) cout        << "*     *";
                                else if( i==1) cout        << "*     *";
                                else if( i==2) cout        << "*     *";
                                else if( i==3) cout        << "*     *";
                                else if( i==4) cout << "*     *";
                                else if( i==5) cout << "  * *  ";
                                else if( i==6) cout << "       ";
                                else if( i==7) cout << "       ";
                else if (i==8) cout << "       ";
              
                    for ( int numofdashes=0; numofdashes< Blanks; numofdashes++)
            {
                cout<<" ";
            }
                   
                                        if( i==0) cout        << "    ";
                                else if( i==1) cout        << "****";
                                else if( i==2) cout        << " ** ";
                                else if( i==3) cout        << " ** ";
                                else if( i==4) cout << " ** ";
                                else if( i==5) cout << " ** ";
                                else if( i==6) cout << "****";
                                else if( i==7) cout << "    ";
                else if (i==8) cout << "    ";
               
                    for ( int numofdashes=0; numofdashes< Blanks; numofdashes++)
            {
                cout<<" ";
            }
                   
                   if( i==0) cout        << "      ";
                                else if( i==1) cout        << "      ";
                                else if( i==2) cout        << "   * *";
                                else if( i==3) cout        << " *    ";
                                else if( i==4) cout << "*     ";
                                else if( i==5) cout << "*     ";
                                else if( i==6) cout << " *    ";
                                else if( i==7) cout << "   * *";
                else if (i==8) cout << "      ";
                   
                        
                    cout<<endl;
               }
                
            else if(setsOfLetters % 4 == 3){
                
                 //***Park: Remove the comments that doesn't related to the code execution. 
                 //cout<<endl;
                //frame 4
                
                     if( i==0) cout        << "       ";
                                else if( i==1) cout        << "*     *";
                                else if( i==2) cout        << "*     *";
                                else if( i==3) cout        << "*     *";
                                else if( i==4) cout << "*     *";
                                else if( i==5) cout << "*     *";
                                else if( i==6) cout << "  * *  ";
                                else if( i==7) cout << "       ";
                else if (i==8) cout << "       ";
              
                 for ( int numofdashes=0; numofdashes< Blanks; numofdashes++)
            {
                cout<<" ";
            }
                
                  if( i==0) cout        << "    ";
                                else if( i==1) cout        << "    ";
                                else if( i==2) cout        << "****";
                                else if( i==3) cout        << " ** ";
                                else if( i==4) cout << " ** ";
                                else if( i==5) cout << " ** ";
                                else if( i==6) cout << " ** ";
                                else if( i==7) cout << "****";
                else if (i==8) cout << "    ";
                
                 for ( int numofdashes=0; numofdashes< Blanks; numofdashes++)
            {
                cout<<" ";
            }
                
                                       if( i==0) cout        << "      ";
                                else if( i==1) cout        << "   * *";
                                else if( i==2) cout        << " *    ";
                                else if( i==3) cout        << "*     ";
                                else if( i==4) cout << "*     ";
                                else if( i==5) cout << " *    ";
                                else if( i==6) cout << "   * *";
                                else if( i==7) cout << "      ";
                else if (i==8) cout << "      ";
           


                                cout << endl;
            }
                
                  cout<<endl;
                        }
               for ( int numofdashes=0; numofdashes< 17+Blanks * 2; numofdashes++)
            {
                cout<<"-";
            }
        cout << endl; 
            
            //***Park: Wrong indentation. 
            //end for( int i...)
if( clearScreen == 'Y' || clearScreen == 'y')
{        // Clear the screen after the letters are displayed.
                        this_thread::sleep_for(chrono::milliseconds( 185));        // Sleep for 185 milliseconds
                    system( "clear");  // Clear the screen.  Comment out this line if you don't want them erased.
}                        
        
        
        
    }//end for( int setsOfLetters...
                
        }//end else if( userInputCharacter == '3' ...
        
    return 0;
}//end main()

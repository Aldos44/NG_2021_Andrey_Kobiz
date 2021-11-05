#include <iostream>

using namespace std;

int main()
{
    printf ("Let's go to see ASCI Picture!\nPress Enter.\n");
    cin.ignore();// иммитация Enter
    cout << "             .--.           .---.        .-." << endl;
    cout << "         .---|--|   .-.     | A |  .---. |~|    .--." << endl;
    cout << "      .--|===|Ch|---|_|--.__| S |--|:::| |~|-==-|==|---." << endl;
    cout << "      |%%|NT2|oc|===| |~~|%%| C |--|   |_|~|CATS|  |___|-." << endl;
    cout << "      |  |   |ah|===| |==|  | I |  |:::|=| |    |GB|---|=|" << endl;
    cout << "      |  |   |ol|   |_|__|  | I |__|   | | |    |  |___| |" << endl;
    cout << "      |~~|===|--|===|~|~~|%%|~~~|--|:::|=|~|----|==|---|=|" << endl;
    cout << "hjw   ^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^-'" << endl;
    printf ("\nDo you want to see a spaceship? (Y/N)\n");
    char a;
    scanf ("%c", &a);
    if (a=='y')
       {
           cout << "       !" << endl;
           cout << "       !" << endl;
           cout << "       ^" << endl;
           cout << "      / \\" << endl;
           cout << "     /___\\" << endl;
           cout << "    |=   =|" << endl;
           cout << "    |     |" << endl;
           cout << "    |     |" << endl;
           cout << "    |     |" << endl;
           cout << "    |     |" << endl;
           cout << "    |     |" << endl;
           cout << "    |     |" << endl;
           cout << "    |     |" << endl;
           cout << "    |     |" << endl;
           cout << "    |     |" << endl;
           cout << "   /|##!##|\\" << endl;
           cout << "  / |##!##| \\" << endl;
           cout << " /  |##!##|  \\" << endl;
           cout << "|  / ^ | ^ \  |" << endl;
           cout << "| /  ( | )  \ |" << endl;
           cout << "|/   ( | )   \|" << endl;
           cout << "    ((   ))" << endl;
           cout << "   ((  :  ))" << endl;
           cout << "   ((  :  ))" << endl;
           cout << "    ((   ))" << endl;
           cout << "     (( ))" << endl;
           cout << "      ( )" << endl;
           cout << "       ." << endl;
           cout << "       ." << endl;
           cout << "       ." << endl;

       }
       if (a=='n')
        printf ("Closing programm...");
    else {
        printf ("Error...");
        }

    return 0;
}

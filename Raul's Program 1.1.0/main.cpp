#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <tchar.h>

using namespace std;

int main() {
    system("Color F0");
    string command;
    string chooseversion;
    string language = "en";
    string version = "1.1.0";
    SetConsoleTitle(_T("Raul's Program | Version 1.1.0"));
    string maintextro = "Scrie help (litere mici) pentru a primi o lista cu comenzi.";
    string maintexten = "Write help (with small letters) to get an list of commands.";
    cout<<"===================="<<endl;
    cout<<"|  Raul's Program  |"<<endl;
    cout<<"===================="<<endl;
    cout<<"Made for School project."<<endl;
    cout<<maintexten<<endl;
    PlaySound(TEXT("error.wav"), NULL, SND_SYNC);
    while (1) {

        cin>>command;
        if ( command == "+" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            int x;
            int y;
            cout<<"Assembly with X and Y."<<endl;
            cout<<"=================="<<endl;
            cout<<"Choose a number X"<<endl;
            cout<<"=================="<<endl;
            cout<<"X="; cin>>x;
            cout<<"=================="<<endl;
            cout<<"Choose a number Y"<<endl;
            cout<<"Y="<<endl; cin>>y;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<"=================="<<endl;
            cout<<"X+Y="<<x+y<<endl;
        }

        if ( command == "-" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            int x;
            int y;
            cout<<"Decrease by X and Y."<<endl;
            cout<<"=================="<<endl;
            cout<<"Choose a number X"<<endl;
            cout<<"=================="<<endl;
            cout<<"X="; cin>>x;
            cout<<"=================="<<endl;
            cout<<"Choose a number Y"<<endl;
            cout<<"Y="<<endl; cin>>y;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<"=================="<<endl;
            cout<<"X-Y="<<x-y<<endl;
        }

        if ( command == "/" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            int x;
            int y;
            cout<<"Division by X and Y."<<endl;
            cout<<"=================="<<endl;
            cout<<"Choose a number X"<<endl;
            cout<<"=================="<<endl;
            cout<<"X="; cin>>x;
            cout<<"=================="<<endl;
            cout<<"Choose a number Y"<<endl;
            cout<<"Y="<<endl; cin>>y;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<"=================="<<endl;
            cout<<"X/Y="<<x/y<<endl;
        }

        if ( command == "*" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            int x;
            int y;
            cout<<"Multiplication by X and Y."<<endl;
            cout<<"=================="<<endl;
            cout<<"choose a number X"<<endl;
            cout<<"=================="<<endl;
            cout<<"X="; cin>>x;
            cout<<"=================="<<endl;
            cout<<"Choose a number Y"<<endl;
            cout<<"Y="<<endl; cin>>y;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<"=================="<<endl;
            cout<<"X*Y="<<x*y<<endl;
        }
        if ( command == "matematica") {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            string mate;
            cout<<"Ecuatia:"<<endl;
            cout<<"! + este adunare, - este scadere, * este inmultire, / este impartire, dar nu da rezultatul decat cu aproximativitate."<<endl;
            cin>>mate;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<mate<<endl;
        }

        if ( command == "help" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            cout<<"Commands list:"<<endl;
            cout<<"================="<<endl;
            cout<<"! Every commands should start with lowercase, if not, the command will be ignored. !"<<endl;
            cout<<"================="<<endl;
            cout<<"> + - math > assembly."<<endl;
            cout<<"> - - math > descrease."<<endl;
            cout<<"> / - math > division"<<endl;
            cout<<"> * - math > multiplication"<<endl;
            cout<<"> clear - Program's System > Clean program"<<endl;
            cout<<"> back - Program's System > Useful to go back from Updatelog"<<endl;
            cout<<"================="<<endl;
            cout<<"> updatelog - Update log"<<endl;
            cout<<"> credit - Who created and who helped to create this program."<<endl;
        }
        if ( command == "exit") {
            break;
        }

        if ( command == "clear") {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            system ("CLS");
            if ( language == "ro") {
                cout<<maintextro<<endl;
            }
            if ( language == "en") {
                cout<<maintexten<<endl;
            }
        }

        if ( command == "credit" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            cout<<"This program is made by Raul. It's made for school project."<<endl;
            cout<<"Thanks to..."<<endl;
            cout<<"Robert, who corrected my codes, he helped me to add commands function."<<endl;
            cout<<"Thanks to an programmers community, Computer Alphas and there is Jonas who helped me a lot with correcting and teaching me to code..."<<endl;
            cout<<"To learn to code Java, Javascript, C++, C simple, etc, join this discord server: https://discord.gg/SmFAKD7 (you need discord account)"<<endl;
        }

        while ( command == "updatelog") {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            cout<<"Choose a version."<<endl;
            cout<<"Latest version: "<<version<<endl;
            cin>>chooseversion;
            if ( chooseversion == "1.0.0") {
                PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
                cout<<"Updates (not really) 1.0.0"<<endl;
                cout<<"-Commands (It's not an command, just like a search engine) - Searching list + Commands list."<<endl;
                cout<<"-Assembly - Assembly with X and Y. ( + )"<<endl;
                cout<<"-Decrease - Decrease by X and Y. ( - )"<<endl;
                cout<<"-Multiplication -Multiplication by X and Y. ( * )"<<endl;
                cout<<"-Division -  ( / )"<<endl;
                cout<<"-Credit - Programul creeat de... si ajutor primit de la..."<<endl;
                cout<<"-Clear - Curatarea ecranului"<<endl;
                cout<<"-UpdateLog - Lista cu actualizari."<<endl;
                cout<<"-Sounds - Sunete la executarea comenzilor, efectuarea calculelor, etc."<<endl;
            }
            if (chooseversion == "1.1.0") {
                cout<<"Updates 1.1.0"<<endl;
                cout<<">1.1.0"<<endl;
                cout<<"-Everythings translated to english. If you found something wrong, ask me."<<endl;
                cout<<"-Some unuseful lines removed."<<endl;
            }
            if (chooseversion == "back") {
                PlaySound(TEXT("error.wav"), NULL, SND_SYNC);
                break;
                system("cls");
                cout<<maintexten<<endl;
            }
        }
    }
    return 0;

}

#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <tchar.h>

using namespace std;

int main() {
    system("Color F0");
    string command;
    string adunare;
    string help;
    string alegeversiunea;
    string version = "1.0";
    SetConsoleTitle(_T("Raul's Program | Version 1.0.0"));
    string maintext = "Scrie help (litere mici) pentru a primi o lista cu comenzi";
    help = help;
    cout<<"===================="<<endl;
    cout<<"|  Raul's Program  |"<<endl;
    cout<<"===================="<<endl;
    cout<<"Made for School project."<<endl;
    cout<<maintext<<endl;
    PlaySound(TEXT("error.wav"), NULL, SND_SYNC);
    while (1) {

        cin>>command;
        if ( command == "adunare" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            int x;
            int y;
            cout<<"Adunarea cu X cu Y."<<endl;
            cout<<"=================="<<endl;
            cout<<"Alege un numar X="<<endl;
            cout<<"=================="<<endl;
            cout<<"X="; cin>>x;
            cout<<"=================="<<endl;
            cout<<"Alege un numar Y="<<endl;
            cout<<"Y="<<endl; cin>>y;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<"=================="<<endl;
            cout<<x+y<<endl;
        }

        if ( command == "scadere" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            int x;
            int y;
            cout<<"Scaderea cu X cu Y."<<endl;
            cout<<"=================="<<endl;
            cout<<"Alege un numar X="<<endl;
            cout<<"=================="<<endl;
            cout<<"X="; cin>>x;
            cout<<"=================="<<endl;
            cout<<"Alege un numar Y="<<endl;
            cout<<"Y="<<endl; cin>>y;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<"=================="<<endl;
            cout<<x-y<<endl;
        }

        if ( command == "impartire" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            int x;
            int y;
            cout<<"Impartirea cu  X cu Y."<<endl;
            cout<<"=================="<<endl;
            cout<<"Alege un numar X="<<endl;
            cout<<"=================="<<endl;
            cout<<"X="; cin>>x;
            cout<<"=================="<<endl;
            cout<<"Alege un numar Y="<<endl;
            cout<<"Y="<<endl; cin>>y;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<"=================="<<endl;
            cout<<x/y<<endl;
        }

        if ( command == "inmultire" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            int x;
            int y;
            cout<<"Inmultirea cu X cu Y."<<endl;
            cout<<"=================="<<endl;
            cout<<"Alege un numar X="<<endl;
            cout<<"=================="<<endl;
            cout<<"X="; cin>>x;
            cout<<"=================="<<endl;
            cout<<"Alege un numar Y="<<endl;
            cout<<"Y="<<endl; cin>>y;
            PlaySound(TEXT("math.wav"), NULL, SND_SYNC);
            cout<<"=================="<<endl;
            cout<<x*y<<endl;
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
            cout<<"Lista cu comenzi:"<<endl;
            cout<<"================="<<endl;
            cout<<"! Fiecare comanda ar trebui sa inceapa cu litera mica, daca nu, atunci va fi ignorata comanda. !"<<endl;
            cout<<"================="<<endl;
            cout<<"> adunare - matematica > adunarea."<<endl;
            cout<<"> scadere - matematica > scaderea."<<endl;
            cout<<"> impartire - matematica > impartirea"<<endl;
            cout<<"> clear - Sistemul programului. > curatare consola"<<endl;
            cout<<"> back - Sistemul programului > (inapoi) util pentru a merge la pagina principala din comanda updatelog."<<endl;
            cout<<"================="<<endl;
            cout<<"> updatelog - Actualizarile programului"<<endl;
            cout<<"> credit - Cine a creeat si cine a ajutat creatorului sa faca.."<<endl;
        }
        if ( command == "exit") {
            break;
        }

        if ( command == "clear") {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            system ("CLS");
            cout<<"Scrie help (litere mici) pentru a primi o lista cu comenzi"<<endl;
        }

        if ( command == "credit" ) {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            cout<<"This program is made by Raul. It's made for school project."<<endl;
            cout<<"Thanks to..."<<endl;
            cout<<"Robert, who corrected my codes, he helped me to add commands function."<<endl;
            cout<<"Thanks to an programmers community, Computer Alphas and there is Jonas who helped me a lot with correcting and teaching me to code..."<<endl;
            cout<<"To learn to code Java, jJavascript, C++, C simple, etc, join this discord server: https://discord.gg/SmFAKD7 (you need discord account)"<<endl;
        }

        while ( command == "updatelog") {
            PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
            cout<<"Alege versiunea."<<endl;
            cout<<"Ultima versiune: "<<version<<endl;
            cin>>alegeversiunea;
            if ( alegeversiunea == "1.0") {
                PlaySound(TEXT("found.wav"), NULL, SND_SYNC);
                cout<<"Actualizari 1.0"<<endl;
                cout<<"Adaugarea sistemelor:-Comenzi (nu e comanda) - cautare comenzi + lista"<<endl;
                cout<<"                     -Adunare - Adunarea a 2 numere ( + )"<<endl;
                cout<<"                     -Scadere - Scaderea a 2 numere ( - )"<<endl;
                cout<<"                     -Inmultire - Inmultirea a 2 numere ( * )"<<endl;
                cout<<"                     -Impartire - Impartirea a 2 numere ( / )"<<endl;
                cout<<"                     -Credit - Programul creeat de... si ajutor primit de la..."<<endl;
                cout<<"                     -Clear - Curatarea ecranului"<<endl;
                cout<<"                     -UpdateLog - Lista cu actualizari."<<endl;
                cout<<"                     -Sounds - Sunete la executarea comenzilor, efectuarea calculelor, etc."<<endl;
            }
            if (alegeversiunea == "back") {
                PlaySound(TEXT("error.wav"), NULL, SND_SYNC);
                break;
                system("cls");
                cout<<maintext<<endl;
            }
        }
    }
    return 0;

}

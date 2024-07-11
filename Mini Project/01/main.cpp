#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

void display_time(string h, string m, string s){

    int hour = stoi(h);// ba estefade az tabe stoi ma string ro be int tabdil mikonim.
    int minute = stoi(m);
    int second = stoi(s);

    while(true){ //ba in kar yek halghe bi nahayat darim.
        system("cls");// ba in kar khrooji pak mishe va safhe siah mide.hadaf ine har bar pak kone va meghdar jadid biad.
        cout << hour << ":" << minute << ":" << second << endl;
        Sleep(1000);// mojeb tavaghof yek sanie dar kar mishe.(1000 mili sanie)
        second++;

        if(second > 59){
            second = 0;
            minute++;
        }
        if(minute > 59){
            minute = 0;
            hour++;
        }
        if(hour > 23){
            hour = 0;
        }
    }
}

void get_time(){

    long long now = time(0);//time system ro daryaft mikone.
    char *dt = ctime(&now);//time shamel adad na mafhoome.. pas oon ro dar ctime mirizim va char mikonim.

    string info;
    info = dt;//choon mikhaym az karbord haye string jelotar estefade konim.

    int index = info.find(":");//index avalin ":" ro behem mide.

    string hour;
    hour = info[index-2];
    hour += info[index-1];

    string minute;
    minute = info[index+1];
    minute += info[index+2];

    string second;
    second = info[index+4];
    second += info[index+5];

    display_time(hour, minute, second);
};

int main(){

get_time();

return 0;
}



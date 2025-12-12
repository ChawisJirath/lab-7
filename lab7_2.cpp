#include<iostream>
#include<string>
using namespace std ;
int main(){
    string name,numberstu,movie,day,stlast;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: "; getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": " ; getline(cin,numberstu); 
    cout << "Fahsai: I think you may be GEAR " << ((numberstu[0]- '0')*10+(numberstu[1]-'0'))-12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n"; 
    cout << name << ": " << day;getline(cin,day);
    cout << "Fahsai: "<< day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": " ; getline(cin,stlast);
    cout << "Fahsai: 555+ see you " << day <<". Bye Bye \\(^ ^)/";


    return 0;
}
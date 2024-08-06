#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand((unsigned)time(NULL));
    int mode;
    int tries = 0, maxNum = 0, random = 0;
    int guess;
    cout<<"Choose Mode:"<<endl<<"1. Easy"<<endl<<"2. Medium"<<endl<<"3. Hard"<<endl<<"4. Extreme"<<endl<<"5. Extreme II"<<endl<<"6. Extreme III"<<endl<<"Enter: ";
    cin>>mode;
    switch(mode){
        case 1:
            tries = 3;
            maxNum = 10;
            random = rand()%10;
            break;
        case 2:
            tries = 7;
            maxNum = 100;
            random = rand()%100;
            break;
        case 3:
            tries = 12;
            maxNum = 1000;
            random = rand()%1000;
            break;
        case 4:
            tries = 16;
            maxNum = 10000;
            random = rand()%10000;
            break;
        case 5:
            tries = 20;
            maxNum = 100000;
            random = rand()%100000;
            break;
        case 6:
            tries = 23;
            maxNum = 1000000;
            random = rand()%1000000;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
            mode = 7;
    };
    if(mode != 7){
        cout<<"The computer is thinking of a number between 1 and "<<maxNum<<endl;
        cout<<"You must guess that number in "<<tries<<" tries or less"<<endl;
    }
    for(int i = 0; i < tries; i++){
        if(mode == 7){
            break;
        }
       
        cout<<"Guess "<<i+1<<": "<<endl;
        cout<<"Enter number 1 to "<<maxNum<<": ";
        cin>>guess;
        if(i == 0 && guess == random){
            cout<<"Correct, First Try!"<<endl;
            break;
        }
        if(guess > random){
            cout<<"Too High"<<endl;
        }
        if(guess < random){
            cout<<"Too Low"<<endl;
        }
        if(guess == random && i != 0 && i < tries){
            cout<<"Correct, the number was "<<random<<endl;
            cout<<"It took you "<<i + 1<<" tries"<<endl;
            break;
        }
        if(i + 1 == tries){
            cout<<"You are out of attempts"<<endl;
            cout<<"The correct number was "<<random<<endl;
        }
    }
    
   
    return 0;
}

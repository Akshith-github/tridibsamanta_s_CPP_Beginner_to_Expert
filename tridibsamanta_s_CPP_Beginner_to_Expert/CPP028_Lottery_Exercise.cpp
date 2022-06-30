/**
 * Author:    Tridib Samanta
 * Created:   27.01.2020
 **/

#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void lottery(int, int);

int main() {

    int total_people,total_winners;
    cout<<"Enter the total number of people : "<<endl;
    cin>>total_people;
    cout<<"Enter the total number of prizes : "<<endl;
    cin>>total_winners;
    lottery(total_people,total_winners);
    return 0;
}

void lottery(int total_balls, int balls_to_draw)
{
    if(total_balls < balls_to_draw) {
        cout<<"Draw not possible";
        return;
    }

    cout<<"The winners are : "<<endl;

    srand(time(NULL));

    int *balls = new int[balls_to_draw];

    for(int i=0;i<balls_to_draw;i++) {

        balls[i] = rand() % total_balls + 1;

        for(int j=0;j<i+1;j++) {
            // cout<<i<<" , "<<j<<" balls[i] == "<<balls[i]<<"   =>";
            if(balls[i]==balls[j] && i!=j) { // from 0 to i if duplicate reduce i and make it again to reintialize random value
                i--;
                // cout << "i --   ||"<<endl ;
                break;
            }
            else if(j==i){ // if i is equal to j then break as so far no duplicates
                // cout<<"i == j balls [i] ";
                // cout<<endl<<endl<<"*******"
                cout<<i+1<<"th winner is player no "<<balls[i]<<endl;
            }
            // cout << endl;
        }
    }

    delete[] balls;
}

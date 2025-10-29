#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int total_money(int n){

    int total = 0;
    int deposit_amt = 1;  // Hercy saves 1$ on the 1st monday
    int current = deposit_amt;

    for(int day = 1; day <= n ; day++){

        total += current;

        if(day % 7 == 0){
            // start of new week
            deposit_amt ++;  // increament deposit_amt from prev by 1
            current = deposit_amt;
        }

        else{
            // tues - sun
            current ++; // increament by 1$ everyday
        }
    }

    return total;
}

int main(){

    int n; 
    cout << "Enter (n) number of days to see how much Hercy have saved at the end of nth day" << endl;
    cin >> n;
    
    int saved = total_money(n);
    cout << "Hercy have saved " << saved<< " till now "<< endl;




return 0;
}
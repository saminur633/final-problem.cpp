//problem 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++){
        int n;
        cin >> n;
        if(n % 2 == 0){
            cout << "Even" << endl;
        }else
        {
            cout << "Odd" << endl;
        }
    }
    return 0;
}
//problem 2
#include <bits/stdc++.h>
using namespace std;
bool isEven(string number)
{
    int last_digit = number[number.size()-1] - '0';
    return (last_digit % 2 == 0);
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 1; i<=t ; i++){
        string number;
        getline(cin , number);
        if(isEven(number)){
            cout << "even" << endl;
        }else
        {
            cout << "odd" << endl;
        }
    }
    return 0;
}
//problem 3
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int cnt = 0;
   for(int i = 1000; i>=1; i--){
    cout << i ;
    if(i%5!= 1){
        cout << " ";
        cnt++;
    }

    if(cnt == 5){
        cout << endl;
        cnt = 0;
    }
   }
    return 0;
}
//problem 4


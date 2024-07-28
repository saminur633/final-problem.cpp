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
#include <bits/stdc++.h>
using namespace std;
#define long long int li

int main()
{
   int t;
   cin >> t;
   for(int i = 1; i<=t;i++){
    int num;
    cin >> num;
     cout<<"Case "<<t<<": ";
    for(int i = 1;i<=num; i++){
        if(num% i== 0){
            cout << i << " ";
        }

        }
        cout << num << endl;
   }
   return 0;
}
//problem 5
#include <bits/stdc++.h>
using namespace std;
#define long long int li

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int firstdigit = n/ 10000;
    int lastdigit = n % 10;
    int sum = firstdigit + lastdigit ;
    cout << " sum = " << sum  << endl;
  }
   return 0;
}
// problem 6
#include <bits/stdc++.h>
using namespace std;
#define long long int li

int main()
{
  int t;
  cin >> t;
  for(int i = 1; i<=t; i++){
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
       for(int j = 1; j<=n; j++){
        cout << '*';
       }
       cout << endl;
    }

  }
   return 0;
}
//problem 7
#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long n) {
    long long root = sqrt(n);
    return root * root == n;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;
        if (isPerfectSquare(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
// problem 8


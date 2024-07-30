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
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; ++i){
        int n1, n2,n3;
        cin >> n1 >> n2 >> n3;
        int arr[3] = {n1,n2,n3};
        sort(arr,arr+3);
        cout << "case " << i << ": " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }
    return 0;
}
// problem 9
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial (n-1);

}
int main ()
{
    int t;
    cin >> t;
    int numbers[t];
    for(int i = 0; i<t; ++i){
        cin >> numbers[i];
    }
    for(int i =0; i<t; ++i){
        cout << factorial(numbers[i]) << endl;
    }

    return 0;
}
// problem 10
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 0; i<t; ++i){
        string line;
        getline(cin , line);
        stringstream ss(line);

        int count = 0;
        string word;
        while(ss >> word){
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
// problem 11
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i =0; i<t; ++i){
        string input;
        getline(cin , input);
        reverse(input.begin(), input.end());
        cout << input << endl;
    }
    return 0;
}
// problem 12
#include<bits/stdc++.h>
using namespace std;
int countVowels(const string &s) {
    string vowels = "aeiouAEIOU";
    int count = 0;
    for (char c : s) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

int main ()
{
     int T;
    cin >> T;
    cin.ignore();
    for (int i = 0 ; i < T; ++i) {
        string S;
        getline(cin, S);
        int vowelCount = countVowels(S);
        cout << "Number of vowels = " << vowelCount << endl;
    }
    return 0;
}
// problem 13
#include<bits/stdc++.h>
using namespace std;
int countWords(const string &s) {
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // to ignore the newline character after the number of test cases
    for (int i = 0; i < T; ++i) {
        string S;
        getline(cin, S);
        int wordCount = countWords(S);
        cout << " count = " << wordCount << endl;
    }
    return 0;
}
// problem 14
#include<bits/stdc++.h>
using namespace std;


int main() {
  int T;
  cin >> T;
  while(T--){
        int r1, r2, B;
        cin >> r1 >> r2 >> B;
        int ballsplayed = 300 - B;
        double currentRunRate = (double)r2 *6 / ballsplayed;
        int runsRequired = r1- r2+1;
        double requiredRunRate = (double)runsRequired * 6 / B;
        cout << fixed << setprecision(2) << currentRunRate << " " << requiredRunRate << endl;

  }
    return 0;
}
// problem 15
#include<bits/stdc++.h>
using namespace std;
int isArmstrong(int n)
{
    int number = n;
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += pow(digit ,3);
        n /= 10;
    }
    return sum == number;

}


int main() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        if(isArmstrong(n)){
            cout << n << " is an armstrong number!" << endl;
        }else
        {
            cout << n << " is not an armstrong number!" << endl;
        }
    }

    return 0;
}
// problem 16
#include <bits/stdc++.h>
using namespace std;

int charToNumeric(char c) {
    return c - 'A' + 1;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s;
        getline(cin, s);
        for (char c : s) {
            cout << charToNumeric(c);
        }
        cout << endl;
    }
    return 0;
}
//problem 17
 #include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s , word;
        getline(cin ,s);
        stringstream ss(s);
        bool first_word = true;
        while(ss >> word){
            reverse(word.begin(), word.end());
            if(!first_word){
                cout << " ";
            }
            cout << word;
            first_word = false;
        }
        cout << endl;
    }
    return 0;
}
// program 18
#include<bits/stdc++.h>
using namespace std;
double calculateArea(double a, double b, double c)
{
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main ()
{
    int T;
    cin >> T;
    while(T--){
        double a, b,c;
        cin >> a >> b >> c;
        double area = calculateArea(a,b,c);
        cout << fixed << setprecision(3) << "Area = " << area << endl;

    }
    return 0;
}
// problem 19
#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int T;
    cin >> T;
    while(T--){
       double x;
       cin >> x;
       int days = 0;
       while(x > 1.0){
        x /= 2;
        days++;
       }
       cout << days << " days " << endl;
    }
    return 0;
}
// problem 20
#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int T;
    cin >> T;
    for(int i = 1; i<=T; ++i){
        int x,k;
        cin >> x >> k;
        long long sum = 0;
        long long term = 1;
        for(int j =0; j<=k; ++j){
            sum += term;
            term *= x;
        }
        cout << "Result = " << sum << endl;
    }
    return 0;
}
// problem 21
#include<bits/stdc++.h>
using namespace std;
void transformstring(string &s)
{
    int n = s.size();
    for(int i =0; i<n;++i){
        if(s[i] == 'L' && i > 0 ){
            s[i] = s[i-1];
        }else if(s[i] == 'R' && i < n-1){

            s[i] = s[i+1];
        }
    }

}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        string s;
        getline(cin , s);
        transformstring(s);
        cout << s << endl;
    }
    return 0;
}
// problem 22
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (static_cast<long long>(a) / gcd(a, b)) * b;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << "LCM = " << lcm(a, b) << endl;
    }
    return 0; 
}
// problem 23
#include<bits/stdc++.h>
using namespace std;
int countWords(const string &s) {
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; ++i) {
        string S;
        getline(cin, S);
        int wordCount = countWords(S);
        cout << " count = " << wordCount << endl;
    }
    return 0;
}
// problem 24
#include <iostream>
#include <string>
using namespace std;

int countOccurrences(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string str;
        getline(cin, str);

        char ch;
        cin >> ch;
        cin.ignore(); // To ignore the newline character after ch

        int count = countOccurrences(str, ch);
        cout << "Occurrence of '" << ch << "' in '" << str << "' = " << count << endl;
    }

    return 0;
}
// problem 25
#include <iostream>
#include <vector>
using namespace std;

void printAlternateElements(const vector<int> &arr) {
    for (int i = 0; i < arr.size(); i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        printAlternateElements(arr);
    }

    return 0;
}
// problem 26
#include <iostream>
using namespace std;

void classifyCharacter(char c) {
    if (c >= 'A' && c <= 'Z') {
        cout << "Uppercase Character" << endl;
    } else if (c >= 'a' && c <= 'z') {
        cout << "Lowercase Character" << endl;
    } else if (c >= '0' && c <= '9') {
        cout << "Numerical Digit" << endl;
    } else {
        cout << "Special Character" << endl;
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        char c;
        cin >> c;
        classifyCharacter(c);
    }
    
    return 0;
}
// problem 27
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(const string &s)
{
    int left = 0;
    int right = s.length() -1;
    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right --;
    }
    return true;
}



int main() {
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        if(ispalindrome(s)){
            cout << "Yes! It is Palindrome" << endl;
        }else{
            cout << "Sorry! It is not a Palindrome" << endl;

        }
    }



    return 0;
}
// problem 28




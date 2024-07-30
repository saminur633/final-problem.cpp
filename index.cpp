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
#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

// Function to calculate factorial
long double factorial(int num) {
    long double result = 1.0;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate the sum of the series
long double seriesSum(int n) {
    long double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / factorial(i);
    }
    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        // Calculate and print the sum of the series up to n
        long double result = seriesSum(n);
        cout << fixed << setprecision(4) << result << endl;
    }

    return 0;
}
// problem 29
#include <iostream>
using namespace std;

// Function to print the diamond shape
void printDiamond(int n, int m) {
    // Upper part of the diamond
    for (int i = 0; i < n; ++i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // Print numbers
        for (int j = 0; j <= i; ++j) {
            cout << m;
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }
    // Lower part of the diamond
    for (int i = n - 2; i >= 0; --i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // Print numbers
        for (int j = 0; j <= i; ++j) {
            cout << m;
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        printDiamond(n, m);

        // Print a newline after each diamond except the last one
        if (T > 0) {
            cout << endl;
        }
    }

    return 0;
}
// problem 30
#include <iostream>
#include <cmath>
using namespace std;

// Function to determine if the point is inside the circle
bool isInsideCircle(int xc, int yc, int r, int x, int y) {
    // Calculate the squared distance between the point and the center of the circle
    long long dx = x - xc;
    long long dy = y - yc;
    long long distanceSquared = dx * dx + dy * dy;
    long long radiusSquared = r * r;
    return distanceSquared <= radiusSquared;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int xc, yc, r, x, y;
        cin >> xc >> yc >> r;
        cin >> x >> y;

        if (isInsideCircle(xc, yc, r, x, y)) {
            cout << "The point is inside the circle" << endl;
        } else {
            cout << "The point is not inside the circle" << endl;
        }
    }

    return 0;
}
// problem 31
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n1, n2;

        // Read the first array
        cin >> n1;
        vector<int> arr1(n1);
        for (int i = 0; i < n1; ++i) {
            cin >> arr1[i];
        }

        // Read the second array
        cin >> n2;
        vector<int> arr2(n2);
        for (int i = 0; i < n2; ++i) {
            cin >> arr2[i];
        }

        // Merge the two arrays
        vector<int> result;
        result.reserve(n1 + n2);
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (arr1[i] <= arr2[j]) {
                result.push_back(arr1[i]);
                i++;
            } else {
                result.push_back(arr2[j]);
                j++;
            }
        }

        // If there are remaining elements in arr1
        while (i < n1) {
            result.push_back(arr1[i]);
            i++;
        }

        // If there are remaining elements in arr2
        while (j < n2) {
            result.push_back(arr2[j]);
            j++;
        }

        // Print the merged array
        for (int k = 0; k < result.size(); ++k) {
            cout << result[k];
            if (k < result.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
// problem 32
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void countLetters(const string &str) {
    map<char, int> letterCount;

    // Count the occurrences of each letter
    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z') {
            letterCount[ch]++;
        }
    }

    // Print the letters and their counts in alphabetical order
    for (auto &entry : letterCount) {
        cout << entry.first << " = " << entry.second << endl;
    }
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after the integer input

    vector<string> strings(T);
    for (int i = 0; i < T; ++i) {
        getline(cin, strings[i]);
    }

    for (const string &str : strings) {
        countLetters(str);
        cout << endl; // Print a blank line between the outputs of each string
    }

    return 0;
}
// problem 33
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to separate and print vowels and consonants
void separateVowelsAndConsonants(const string &str) {
    string vowels;
    string consonants;

    // Separate vowels and consonants
    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z') {
            if (isVowel(ch)) {
                vowels += ch;
            } else {
                consonants += ch;
            }
        }
    }

    // Print the vowels and consonants
    cout << vowels << endl;
    cout << consonants << endl;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after the integer input

    vector<string> strings(T);
    for (int i = 0; i < T; ++i) {
        getline(cin, strings[i]);
    }

    for (const string &str : strings) {
        separateVowelsAndConsonants(str);
    }

    return 0;
}
// problem 34
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to find the starting index of a substring
int findSubstringIndex(const string &mainStr, const string &subStr) {
    size_t pos = mainStr.find(subStr);
    if (pos != string::npos) {
        return static_cast<int>(pos);
    } else {
        return -1; // In case the substring is not found, though it's guaranteed to be found
    }
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after the integer input

    vector<pair<string, string>> stringPairs(T);
    for (int i = 0; i < T; ++i) {
        string mainStr, subStr;
        getline(cin, mainStr, ' ');
        getline(cin, subStr);
        stringPairs[i] = make_pair(mainStr, subStr);
    }

    for (const auto &pair : stringPairs) {
        int index = findSubstringIndex(pair.first, pair.second);
        cout << index << endl;
    }

    return 0;
}
// problem 35
#include <iostream>
using namespace std;

// Function to print multiples of X up to N
void printMultiples(int X, int N) {
    if (X > N) {
        cout << "Invalid!" << endl;
        return;
    }
    
    // Print multiples of X up to N
    for (int multiple = X; multiple <= N; multiple += X) {
        cout << multiple << endl;
    }
}

int main() {
    int T;
    cin >> T;

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        int X, N;
        cin >> X >> N;
        printMultiples(X, N);
    }

    return 0;
}
// problem 36
#include <iostream>
using namespace std;

// Function to check if an array is sorted
bool isSorted(const int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false; // Found a pair where the current element is smaller than the previous one
        }
    }
    return true; // All elements are in non-decreasing order
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Check if the array is sorted
        if (isSorted(arr, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
// problem 37
#include <iostream>
using namespace std;

// Function to find the missing number
int findMissingNumber(int N, int arr[], int size) {
    // Calculate the expected sum of numbers from 1 to N
    long long expectedSum = static_cast<long long>(N) * (N + 1) / 2;

    // Calculate the actual sum of the array elements
    long long actualSum = 0;
    for (int i = 0; i < size; ++i) {
        actualSum += arr[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    return expectedSum - actualSum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int arr[N - 1];  // Array to hold N-1 elements
        for (int i = 0; i < N - 1; ++i) {
            cin >> arr[i];
        }

        // Find and print the missing number
        cout << findMissingNumber(N, arr, N - 1) << endl;
    }

    return 0;
}
// problem 38
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to reverse the digits of a number and print it
void reverseNumber(int N) {
    // Convert number to string
    string numStr = to_string(N);
    
    // Reverse the string
    reverse(numStr.begin(), numStr.end());
    
    // Print the reversed string
    cout << numStr << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        reverseNumber(N);
    }

    return 0;
}
// problem 40
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to generate and print the sum of powers of 2
void printPowersOfTwo(int N) {
    vector<string> terms;
    for (int i = N; i >= 0; --i) {
        terms.push_back("2^" + to_string(i));
    }

    // Print the terms separated by " + "
    for (size_t i = 0; i < terms.size(); ++i) {
        if (i > 0) {
            cout << " + ";
        }
        cout << terms[i];
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        printPowersOfTwo(N);
    }

    return 0;
}
// problem 41
#include <iostream>
#include <vector>
using namespace std;

// Function to generate Pascal's Triangle up to N rows
vector<vector<int>> generatePascalsTriangle(int N) {
    vector<vector<int>> triangle;

    for (int i = 0; i < N; ++i) {
        vector<int> row(i + 1, 1);

        // Fill in the values of the row
        for (int j = 1; j < i; ++j) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row);
    }

    return triangle;
}

// Function to print Pascal's Triangle
void printPascalsTriangle(const vector<vector<int>>& triangle) {
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Generate and print Pascal's Triangle up to N rows
        vector<vector<int>> triangle = generatePascalsTriangle(N);
        printPascalsTriangle(triangle);
        cout << endl;
    }

    return 0;
}
// --- End of course ---//





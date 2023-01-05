#include <iostream>
#include <vector>
using namespace std;



void reverse(vector<char>& s,int left, int right){
    if (left < right) {
        swap(s[left],s[right]);
        left++;
        right--;
        reverse(s,left,right);
    }
}

void reverseString(vector<char>& s) {
       reverse(s,0,s.size()-1); 
    }

int main(){
    string s = "Hello";
 
    vector<char> v(s.begin(), s.end());


    reverseString(v);
    for (int i =0;i<v.size();i++) {
        cout << v[i];
    }

}
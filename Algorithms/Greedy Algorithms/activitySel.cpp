#include <iostream>
#include <vector>
using namespace std;

bool compare(vector<int> vi, vector<int> ve){
    return (vi[1] < ve[1]);
}
int maxActivities(vector< vector < int > > & v){
    sort(v.begin(),v.end(),compare);
    int prev = 0;
	int res = 1;

	for(int curr = 1; curr < v.size(); curr++)
	{
	 
		if(v[curr][0] >= v[prev][1])
		{
			res++;

			prev = curr;
		}
    }
    return res;
}

int main(){
    vector< vector < int > > v ;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v.push_back(v1); 
    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v.push_back(v2);
    vector<int> v3;
    v3.push_back(5);
    v3.push_back(6);
    v.push_back(v3);
    vector<int> v4;
    v4.push_back(7);
    v4.push_back(8);
    v.push_back(v4);
    // vector<int> v5;
    // v5.push_back(12);
    // v5.push_back(21);
    // v.push_back(v5);
    // vector<int> v6;
    // v6.push_back(14);
    // v6.push_back(19);
    // v.push_back(v6);
    // vector<int> v7;
    // v7.push_back(23);
    // v7.push_back(27);
    // v.push_back(v7);
    sort(v.begin(), v.end(), compare);
    cout << "Intervals sorted by ending time in descending order : \n";
    for (int i = 0;i<v.size();i++)
        cout << "[" << v[i][0] << ", " << v[i][1] << "] ";
    cout<<endl<<maxActivities(v);
  
}
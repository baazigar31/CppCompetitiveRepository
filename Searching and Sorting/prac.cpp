#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countInversions' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
 long ans=0;
 void merge(vector<int> &arr,int si, int en, int si2, int en2){
     vector<int> temp(en2-si+1,0);
     int l=si;
     int k=0;
     while(si<=en and si2<=en2){
         if(arr[si]<=arr[si2]){
             temp[k++]=arr[si++];
         }else{
             temp[k++]=arr[si2++];
             ans+=(en-si+1);
         }
     }
     while(si<=en){
         temp[k++]=arr[si++];
     }
      
     while(si2<=en2){
         temp[k++]=arr[si2++];
     } 
     for(int i=0;i<k;i++){
         arr[l++]=temp[i];
     }
 }
 
 
void mergeSort(vector<int> &arr,int si, int en){
    if(si>=en){
        return ;
    }
    int mid=(si+en)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr, mid+1, en);
    merge(arr,si,mid,mid+1,en);
}



long countInversions(vector<int> arr) {
    int n=arr.size();
    mergeSort(arr,0,n-1);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        long result = countInversions(arr);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

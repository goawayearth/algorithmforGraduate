#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,char> total;
    total.insert(make_pair("red",'A'));
    total.insert(make_pair("orange",'B'));
    total.insert(make_pair("yellow",'C'));
    total.insert(make_pair("green",'D'));
    total.insert(make_pair("cyan",'E'));
    total.insert(make_pair("blue",'F'));
    total.insert(make_pair("purple",'G'));

    string a[7] = {"red","orange","yellow","green","cyan","blue","purple"};

    
    int n;
    while(cin>>n){
        set<string> current;
        vector<char> vec;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            current.insert(s);
        }
        for(int i=0;i<7;i++){
            auto it = current.find(a[i]);
            if(it == current.end()){
                //没找到
                vec.push_back(total[a[i]]);
            }
        }
        cout<<vec.size()<<endl;
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<endl;
        }
    }


}
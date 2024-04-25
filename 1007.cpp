#include <bits/stdc++.h>

using namespace std;

int main(){

	string start1;
	while(cin>>start1){
		cin.ignore();
		if(start1 == "ENDOFINPUT")
			return 0;
		string str1;
		getline(cin,str1);
		string end1;
		getline(cin,end1);
		for(int i=0;i<str1.size();i++){
			if(str1[i]>='A' && str1[i] <= 'Z'){
				str1[i] = 'A'+(int)((str1[i]-'A'+21) % 26);
			}
		}
		cout<<str1<<endl;	
	}
}





 

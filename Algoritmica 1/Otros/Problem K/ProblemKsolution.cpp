#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main() {
	vector<bool> abc(30);
	vector<string> words;
	int N;
	cin>>N;
	for(int i = 0; i<N; i++) {
		string word;
		cin>> word;
		words.push_back(word);
		abc.at(word.at(0)-'A')=true; 
	}
	bool result = false;
	for(int i = 0 ; i< N; i++) {
		int flag = true;
		for(int j=0;j<words.at(i).size();j++){
			if(!abc[words.at(i).at(j)-'A']){
				flag = false;
			}
		}
		result = result || flag;
	}
	if(result) {
		cout<<'Y'<<endl;
	}else {
		cout<<'N'<<endl;
	}
 
	return 0;
}
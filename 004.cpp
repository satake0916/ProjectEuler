#include<bits/stdc++.h>
using namespace std;

bool isPalindromic(int x){
	string s = to_string(x);
	int l = 0, r = s.size()-1;
	while(l < r){
		if(s[l] != s[r]) return false;
		l++, r--;
	}
	return true;
}

int main(){
	int ans = -1;
	for(int i = 100; i < 1000; i++){
		for(int j = i; j < 1000; j++){
			if(isPalindromic(i*j)) ans = max(ans, i*j);
		}
	}
	cout << ans << endl;
}

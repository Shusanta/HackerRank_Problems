#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


string isPalindrome(string &pali, int st, int end) {
  if (pali == string(pali.rbegin(), pali.rend())) 
    return pali;
  else {
      return "c";
  }
}

string makePal(string &n_Val,int count){
    string pal(count, ' ');
    int place =0;
    int single =0;
    int half = count/2;
        
    for(int i = 0, j = 1, k =0; j<count;){
        
        if(n_Val[i]==n_Val[j]) {
           
            if(k==half)
           {
               k++;
           }
           pal[k] = n_Val[i];
           pal[(count-1)-k] = n_Val[j];
           k++;
        }
        
        if(n_Val[i]!=n_Val[j] && single== 0){
            single =1;
            pal[count/2] = n_Val[i];
            
        }
        i=i+2;
        j=i+2;
        
        if(!j && single==0 && i){
            pal[count/2] = n_Val[i];
            break;
        }   
    }
    return pal;
    
}

string storeValue(string &val1,string &val2){
    string n_Val = val1+ val2;
    std::sort(n_Val.begin(),n_Val.end());
    string palindrome;
    int count =1;
    int single =0;
    for(int i = 0, j = 1; j<n_Val.length();){
        if(n_Val[i]==n_Val[j])
        {
            count++;
        }
        if(n_Val[i]!=n_Val[j] && single== 0){
            single =1;
            count++;
        }
        i=i+2;
        j=i+2;
        if(!j && single==0){
            single =1;
            count++;
        }
        
        palindrome = makePal(n_Val,count);
    }
    return palindrome;
}

vector<string> values() {
int amount =0;
    cin >> amount;
    string val1;
    string val2;
    vector<string> palindrome;
    for(int i =0; i<amount; i++) {
        cin>>val1;
        cin>>val2;
       palindrome.push_back(storeValue(val1,val2));
    }
    return palindrome;
}



int main() {
    vector<string> palins;
    
    palins = values();
    
    vector<string>::iterator it;
    int i= 0;
    for(it=palins.begin() ; it < palins.end(); it++,i++) {
    
        cout << palins[i] << "\n";
    }
}
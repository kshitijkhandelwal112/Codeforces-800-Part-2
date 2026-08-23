// Learning Constructive algorithms using this example from an LLM.
// also learnt how to handle a different form of input. (and usage of stringstream)

// All this below just got messed up, but told lot of things:
/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    // Here input would be a set of format {a, b, c}
    string input;
    // cin>>input; is WRONG because it stops just after single space.
    getline(cin,input); // This is the right way.
    for(char &ch:input){ // This was alternative method of using for loop, instead of doing i=0;i<n;i++ everytime.
        if(ch=='{'||ch=='}'||ch==',') ch=' ';
    }
    // Now creating an array of the actual required elements.
    stringstream ss(input); // 'ss' is not a keyword, we may write any other word, it is a kind of variable name.

    // If instead of a,b,c.... the elements were words, we would write:
    // string word;
    // while(ss >> word)
    char letter;

    int x=0; char arr[1000]; // Variable length arrays are invalid when we don't use <vector>
    int i=0;
    while(ss >> letter){
        x++;
        arr[i]=letter;
        i++;
    }
    int total=x;
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arr[j]==arr[i]) total--;
        }
    }
    cout<<total<<endl;
    return 0;
}
    */
/*
using namespace std;
int main(){
    char abc[26];
    bool ABC[26]={false};
    for(int i=0;i<26;i++) abc[i]='a'+i; // Nice method told by AI to create this array.
    string str; getline(cin, str);
    int inputlength=0;
    for(int i=0;i<str.length();i++){
        for(int j=0;j<26;j++){
            if(str[i]==abc[j]) inputlength++;
        }
    }
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]) inputlength--;
        }
    }
    cout<<inputlength<<endl;
    return 0;
}
    */
   // Even this didn't do anything.

// FINALLY WRITING LAST SOLUTION, AFTER TAKING SOME HINT FROM AI
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str; getline(cin, str);
    bool seen[26]={false}; // This was a great logic, and was also given in official hint of the problem.
    int n=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<123 && seen[str[i]-97]==false){seen[str[i]-97]=true; n++;}
        // else if(seen[str[i]-97]==true);
    }
    cout<<n<<endl;
    return 0;
}
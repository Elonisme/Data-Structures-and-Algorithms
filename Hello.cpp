#include<iostream>
using namespace std;
int main(){
    string txt="123456";
    string a="";
    cout<<txt.size()<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<txt[i]<<":"<<sizeof(txt[i])<<endl;
    }
    
    
    return 0;
}
#include<iostream>
using namespace std;

string HextoDec(string x){
    int n=x.size()-1;
    char* temp=new char[x.size()];
    for (int i = 0; i < x.size(); i++)
    {
        if(0<=x[i]<10){
            temp[i]=x[i]*16^n;
        }
        else if(x[i]=='A'){
            temp[i]=10*16^n;
        }
         else if(x[i]=='B'){
            temp[i]=11*16^n;
        }
         else if(x[i]=='C'){
            temp[i]=12*16^n;
        }
         else if(x[i]=='D'){
            temp[i]=13*16^n;
        }
         else if(x[i]=='E'){
            temp[i]=14*16^n;
        }
         else if(x[i]=='F'){
            temp[i]=15*16^n;
        }
    }
    string y=temp;
    return y;
}

string DectoOct(string x){
    int temp=stoi(x);


}

string HextoOct(string x){
    string y=DectoOct(HextoOct(x));
    return y;
}

int main(){
    int n;
    cin>>n;
    string* Hex=new string[n];
    for (int i = 0; i < n; i++)
    {
        cin>>Hex[i];
    }
    string* Oct=new string[n];
    for (int i = 0; i < n; i++)
    {
        Oct[i]=HextoOct(Hex[i]);
        cout<<Oct[i]<<endl;
    }
}
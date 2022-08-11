#include <iostream>
using namespace std;

int main() {
    char str[30000];
    char pointer[30000];
    char count;
    int intCounter=0;
    int index=0,fakeIntCount,fakeIndex;
    cin>>str;
    cout<<str<<endl;
    while(true){
        count=str[intCounter];
        if(index<0){
            cout<<"Out of Range Error!";
            break;
        }
        if(count=='\0')
            break;
        if(count=='>')
            index++;
        if(count=='<')
            index--;   
        if(count=='+')
            pointer[index]++;
        if(count=='-')
            pointer[index]--;
        if(count=='.')
            cout<<pointer[index];
        if(count==',')
            cin>>pointer[index];
        if(count=='['){
            fakeIndex=index;
            if(pointer[index]==0){
              while(count!=']'){
                count=str[intCounter];
                intCounter++;
              }
            }
        }
        if(count==']'){
          if(pointer[fakeIndex]!=0){
            while(count!='['){
              count=str[intCounter];
              intCounter--;
            }
          }
        }      
        intCounter++;
    }
    return 0;
}

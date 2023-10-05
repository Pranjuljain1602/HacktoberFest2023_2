#include<iostream>
using namespace std;
int main()
{
    int num;

    cout << "enter the number: " << endl;

    cin>>num;

    for(int i=num; num>=1; num--){
        cout<<"the number is "<<num<<endl;
    }
    return 0;
}
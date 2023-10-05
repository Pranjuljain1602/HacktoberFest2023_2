#include<iostream>
using namespace std;
int main()
{
    int num;

    cout <<"Enter the number which you print the table ";

    cin >> num;

    for(int i=1; i<=10; i++ ){
        cout<<"the table is "<<num*i <<endl;
    }
    return 0;
}
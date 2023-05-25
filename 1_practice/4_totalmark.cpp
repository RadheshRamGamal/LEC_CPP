#include <iostream>
using namespace std;
#include <string>
int main(){
    string array[5]= {"math","oop","ect","em","toc"};
    int arra_of_mRK[5];
    int i,sum=0;
    for( i = 0 ; i<5 ; i++){
        cout<<array[i];
        cout<<"enter the marks of "<< array[i]<<":";
        cin>>arra_of_mRK[i];
        sum+=arra_of_mRK[i];
    }
    cout<<"the total mark is:"<<sum;

}

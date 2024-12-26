#include<iostream>
using namespace std;

void push(int arr[], int &top ,int size , int number){
    
    if (top == size-1){
        cout << "Stack Overflow" << endl;
    }else{
        arr[++top] = number;
        
    }
}
void pop(int arr[] , int &top){
    if (top == -1){
        cout<<"Stack is Empty";
    }else{
        cout<<"Poped Element is "<<arr[top--]<<endl;
    }
}

void display(int arr[] , int &top ){
    int i = 0;
    for(i = top ; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n, number;
    int top = -1;
     cout<<"Enter the Array Size :";
     cin>>n;

     int arr[n];

     for (int i=0; i<n; i++){
        cout<<"Enter the Elements to be Stored :";
        cin>>number;

        push(arr , top , n, number);
     }

     pop(arr , top);
     display(arr , top);
}
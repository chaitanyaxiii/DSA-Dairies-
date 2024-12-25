#include<iostream>

using namespace std;

void SparceMatrix(){
int arr[3][3];
int sparcearr[9][3];
int count = 0;


// getting User Inputs
for(int i=0 ; i<3 ; i++){
for(int j = 0; j<3 ; j++){
cout<<"Enter The Elements For "<<i<<" and "<<j<<" : ";
cin>>arr[i][j];

if(arr[i][j] != 0){
sparcearr[count][0] = i;
sparcearr[count][1] = j;
sparcearr[count][2] = arr[i][j];
count++;
}
}
}

// displaying the Matrix

cout<<endl;

cout<<"The Matrix is :"<<endl;

for(int i=0 ; i<3 ; i++){
for(int j = 0; j<3 ; j++){
cout<<"["<<arr[i][j]<<"]";
}cout<<endl;
}




// Displaying Sparce Matrix
cout<<"The Sparce Matrix is :"<<endl;
for(int i = 0 ; i<count ; i++){
cout<<"["<<sparcearr[i][0] <<", "<<sparcearr[i][1] <<", "<<sparcearr[i][2]<<"]"<<endl;
}





}


int main(){
SparceMatrix();

return 0;

}
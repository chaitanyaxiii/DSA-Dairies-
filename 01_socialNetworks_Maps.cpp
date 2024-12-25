#include<iostream>
using namespace std;

void SocialNetwork(){
    int arr[3][3];
    // int 3 = sizeof(arr)/sizeof(arr[0]);
    int sparceMatrix[9][3];
    int count = 0;

    for (int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<"Are User "<<i<< " and User "<<j<<" Friends (1/0) :";
            cin>>arr[i][j];

            if(arr[i][j] != 0){
                sparceMatrix[count][0] = i;
                sparceMatrix[count][1] = j;
                sparceMatrix[count][2] = arr[i][j];
                count++;
            }
        }
    }

    // Display Friend Matrix

    for (int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<" "<<endl;
        }
        cout<<endl;
    }

    // Sparce Matrix 

    for(int i=0 ; i<count ; i++){
        cout<<"User "<<sparceMatrix[i][0]<<" is friends with User "<<sparceMatrix[i][1]<<sparceMatrix[i][2];
    }


}
void Maps(){
    int arr[3][3];
    // int 3 = sizeof(arr)/sizeof(arr[0]);
    int sparceMatrix[9][3];
    int count = 0;

    for (int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<"Distance "<<i<< "from  User "<<j<<" (if they are connected then enter the Value of the distance) (1/0) :";
            cin>>arr[i][j];

            if(arr[i][j] != 0){
                sparceMatrix[count][0] = i;
                sparceMatrix[count][1] = j;
                sparceMatrix[count][2] = arr[i][j];
                count++;
            }
        }
    }

    // Display Friend Matrix

    for (int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<" "<<endl;
        }
        cout<<endl;
    }

    // Sparce Matrix 

    for(int i=0 ; i<count ; i++){
        cout<<"Connection "<<sparceMatrix[i][0]<<" is friends with User "<<sparceMatrix[i][1]<<sparceMatrix[i][2];
    }


}

int main(){
    cout << "Social Network Example:\n";
    SocialNetwork();
    cout << "\n----------------------------------\n";
    cout << "Map Example:\n";
    Maps();
    return 0;
}
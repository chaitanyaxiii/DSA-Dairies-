#include<iostream>
using namespace std;

void readPoly(int poly1[] , int degree){
    for(int i = 0; i<= degree; i++){
        cout<<"Enter the Co - efficients of "<<i<<" : ";
        cin>>poly1[i];
    }
}

void addPoly(int poly1[], int poly2[] ,int resultAdd[], int degree){
    for(int i=0 ; i<= degree ; i++){
        resultAdd[i] = poly1[i] + poly2[i];
    }
}

void subPoly(int poly1[], int poly2[] ,int resultSub[], int degree){
    for(int i=0 ; i<= degree ; i++){
        resultSub[i] = poly1[i] - poly2[i];
    }
}

void productPoly(int poly1[], int poly2[] ,int resultprod[], int degree1 , int degree2){
    
    for(int i=0 ; i< degree1 + degree2 ; i++){
        resultprod[i] = 0;
    }
    for(int i=0 ; i<=degree1; i++){
        for(int j = 0; j<=degree2 ; j++)
        resultprod[i+j] = poly1[i] * poly2[j];
    }
    
}

void displayRes(int result[] , int degree){
    for (int i = degree ; i>=0 ;i--){
        if(result[i] !=0) {
            cout<<result[i]<<"x^"<<i<<" + ";
            if(i != 0) cout<<" + ";
        }
    }
}
int main(){
    int degree1, degree2;

    cout<<"Enter the Degree for the Polynomial 1 :";
    cin>>degree1;

    cout<<"Enter the Degree for the Polynomial 2 :";
    cin>>degree2;

    int poly1[degree1+1], poly2[degree2+2], resultadd[max(degree1 , degree2 )+1] , resultsub[max(degree1 , degree2 )+1] , resultMul[max(degree1 , degree2 )+1];

    cout<<"Enter the Co-efficients for the Polynomial 1 :"<<endl;
    readPoly(poly1 , degree1);

    cout<<"Enter the Co-efficients for the Polynomial 2 :"<<endl;
    readPoly(poly2 , degree2);

    addPoly(poly1 , poly2 , resultadd , max(degree1 , degree2));
    cout<<"Addition of Polynomials "<<endl;
    displayRes(resultadd , max(degree1 , degree2));

    subPoly(poly1 , poly2 , resultsub , max(degree1 , degree2));
    cout<<"Subtraction of Polynomials ";
    displayRes(resultsub , max(degree1 , degree2));

    productPoly(poly1 , poly2 , resultMul , degree1 , degree2);
    cout<<"Multiplication of Polynomials ";
    displayRes(resultMul , max(degree1 , degree2));
    

    

}
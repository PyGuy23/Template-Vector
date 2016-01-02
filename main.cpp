//
//  main.cpp
//  Template Vector
//
//  Created by newuser on 1/2/16.
//  Copyright © 2016 Template Vector. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include <vector>
#include<stdexcept>
using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int>&);

vector<int>integers1(7);
vector<int>integers2(10);



int main() {
    // insert code here...
    
    cout<<"size of vector intergers1"<< integers1.size()
    <<"\nvector after initialization:" <<endl;
    
    outputVector(integers1);
    
    cout<<"Size of vector integer2:" <<integers2.size()
    <<"\nvector after initialization:"<<endl;
    
    outputVector(integers2);
    
    
    cout<<"\nEnter 17 integers:" <<endl;
    inputVector(integers1);
    inputVector(integers2);
    
    cout<<"After input, the vectors contain:\n"
    <<"intergers1:"<<endl;
    outputVector(integers1);
    cout<<"integers2:"<<endl;
    outputVector(integers2);
    
    cout<<"\nEvaluating: integers1 != integers2" <<endl;
    
    if(integers1 != integers2)
        cout<<"Integers1 and integers2 is now equal"<<endl;
    
    vector<int>integers3(integers1);
    
    
    cout<<"\nSize of vector integers3:"<<integers3.size()
    <<"\nVector after initialization:"<<endl;
    outputVector(integers3);
    
    cout<<"\nAssigning integers2 to integers1:"<<endl;
    integers1 = integers2;
    cout<<"integers1:"<<endl;
    outputVector(integers1);
    cout<<"integers2:"<<endl;
    outputVector(integers2);
    
    cout<<"\nEvaluating:  integers1 == integers2" <<endl;
    
    
    if(integers1 == integers2)
        cout<<"integers1 and integers2 are equal"<<endl;
    cout<<"\nintegers1[5] is "<<integers1[5];
    
    cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
    integers1[5]=1000;
    cout<<"integers1:"<<endl;
    outputVector(integers1);
    
    try{
        cout<<"\nAssigning to display integers1.at(15)"<<endl;
        cout<<integers1.at(15) << endl;
        
    }
    catch(out_of_range &ex)
    {
        cerr<<"An exception occurred:" <<ex.what() <<endl;
    }
    
    cout<<"\nCurrent integers3 size is:" <<integers3.size()<<endl;
    integers3.push_back(1000);
    cout<<"integers3 now contains:";
    outputVector(integers3);
    
    
    
    
    
    

        return 0;
}

void outputVector(const vector<int> &array)
{
    for(int item  : integers1)
        cout<< item << " ";
    
    
    cout<<endl;
    
}

void inputVector(vector<int> &array)
{
    for(int &item  : integers2)
        cin>>item;
}

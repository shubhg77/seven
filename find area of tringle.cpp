#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int side1,side2,side3,area,s;
    cout<<"input the a is :";
    cin>>side1;
    cout<<"input the b is :";
    cin>>side2;
    cout<<"input the c is";
    cin>>side3;
    s=(side1+side2+side3)/2 ;
    area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
    cout<<"the area of trigle is :"<<area;
	
	return 0;
}

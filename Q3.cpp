//A school teacher wants to give some face masks to the students in her class.
//All the students sit in a line and each of them has a score according to his or her
//performance in the class. Students can’t change their seating order. Teacher
//wants to give at least 1 face mask to each student. If two students sit next to each
//other, then the one with the higher score must get more face masks. Note that
//when two children have equal score, they are allowed to have different number
//of face masks.
//This problem is teacher wants to minimize the total number of face masks she
//must buy.


#include <bits/stdc++.h> /*To use sort() function*/
#include<iostream>

using namespace std;

int main(){
	
	int noOfProducts,i,j,container,limit;
	int weights[noOfProducts];

	cin>>noOfProducts;
 	
 	/*To get user input weights list */
 	for(i=0;i<noOfProducts;i++)
		cin>>weights[i];

	/*All the weights are sorted in ascending order here by sort() provided by STL*/	
    sort(weights, weights + noOfProducts); 

	/*Relevant to the greedy approcah*/
	container = 1;
	limit=weights[0]+4;
	
	for(i = 1 ; i<noOfProducts ; i++){
		
		if(weights[i]>limit){
		container++;
		limit = weights[i]+4;
	}
}
	cout<<container<<endl;
	
	return 0;
}

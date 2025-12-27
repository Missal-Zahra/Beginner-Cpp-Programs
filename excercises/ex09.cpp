#include <iostream>
using namespace std;

int main() 
{
    
    double score1, score2, score3, score4, score5, average;
    
   
    cout << "Enter test 1  scores: ";
    cin >> score1;
    cout<<" Enter the 2 test score: ";
    cin>> score2;
    cout<<" enter the 3 test score: ";
    cin>>score3;
    cout<<" enter the 4 test score: ";
    cin>>score4;
    cout<<" enter the 5 test score: ";
    cin>>score5;
    
    
  
    average = (score1 + score2 + score3 + score4 + score5) / 5.0;
    
    
    cout << "The average test score is: " << average << endl;
    
    return 0;
}


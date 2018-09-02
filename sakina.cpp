#include <iostream>
using namespace std;

int main() {
	int score;
	cout<<" enter score";
	cin>>score;
if(score>=80){
	cout<<" the grade is A";
}else{
// do nothing
}if(score<=79&& score>=75){
	cout<<" the grade is B+";
}else{
	// do nothing
}if(score<=74&& score>=70){
	cout<<" the grade is B";
}else{
	// do nothing
}if(score<=69&& score>=65){
	cout<<" the grade is C+";
}else{
	// do nothing
}if(score<=64&& score>=60){
	cout<<" the grade is C";
}else{
	// do nothing
}if( score<60){
	cout<<" the grade is F";
}else{
	// do nothing
}
return(0); }

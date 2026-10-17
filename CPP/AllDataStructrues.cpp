#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){
/*========================================================
//1. Vector
========================================================*/
cout<<"===VECTOR==="<<endl;
vector<int>numbers; //<> -> Generics 
//insert elements 
numbers.push_back(50);
numbers.push_back(20);
numbers.push_back(80);
numbers.push_back(10);
numbers.push_back(40);

cout<<"Vectors elements : ";

for(int x:numbers){
	cout<<x<<" ";
}

cout<<endl;

//sort
sort(numbers.begin(),numbers.end());

cout<<"After sorting : ";

for(int x:numbers){
	cout<<x<<" ";
}
cout<<endl;

//search
int searchValue = 40;

if(find(numbers.begin(),numbers.end(),searchValue)!=numbers.end())
{
	cout<<searchValue<<"bFound in vector"<<endl;
}
else{
	cout<<searchValue<<" not found"<<endl;
}
cout<<"Size : "<<numbers.size()<<endl;

/*========================================================
2.LIST
========================================================*/

cout<<"\n====LIST===="<<endl;
list<string>students;

students.push_back("Rahul");
students.push_back("Amit");
students.push_back("Sneha");

students.push_front("Priya");

cout<<"Students : ";

for(string name : students)
{
	cout<<name<<" ";
}
cout<<endl;
students.pop_front();
cout<<"After pop_front : ";
for(string name: students){
	cout<<name<<" ";
}
cout<<endl;

/*========================================================
3.DEQUE
========================================================*/
cout<<"\n====DEQUE===="<<endl;
//each element contains address of elements from its side 
deque<int> d;
d.push_back(30);
d.push_back(40);
d.push_front(20);
d.push_front(10);

cout<<"Deque : ";

for(int x:d){
	cout<<x<<" ";
}
cout<<endl;

d.pop_front();
d.pop_back();

cout<<"After Deletion : ";

for(int x:d){
	cout<<x<<" ";
}
cout<<endl;

/*========================================================
4.STACK
========================================================*/
cout<<"\n====STACK===="<<endl;

stack<int>st;

st.push(10);
st.push(20);
st.push(30);
st.push(40);
cout<<"Top elements : "<<st.top()<<endl;
cout<<"Stack Elements : ";

while(!st.empty()){
	cout<<st.top()<<" ";
	st.pop();
}
cout<<endl;

/*========================================================
5.QUEUE
========================================================*/
cout<<"\n====QUEUE===="<<endl;

queue<string> q;
q.push("Rahul");
q.push("Amit");
q.push("Sneha");
q.push("Priya");

cout<<"Front element : "<<q.front()<<endl;
cout<<"Back element : "<<q.back()<<endl;

cout<<"Queue elements : ";

while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}
cout<<endl;

/*========================================================
6.PRIORITY QUEUE
========================================================*/

cout<<"\n====PRIORITY QUEUE===="<<endl;

priority_queue<int> pq;

pq.push(50);
pq.push(10);
pq.push(80);
pq.push(30);

cout<<"Priority Queue : ";

while(!pq.empty()){
	cout<<pq.top()<<" ";
	pq.pop();
}
cout<<endl;

/*========================================================
7.SET
========================================================*/

cout<<"\n====SET===="<<endl;

set<int> marks;

marks.insert(80);
marks.insert(50);
marks.insert(90);
marks.insert(50);//duplicate ignored
marks.insert(70);

cout<<"Set elements : ";

for(int x:marks){
	cout<<x<<" ";
}
cout<<endl;

if(marks.find(90)!=marks.end()){
	cout<<"90 found in set"<<endl;
}

/*========================================================
8.MAP
========================================================*/

cout<<"\n====MAP===="<<endl;
//key value pair
map<int,string>student;
student[101] = "Rahul";
student[102] = "Amit";
student[103] = "Sneha";
student[104] = "Priya";

cout<<"Students Records : "<<endl;

for(auto data:student){
	cout<<"Roll No : "<<data.first<<"Name : "<<data.second<<endl;
}
cout<<endl;

int roll = 103;

if(student.find(roll) != student.end()){
	cout<<"Student found : "
		<<student[roll]<<endl;
}

/*========================================================
9. UNORDERED MAP
========================================================*/
cout<<"\n====UNORDERED MAP===="<<endl;

unordered_map<string,int>salary;

salary["rahul"] = 25000;
salary["Amit"] = 30000;
salary["Sneha"] = 35000;

for(auto data:salary){
	cout<<data.first<<" : "<<data.second<<endl;
}

/*========================================================
10. STL ALGORITHMS
========================================================*/

cout<<"\n====STL ALGORITHMS===="<<endl;

vector<int>values = {10,20,30,40,50};

//count
cout<<"Number of Elements : "<<values.size()<<endl;
	
//maximum
cout<<"Maximum : "<<*max_element(values.begin(),values.end())<<endl;

//minimum
cout<<"Minimum : "<<*min_element(values.begin(),values.end())<<endl;
	
//reverse
reverse(values.begin(),values.end());
cout<<"After reverse : ";

for(int x:values){
	cout<<x<<" ";
}
cout<<endl;

//sum using accumulate
int sum = 0;
for(int x:values){
	sum+=x;
}
cout<<"Sum  :"<<sum<<endl;

/*========================================================
11.BINARY SEARCH
========================================================*/

cout<<"\n====BINARY SEARCH===="<<endl;
vector<int> searchNumbers = {10,20,30,40,50,60,70};

int key = 40;
if(binary_search(
	searchNumbers.begin(),
	searchNumbers.end(),
	key))
	{
		cout<<key<<" found"<<endl;
	}
	else{
		cout<<key<<" not found"<<endl;
	}

/*========================================================
12.COUNT FUNCTION
========================================================*/
cout<<"\n====COUNT===="<<endl;

vector<int> data = {10,20,10,30,10,40};

int countValue = count(data.begin(),data.end(),10);

cout<<"10 occurs "<<countValue<<" times"<<endl;

/*========================================================
13.UNIQUE
========================================================*/

cout<<"\n====UNIQUE===="<<endl;

vector<int> duplicateData = {10,20,20,30,30,40,40};

sort(duplicateData.begin(), duplicateData.end());

duplicateData.erase(
	unique(
		duplicateData.begin(), duplicateData.end()
	),
		duplicateData.end()
);
cout<<"After Removing duplicates : ";

for(int x:duplicateData){
	cout<<x<<" ";
}
cout<<endl;

/*========================================================
14.SWAP
========================================================*/

cout<<"\n====SWAP===="<<endl;

int a = 100;
int b = 200;
cout<<"Befor swap : "<<a<<" "<<b<<endl;

swap(a,b);
cout<<"After swap : "<<a<<" "<<b<<endl;

/*========================================================
15.PAIR
========================================================*/
cout<<"\n====PAIR===="<<endl;
pair<int,string>employee;
employee.first = 101;
employee.second = "Raj";

cout<<"Employee ID : "<<employee.first<<endl;
cout<<"Employee Name : "<<employee.second<<endl;
cout<<"\n====Program Completed===="<<endl;
return 0;
}


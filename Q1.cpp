#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void print(auto const &vector)
{
   for(auto i:vector){
      cout<<i<<",";
 }
cout<<endl;
}

int main()
{
      vector<string> vector1={"virendra sachin","Saurau","Rahul","Laxman"}; 
      vector<string>vector2={"Harbhajan", "Ashish", "Rahul", "Yuvraj", "Saurav"};

      vector<string> v(vector1);
      v.insert(v.end(),vector2.begin(),vector2.end());
      print(v);

     v.clear();

 /*   vector<string> v1(vector1.size() + vector2.size());

    set_union(vector1.begin(),vector1.end(),vector2.begin(),vector2.end(),v1.begin());
cout<<"new vector: ";
print(v1);*/
return 0;
       
}

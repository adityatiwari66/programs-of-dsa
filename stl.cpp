#include<iostream>
#include<vector>
using namespace std;
template<class T>
 void display (vector<T> &v ){

    for (int i = 0 ; i< v. size() ; i++ ){
       // cout << v[i]<< " " ;
        cout << v.at(i)<< " " ;

    }
    cout << endl;

}
int main(){
    vector<int> vec1 ; //zero lenth vector 
    
    vector<char > vec2(4) ; // 4 - element charcter vector 
    vec2.push_back('5');
    display(vec2);
      vector<char > vec3(vec2) ; // 4- element charecter vector form  vec2 
      display(vec3);
      vector <int > vec (6,4) ; // 6 element vecter of 3s 
      display (vec);

    return 0;
}
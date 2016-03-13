#include <iostream>
#include <vector>
using namespace std;

class Number{};

void clean(const vector<vector<Number *> >& v){
    vector<vector<Number *> >::const_iterator itr = v.begin(); 
}

int main(){
    vector<vector<Number *> > t;
    clean(t);
}

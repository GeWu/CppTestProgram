#include <iostream>
#include <set>
#include <Algorithm>

using namespace std;

struct stringPtrLess:
    public binary_function<const string*, const string*, bool>{
        bool operator()(const string* ps1, const string* ps2)const{
            return *ps1 < * ps2;
        }
};

struct DereferenceLess{
    template<typename PtrType>
        bool operator()(PtrType pt1, 
                PtrType pt2) const{
            return *pt1 < *pt2;
        }
};

void print(const string* ps){
    cout << *ps << endl;
}

void output(){
    set<string*, DereferenceLess> ssp;
    ssp.insert(new string("Anteater"));
    ssp.insert(new string("wombat"));
    ssp.insert(new string("Lemur"));
    ssp.insert(new string("Penguin"));

    for_each(ssp.begin(), ssp.end(), print);

}

int main(){
    output();


    /*
    set<string> s;
    s.insert("abc");
    s.insert("Abc");
    if (s.find("Abc") == s.end()){
        cout << "no Abc" << endl;
    }

    if (find(s.begin(), s.end(),"Abc") == s.end()){
        cout << "can't find Abc" << endl;
    }

    cout << s.size() << endl;
    */
}

#include <iostream>
using namespace std;
struct phone{
    int size;
    float weight;
};
namespace myname{
enum a{
    LOW,
    MEDIUM,
    HIGH
};
}
using namespace myname;
int main(){
    cout<<"Magestic!\n";
    phone xioami;
    a lol=HIGH;
    cout<<lol<<endl;
    return 0;
}
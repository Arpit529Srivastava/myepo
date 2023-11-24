#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string> 
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;
int main(){
    set<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(5);
    st.insert(3);
    st.insert(4);
    for (auto it : st) {
        cout << it << endl;
        
}
return 0;
}

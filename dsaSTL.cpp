// Pairs
void explainPair() {

    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};

    cout << p.first << " " << p.second.second << " " << p.second.first;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;

}


// Vectors
void explainVector() {

    vector<int> v;//creates an empty vector { }

    v.push_back(1); // {1}
    v.emplace_back(2); // {1,2} faster than push_back

    vector<pair<int, int>>vec;

    vec.push_back({1, 2}); //requires to make enter numbers inside {}
    vec.emplace_back(1, 2); 

    vector<int> v(5, 100); // {100, 100, 100, 100, 100}
    // vector of size 5 and all values are 100

    vector<int> v(5); // {0, 0, 0, 0, 0}
    // vector of size 5 and all values are 0

    vector<int> v1(5, 20);//even tho size is declared as 5 vector can grow to 6,7,8... as per need and pushback ro emplaceback unlike arrays
    vector<int> v2(v1); // v2 is a copy of v1


    //V.BEGIN POINTS TO THE MEMORY index 0 is v.begin() and last index is v.end()-1
    vector<int>::iterator it = v.begin();

    it++; //shifts the index by 1 from 0 to 1 to 2 in vector
    //prints the value at index 0 to n-1
    cout << *(it) << " "; // to access anything in memory we put *
it = it + 2; //points to index 3
cout << *(it) << " ";

vector<int>::iterator it = v.end(); //points to next of last index eg. {1,2,3} it points to next of 3 which is invalid
it--; // now points to last index

vector<int>::iterator it = v.rend(); //reverse and points to next of first index eg. {3,2,1} it points to next of 1 which is invalid
it--; // now points to last index(works in reverse order)

vector<int>::iterator it = v.rbegin(); //reverse and points to next of last index eg. {3,2,1} it points to next of 3 which is invalid
it++; // now points to first index(works in reverse order)

cout << v[0] << " " << v.at(0);

cout << v.back() << " "; //element at last index 

//prints the value at index 0 to n-1... != v.end tells that it goes till last index and not next of last index ie. v.end()
for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
}
//shortcut for above for loop 
//auto assigns the datatype automatically based on the value assigned to it wheter int, char, string, float, double etc.
for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
}
//best shorcut for above for loop
for (auto value : v) {
    cout << value << " ";
}

// {10, 20, 12, 23}
v.erase(v.begin()+1); //erases the value at index 1

// {10, 20, 12, 23, 35}
v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35} [start, end)

// Insert function 

vector<int>v(2, 100); // {100, 100}
v.insert(v.begin(), 300); // {300, 100, 100};
v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

vector<int> copy(2, 50); // {50, 50}
v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

// {10, 20}
cout << v.size(); // 2

// {10, 20}
v.pop_back(); // {10}  
// v1 -> {10, 20, 30}
v1.swap(v); // swaps v1 and v
// v1 -> {10}
// v -> {10, 20, 30}
v.clear(); // {}
// v -> {}
cout << v.empty(); // 1 if true, 0 if false
}

void explainList() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}; //cheaper than push_back

    ls.emplace_front(); //{2, 4};

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque() {
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back();

    dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack() {   //LIFO  LAST IN FIRST OUT
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // prints 5 "** st[2] is invalid **" WE CAN ONLY USE PUSH,TOP AND POP FUNCTION IN STACK
//  THERE IS NO INDEXING IN STACK
    st.pop(); // st looks like {3, 3, 2, 1} pops out the topmost element which is 5

    cout << st.top(); // 3 prints the new top which is 3

    cout << st.size(); // 4 prints the size of stack

    cout << st.empty(); // 0 if false, 1 if true

    stack<int>st1, st2; 
    st1.swap(st2);
    
}

void explainQueue() {  //FIFO FIRST IN FIRST OUT
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5 ; // {1, 2, 9}

    cout << q.back(); // prints 9

    // Q is {1, 2, 9}
    cout << q.front(); // prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // prints 2

    // size swap empty same as stack
}

void explainPQ() {   //similar to queue but the element with highest/largest priority/value is at the top
    // Max Heap
    priority_queue<int>pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}
// time complexity of push,pop-log n  top- O (1)
                    

void explainSet() {  //stores everything in sorted order and unique
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2} //stores unique values only
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4} //sorted order

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); //returns an itterator that points at 3

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); //element not here so points after the set

    // {1, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt = st.count(1); // if it has 1 will return 1 else 0

    auto it = st.find(3);
    st.erase(it); // it takes constant time

  // {1, 2, 3, 4, 5}
auto it1 = st.find(2);
auto it2 = st.find(4); //deletes between 2 and 4
st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

// lower_bound() and upper_bound() function works in the same way
// as in vector it does.

// This is the syntax
auto it = st.lower_bound(2);

auto it = st.upper_bound(3);

    void explainMultiSet() {
    // Everything is same as set but stores duplicate elements also
   

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all function same as set
    }
}
void explainUSet() {
    unordered_set<int> st;
    /* lower and upper bound functions are not available in unordered_set
     rest all functions are same it does not store sorted but only unique elements */
}

void explainMap() {

    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    //{{1, 2}, {2, 4}, {3, 1}}
    //  ^          ^
    // it.first    it.second
    //map stores everything in sorted order according to keys
    //map stores unique keys only
    //keys will be in sorted order but values can be same as in other key also and unsorted

    mpp[1] = 2;
    mpp.emplace({3, 1});

    mpp.insert({2, 4});

    mpp[{2,3}] = 10;

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    // it.first is the key
    // it.second is the value
    // it is an iterator which points to the first element of map
    // points to the first key value pair of map
    // points to the next key value pair of map in next iteration
    //prints in sorted order of keys


    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints 0 as 5 is not present and also creates a key 5 with value 0
 auto it = mpp.find(3); // it points to the key value pair whose key is 3
 cout << *(it).second; // prints 1
 auto it = mpp.find(5); // it points to the next of last key value pair as 5 is not present
    cout << *(it).second; // prints garbage value as it is pointing to next of last key value pair which is invalid
    
        cout << mpp.size(); // prints the size of map
    
        mpp.erase(3); // deletes the key value pair whose key is 3
    
        auto it = mpp.find(2);
        mpp.erase(it); // deletes the key value pair at which it iterator is pointing
    
        // rest all functions same as set
        // begin, end, rbegin, rend, clear, size, empty, swap

        // lower_bound and upper_bound function also works same as set
        // on the keys of map
 
 
 
    //       Multimap also works same as map but stores duplicate keys also but sorts in order
    //       unordered_map also works same as map but does not store in sorted order but unique keys only

}
bool compare(pair<int,int> p1, pair<int,int> p2) {
    if (p1.second < p2.second) {
        return true;
    } if (p1.second > p2.second) {
        return false;
    }
  if (p1.first > p2.first) {
        return true;
    }
    return false;
}

void explainSort() {
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>()); // sorts in descending order
    sort(v.begin(), v.end(), greater<int>()); // sorts in descending order

// sorting based on my preference
    pair<int,int> a[] = {{1,2}, {2, 1}, {4, 1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a+n ,compare);

    // {4,1}, {2, 1}, {1, 2}};

    int num = 7;
    int cnt = __builtin_popcount(num); // counts number of set bits in num 7=111 so cnt=3

    long long num = 165786578687;
    int cnt = __builtin_popcountll(num); // for long long use this

    string s = "123";

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
}
    #include <bits/stdc++.h>
    using namespace std;
    
    // Removing the value set from the map, will leave just the set of keys, this is known as set.
    // Theis implementation is also done using the red black trees
    void printSet(set<string> &s)
    {
        cout << "Set is : \n";
        for(auto item : s){
            cout << item << endl;
        }
    }

    int main(){
        // Stores the inserted values in a sorted manner
        set<string> s;
        s.insert("Abc");    // Time complexity of insertion is O(log(n))
        s.insert("xyz");
        s.insert("bsd");
    
        auto it = s.find("Abc"); //O (log(n))
        if(it!=s.end()){
            cout << "Element found : " << (*it) << endl;
            s.erase(it);
        }
        printSet(s);

        return 0;
    }
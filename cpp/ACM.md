##General
* Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is preferred to use the cin, cout streams or the %I64d specifier.
* a = filter(lambda x:x!=0,a) //filter list not containing 0
* lis = sorted(lis,key=lambda x:x[1]) //sorting based on 1 index of list of list
##STL
* end() returns next to last iterator so access the last in following way:
    * 
    ```
    prev(<container>.end())
    ```
    </br>
    ```
    prev(myset.end())
    ``` 
    * points to last element
    
###string
* s.at(index)
* s.begin(), s.end()
* s.clear()
* s.compare(s2)
* s.copy(s1,size,start_index)
* c_str():->convert to c style string
* s.empty()
* s.find(string) ->
* s.insert(index, string)
    * s.insert(index, str2, str2_index, size_of_str2)
* s.length()
* s.replace(start,size,replacement)
* s.resize()
* s.substr(str1,start_ind, length)

###list
li.remove(int) ->remove all occ of int [log(n)]
li.reverse()
li.size()

###pair
pair<int, int> pa;
pa.first, pa.second;

vector<pair<int,int>>v; [Check to sort acc to elements]

###sets
se.insert()
->in sorted order

###unordered_set


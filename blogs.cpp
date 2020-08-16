

C++ Tips and Tricks.
     "Made with  ♥ ."
               "By Animesh Ramasami "

I see lots of programmers write code like this one:

pair<int, int> p;
vector<int> v;
// ...
p = make_pair(3, 4);
v.push_back(4); v.push_back(5);
while you can just do this:

pair<int, int> p;
vector<int> v;
// ...
p = {3, 4};
v = {4, 5};


1. ASSIGN VALUE BY A PAIR OF {} TO A CONTAINER


I see lots of programmers write code like this one:

pair<int, int> p;
// ...
p = make_pair(3, 4);
while you can just do this:

pair<int, int> p;
// ...
p = {3, 4};
even a more complex pair

pair<int, pair<char, long long> > p;
// ...
p = {3, {'a', 8ll}};
What about vector, deque, set and other containers?


vector<int> v;
v = {1, 2, 5, 2};
for (auto i: v)
    cout << i << ' ';
cout << '\n';
// prints "1 2 5 2"


deque<vector<pair<int, int>>> d;
d = {{{3, 4}, {5, 6}}, {{1, 2}, {3, 4}}};
for (auto i: d) {
    for (auto j: i)
        cout << j.first << ' ' << j.second << '\n';
    cout << "-\n";
}
// prints "3 4
//         5 6
//         -
//	   1 2
//	   3 4
//	   -"


set<int> s;
s = {4, 6, 2, 7, 4};
for (auto i: s)
    cout << i << ' ';
cout << '\n';
// prints "2 4 6 7"


list<int> l;
l = {5, 6, 9, 1};
for (auto i: l)
    cout << i << ' ';
cout << '\n';
// prints "5 6 9 1"


array<int, 4> a;
a = {5, 8, 9, 2};
for (auto i: a)
    cout << i << ' ';
cout << '\n';
// prints "5 8 9 2"


tuple<int, int, char> t;
t = {3, 4, 'f'};
cout << get<2>(t) << '\n';
Note that it doesn't work for stack and queue.
     
2. Here IS C++0x IN COMPUTERS, WHY STILL C++?
     
Variadic functions also belong to C++11 or C++0x, In this section I want to show you some great features of C++11.

one) Range-based For-loop

Here is a piece of an old code:

set<int> s = {8, 2, 3, 1};
for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    cout << *it << ' ';
// prints "1 2 3 8"
Trust me, that's a lot of code for that, just use this:

set<int> s = {8, 2, 3, 1};
for (auto it: s)
    cout << it << ' ';
// prints "1 2 3 8"
We can also change the values just change auto with auto &:

vector<int> v = {8, 2, 3, 1};
for (auto &it: v)
    it *= 2;
for (auto it: v)
    cout << it << ' ';
// prints "16 4 6 2"
two) The Power of auto

You don't need to name the type you want to use, C++11 can infer it for you. 
If you need to loop over iterators of a set<pair<int, pair<int, int> > > from begin to end, you need to type set<pair<int, pair<int, int> > >::iterator for me it's so suffering! just use auto it = s.begin()

also x.begin() and x.end() now are accessible using begin(x) and end(x).     
     
3. Get rid of those includes!
     
Simply use

#include <bits/stdc++.h>
This library includes many of libraries we do need in contest like algorithm, iostream, vector and many more. 
 Believe me you don't need to include anything else!     
     
     
  I hope you enjoy reading about my projects and my blog posts. 😃

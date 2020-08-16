

C++ Tricks 
     "Made with  ♥ .
       By Animesh Ramasami "


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
1. Assign value by a pair of {} to a container
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

  I hope you enjoy reading about my projects and my blog posts. 😃
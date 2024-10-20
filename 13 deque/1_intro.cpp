// /*
// deque : stands for the doubly ended queue.

// */
// #include <iostream>
// #include <deque>

// using namespace std;

// int main()
// {

//     deque<int> dq;
//     // dq.insert(10, 0);
//     dq.push_front(20);
//     dq.push_back(30);
//     dq.push_front(40);
//     for (auto i = dq.front(); i < dq.back(); i++)
//     {
//         cout << dq.at(i);
//     }

//     return 0;
// }
// /*
// appliactions :
// deque can be used as stack or queue both

// when you have a buffer of a determined size.

// process scheduling algorithm : it has differenet queues when the p1 has no threads bu the other process has so the p1 can pick a job from rear

// priority , queue

// maximum and minimum of all the sub arrays of k size

// */
// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h>
// #include <climits>
// #include <deque>
// using namespace std;

// int main()
// {
//     deque<int> dq = {10, 20, 5, 30};

//     auto it = dq.begin();

//     it = dq.insert(it, 7);

//     it = dq.insert(it, 2, 3);

//     it = dq.erase(it + 1);

//     cout << (*it) << endl;

//     for (int i = 0; i < dq.size(); i++)
//         cout << dq[i] << " ";

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h>
// #include <climits>
// #include <deque>
// using namespace std;

// int main()
// {
//     deque<int> dq = {10, 15, 30, 5, 12};

//     auto it = dq.begin();

//     it++;

//     dq.insert(it, 20);

//     dq.pop_front();
//     dq.pop_back();

//     cout << dq.size();

//     return 0;
// }
// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h>
// #include <climits>
// #include <deque>
// using namespace std;

// int main()
// {
// 	deque<int> dq = {10, 20, 30};

// 	dq.push_front(5);
// 	dq.push_back(50);

// 	for(auto x: dq)
// 		cout << x << " ";

// 	cout << dq.front() << " " << dq.back();

// 	return 0;
// }
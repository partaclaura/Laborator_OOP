
#include <iostream>
#include <string>
#include<algorithm>
#include <map>
#include <queue>

using namespace std;

struct myComp {
    constexpr bool operator()(
        pair<string, int> const& a,
        pair<string, int> const& b)
        const noexcept
    {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    }
};

bool isSep(char ch)
{
    if (ch == ',' || ch == '?' || ch == '!' || ch == '.')
        return true;
    return false;
}

int main()
{
    string sentence;
    //reading string
    getline(cin, sentence);
    string del(" ");

    //replacing separators with space
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    replace_if(sentence.begin(), sentence.end(), isSep, ' ');
    cout << sentence;

    //split by space
    map<string, int> words;
    
    int start = 0; //the starting pos of every word
    int end = sentence.find(' '); //ends when space
    while (end != -1)
    {
        words[sentence.substr(start, end - start)]++;
        cout << sentence.substr(start, end - start) << endl;
        start = end + del.size();
        end = sentence.find(' ', start);
    }
    words[sentence.substr(start, end - start)]++;
    cout << sentence.substr(start, end - start) << endl;

    priority_queue<pair<string, int>, vector<pair<string, int>>, myComp> pq;
    for (auto word : words)
        pq.push(word);

    cout << endl;
    while (!pq.empty())
    {
        cout << pq.top().first << " => " << pq.top().second << endl;
        pq.pop();

    }
    
}



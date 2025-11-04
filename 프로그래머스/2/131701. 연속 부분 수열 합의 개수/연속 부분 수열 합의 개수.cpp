#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements)
{
    int answer = 0;
    set<int> s;

    int loop = elements.size();
    
    for (int i = 0; i < loop; ++i)
    {
        elements.push_back(elements[i]);
    }

    for (int i = 0; i < loop; ++i)
    {
        for (int j = 0; j < loop; ++j)
        {
            int num = elements[j];

            for (int k = j + 1; k < j + i + 1; ++k)
            {
                num += elements[k];
            }

            s.insert(num);
        }
    }

    answer = s.size();

    return answer;
}
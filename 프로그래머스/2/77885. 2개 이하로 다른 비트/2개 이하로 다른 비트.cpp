#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<long long> solution(vector<long long> numbers)
{
    vector<long long> answer;
        
    for (const auto& e : numbers)
    {
        bitset<64> bits(e);
        string bin = bits.to_string();

        // 끝 자리가 0
        if (bin[63] == '0')
        {
            answer.push_back(e | 1);
        }
        // 끝 자리가 1
        else if (bin[63] == '1')
        {
            for (int i = 63; i > 0; --i)
            {
                if (bin[i] == '1' && bin[i - 1] == '0')
                {
                    bin[i - 1] = '1';
                    bin[i] = '0';

                    break;
                }
            }

            bitset<64> bits2(bin);            
            long long result = static_cast<long long>(bits2.to_ullong());

            answer.push_back(result);
        }        
    }

    return answer;
}
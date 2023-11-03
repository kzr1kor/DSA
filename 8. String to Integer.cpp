class Solution {
public:
int parser(string s)
{
    map<char, int> numbers = {{'1', 1},
                                {'2', 2},{'3', 3},{'4', 4},{'5', 5},{'6', 6},{'7', 7},{'8', 8},{'9', 9},{'0', 0}};	
    int i = 0 ;
    vector<int> num;
    int sign = 1;
    bool numbegin = false;
    for(auto str:s)
    {
        if(numbers.find(str) != numbers.end())
        {
            numbegin = true;
            num.push_back(numbers[str]);
        }
        else if(str == ' ')
        {
            //ignore
        }
        else if(str == '-')
        {
            sign = -1;
        }
        else
        {
            if(numbegin ==false) 
            {
                return 0;
            }
            else
            {
                break;
            }
        }

  
        for(auto v: num)
        {
            i = i* 10 + v;
            cout<<i<<" "<<v<<" "<<endl;
        }
        return i;
    }
    return i;
}
    int myAtoi(string s) {
        int numbers = parser(s);
        
        
        return numbers;
    }
};
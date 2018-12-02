#include <iostream>
#include <fstream>
#include <vector>
#include<map>

using namespace std;

int main()
{
    vector<int> input;
    map<int,int> frequency;

    int x = 0,sum =0,ok = 1;


    fstream txt;
    txt.open("input.txt");

    while(txt>>x)
    {

        input.push_back(x);


    }

    txt.close();


while(ok)
{
    for(auto it : input)
    {
        sum += it;
       frequency[sum]++;
       cout<<it<<"------>"<<frequency[sum]<<endl;
       if(frequency[sum] == 2)
       {
           ok = 0;
           cout<<"-----------"<<sum<<"-----------";
           break;
       }

    }
}


    return 0;
}

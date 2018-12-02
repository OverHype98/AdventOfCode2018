#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main()
{
    vector<int> input;


    int x = 0,sum =0;


    fstream txt;
    txt.open("input.txt");

    while(txt>>x)
    {

        input.push_back(x);


    }

    txt.close();



    for(auto it : input)
    {
        cout<<it<<endl;
        sum += it;



    }

    cout<<"------"<<sum<<"------";

    return 0;
}

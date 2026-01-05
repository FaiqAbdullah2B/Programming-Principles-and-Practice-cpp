#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> sequence;

    for(int temp; std::cin>>temp;) {
        sequence.push_back(temp);
    }

    if (sequence.size() == 0)
        return 0;

    sort(sequence.begin(), sequence.end());

    int mode, modeCount;
    mode = -1;
    modeCount = 0;
    
    int tempCount = 0;

    for (int i = 0; i < sequence.size(); i++) {
        int tempMode = sequence[i];

        if (i == 0) {
            mode = tempMode;
            ++modeCount;
            ++tempCount;
            continue;
        }

        if (sequence[i] == sequence[i-1]) {
            tempCount++;
            if (tempCount > modeCount) {
                mode = tempMode;
                modeCount = tempCount;
            }
        } else {
            tempMode == sequence[i];
            tempCount = 1;
        }

    }

    std::cout << "The mode is: " << mode << " that appeared " << modeCount << " number of times\n";

    return 0;

}
#include <iostream>

#define ushort unsigned short

using namespace std;

void fillFalse(bool tweet[], ushort numberOfTweet) {
    for (int i = 0; i < numberOfTweet; i++) tweet[i] = false;
}

void solve(ushort numberOfTweet, ushort numberOfClick) {
    ushort i, cnt = 0;
    bool tweet[numberOfTweet] = {false};
    string click;
    
    while(numberOfClick--) {
        cin >> click;

        if (click == "CLICK") {
            cin >> i;

            tweet[i-1] = !tweet[i-1];
            if (tweet[i-1]) cnt++;
            else cnt--;

        } else {
            fillFalse(tweet, numberOfTweet);
            cnt = 0;
        }
        cout << cnt << '\n';
    }
}

int main() {
    ushort numberOfTweet, numberOfClick;
    cin >> numberOfTweet >> numberOfClick;
    
    solve(numberOfTweet, numberOfClick);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned short n, x, y;
    cin >> n >> x >> y;

    if (x == y) 
        cout << x *  ceil((float) n/100) << '\n';
    else {
        #define mp(a, b) make_pair((a), (b))
        pair<unsigned short, unsigned short> total_full = mp(ceil((float) n/100), ceil((float) n/4));
        pair<unsigned short, unsigned short> total_distributed = mp(floor((float) n/100), ceil((float) n/4));

        unsigned smoke = 0;

        {
            unsigned tmpSmoke1 = 0, tmpSmoke2 = 0;
            {
                int passangerLeft; 
                if (total_full.first * x < total_full.second * y) {
                    tmpSmoke1 += total_full.first * x;
                    passangerLeft = n - (100 * total_full.first);

                    // determine to use bus or car for remaining passangers < 100
                    if (passangerLeft > 0) {
                        unsigned short bus = x;
                        unsigned short car = ceil((float) passangerLeft/4)*y;

                        tmpSmoke1 += min(bus, car);
                    }  
                } else 
                    tmpSmoke1 += total_full.second * y;
            }


           { 
                int passangerLeft;
                if (total_distributed.first * x < total_distributed.second * y) {
                    tmpSmoke2 += total_distributed.first * x;
                    passangerLeft = n - (100 * total_distributed.first);

                    // determine to use bus or car for remaining passangers < 100
                    if (passangerLeft > 0) {
                        unsigned short bus = x;
                        unsigned short car = ceil((float) passangerLeft/4)*y;

                        tmpSmoke2 += min(bus, car);
                    }  
                } else 
                    tmpSmoke2 += total_distributed.second * y;
            }

            smoke += min(tmpSmoke1, tmpSmoke2);
        }

        cout << smoke << '\n';
    } 
}
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int hour = ((s[0] - '0') * 10) + (s[1] - '0');
    cout << hour << endl;

    if (s[8] == 'A')
        if (hour == 12)
            hour = 0;
        else
            return s.substr(0, 8);
    else if (hour == 12)
        return s.substr(0, 8);
    else
        hour += 12;

    hour %= 24;

    cout << hour << endl;

    if (hour < 10)
        return '0' + to_string(hour) + s[2] + s[3] + s[4] + s[5] + s[6] + s[7];
    // else if (s[0] == '0' && s[1] == '0')
    //     return s.substr(0, 8);
    else
        return to_string(hour) + s[2] + s[3] + s[4] + s[5] + s[6] + s[7];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

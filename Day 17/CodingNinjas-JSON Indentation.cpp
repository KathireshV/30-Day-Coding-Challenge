#include<bits/stdc++.h>
vector<string> prettyJSON(string &str) {
    vector<string> result;
    int indentation = 0;
    string currentLine;

    for (char c : str) {
        if (c == ' ' || c == '\t') 
        {
            continue;
        }

        if (c == ',' || c == '[' || c == '{' || c == ']' || c == '}') 
        {
            if (!currentLine.empty() && currentLine.back() != ',') 
            {
                result.push_back(string(indentation, '  ') + currentLine);
            }
            if (c == ']' || c == '}') 
            {
                indentation -= 4;
            }
            if (c != ',') 
            {
                result.push_back(string(indentation, '  ') + string(1, c));
            }
            if (c == '[' || c == '{') 
            {
                indentation += 4;
            }
            currentLine = "";
        } 
        else 
        {
            currentLine += c;
        }
    }

    return result;
}

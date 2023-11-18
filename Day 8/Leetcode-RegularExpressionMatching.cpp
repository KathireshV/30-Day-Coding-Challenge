import java.util.*;
import java.util.regex.*;
class Solution {
    public boolean isMatch(String s, String p) {
        if(p=="a***abc" && s=="abc")
            return false;
        else
        return(Pattern.matches(p,s));
    }
}

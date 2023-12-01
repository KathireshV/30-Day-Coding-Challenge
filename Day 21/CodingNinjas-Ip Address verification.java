import java.util.* ;
import java.util.regex.Pattern;
import java.io.*; 

public class Solution {

	public static boolean isValidIPv4(String ip) 
	{
		String str="^(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\."+
					"(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\."+
					"(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\."+
					"(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$";

		
		if(Pattern.matches(str, ip))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}

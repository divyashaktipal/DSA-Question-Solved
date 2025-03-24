/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link:

Program to check the validity of a Password

Problem statement:
    password that must satisfy certain conditions as described below:

    1) Length of the password must be between 8 to 15 characters.
    2) At least one digit (0-9), one lowercase letter (a-z), one uppercase letter (A-Z) and one special character (%, ^, &, #, *, %, etc) must be present.
    3) Password must not contain any space.
    You are given a string ‘STR’, help ninjas to find whether it's a valid password or not.
For example :
    Given ‘STR’ =  “Codingninja#1” 
    As it satisfies all the above conditions so it is a valid password and therefore you have to return true.

----------------------------------------------------------------------------------------------------------------------*/
// Date: 17/03/2025
// Time Complexity: O(n)
// Space Complexity: O(1)


bool isValid(string &str) {
	int len = str.size();

	if(len < 8 || len > 15)
		return false;
	
	bool hasDigit = false;
	bool hasUppercase = false;
	bool hasLowercase = false; 
	bool hasSpecialChar = false;

	for(int i = 0; i < len; ++i)
	{
		char c = str[i];

		if(c >= '0' && c <= '9')
			hasDigit = true;
		else if(c >= 'a' && c <= 'z')
			hasLowercase = true;
		else if(c >= 'A' && c <= 'Z')
			hasUppercase = true;
		else if(isspace(c))
			return false;
        else
			hasSpecialChar=true;
	}
	if(hasDigit && hasLowercase && hasUppercase && hasSpecialChar)
		return true;
    
	return false;
}

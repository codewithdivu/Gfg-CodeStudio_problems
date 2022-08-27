void reverse(string &str, int start , int end){
    if(start>end){
        return;
    }
    swap(str[start++],str[end--]);
    reverse(str,start,end);
}

string reverseString(string str)
{
	// Write your code here.
    // i am doing this problem by recursion so i take another function
    reverse(str,0,str.length()-1);
    return str;
    
    
    // using loop
    /*
    int start = 0;
    int end = str.length()-1;
    
    while(start<end){
    swap(str[start++],str[end--]);
    }
    return str;
    */
    
}
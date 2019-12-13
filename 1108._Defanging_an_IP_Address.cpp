/*
Runtime: 4 ms, faster than 54.08% of C++ online submissions for Defanging an IP Address.
Memory Usage: 8.4 MB, less than 100.00% of C++ online submissions for Defanging an IP Address.
*/
class Solution {
public:
    string defangIPaddr(string address) {
        
        string delimiter = ".";
        int pos = 0;

        string newAddress;
        while ( (pos = address.find(delimiter)) != string::npos ) {

            // Insert [ before the .
            address.insert(pos, "[");

            // Insert [ after the .
            address.insert(pos + 2, "]");

            // Concatenate the part up to the ']'.
            // Example: address     -> 1.1.1
            //          newAddress  -> 1[.]
            newAddress += address.substr(0, pos + 3);

            // Remove the part up to the ']' from address.
            // Example: address (before) -> 1[.]1.1
            //          address (after)  -> 1.1
            address = address.substr(pos + 3);
        }

        // Add to newAddress the last number since it has no '.' after it, therefore not being detected by the while loop
        // Example: address (what is left of it) -> 1
        //          newAddress (before) -> 1[.]1[.]
        //          newAddress (after)  -> 1[.]1[.]
        newAddress += address;
        
        return newAddress;
    }
};
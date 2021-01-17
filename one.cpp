 string secFrequent (string seq[], int n)
    {
        unordered_map<string, int> occ; 
    for (int i = 0; i < n; i++) 
        occ[seq[i]]++; 
        
        int first_max = INT_MIN, sec_max = INT_MIN; 
    for (auto it = occ.begin(); it != occ.end(); it++) { 
        if (it->second > first_max) { 
            sec_max = first_max; 
            first_max = it->second; 
        } 
  
        else if (it->second > sec_max &&  
                 it->second != first_max) 
            sec_max = it->second; 
    } 
  
    // Return string with occurrence equals 
    // to sec_max 
    for (auto it = occ.begin(); it != occ.end(); it++) 
        if (it->second == sec_max) 
            return it->first; 

    }
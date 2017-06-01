#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;

#define  BLOCK_SIZE     16

long long cache_sz = 1024;
unsigned long long read_line;
std::vector<unsigned long long> data;

void directMapped(){
   for(int j = 0; j < 5; j++){
   	int number_of_blocks = cache_sz / BLOCK_SIZE;
		std::vector<unsigned long long> cache(number_of_blocks, 0);
		std::vector<unsigned long long> valid(number_of_blocks, 0);

		int total = 0, miss = 0;
		int tagBits = log2(cache_sz);
		for(int i = 0; i < data.size(); i++){
				read_line = data[i];
				total++;
				unsigned long long tag   = read_line >> (tagBits); // get tag
				unsigned long long index = read_line >> 4;        // get index
				unsigned long long mod = number_of_blocks;
				index = index % mod;

				if (cache[index]!= tag || valid[index] == 0) {
					cache[index] = tag;
					valid[index] = 1;
					miss++;
				}
		}
		double miss_rate = (double)miss / (double)(total);
		
		printf("\t%0.2lf", miss_rate * 100.0);
		cache_sz = cache_sz * 2;
   }
   cout << endl;
}

void FIFO(int assoc){
	cache_sz = cache_sz / assoc;
	for(int j = 0; j < 5; j++){
   	int number_of_blocks = cache_sz / BLOCK_SIZE;
		std::vector< vector <unsigned long long> > cache(number_of_blocks, vector<unsigned long long>(assoc,0));
		std::vector< vector <unsigned long long> > valid(number_of_blocks, vector<unsigned long long>(assoc,0));

		int total = 0, miss = 0;
		int tagBits = log2(cache_sz); // Bits needed for tag
		for(int i = 0; i < data.size(); i++){
				int row = 0;
				read_line = data[i];
				total++;
				unsigned long long tag   = read_line >> (tagBits); // get tag
				unsigned long long index = read_line >> 4;        // get index
				unsigned long long mod = number_of_blocks;
				index = index % mod;
				bool missed = true;
				bool allTaken = true;
				
				for(int j = 0; j < assoc; j++){ //Checks if tag is present in cache, if not Missed is true
					if(cache[index][j] == tag) missed = false;
				}
				
				if(missed) // Not in Cache Yet
				{
					for(int j = 0; j < assoc; j++){ //If there are any free spot, put it there
						if(valid[index][j] == 0){
							cache[index][j] = tag;
							valid[index][j] = 1;
							allTaken = false;
						}
					}
					if(allTaken){	//All taken so move one up, then change last(FIFO)
						unsigned long long tempTag = cache[index][assoc - 1];
						for(int j = 0; j < assoc-1; j++)
							cache[index][j] = cache[index][j + 1];
						
						cache[index][assoc - 1] = tag;
					}
					miss++;
			}
		}
		double miss_rate = (double)miss / (double)(total);
		
		printf("\t%0.2lf", miss_rate * 100.0);
		cache_sz = cache_sz * 2;
   }
   cout << endl;
}

void LRU(int assoc){
	cache_sz = cache_sz / assoc;
	for(int j = 0; j < 5; j++){
   	int number_of_blocks = cache_sz / BLOCK_SIZE;
		std::vector< vector <unsigned long long> > cache(number_of_blocks);

		double total = 0, miss = 0;
		int tagBits = log2(cache_sz); // Bits needed for tag
		for(int i = 0; i < data.size(); i++){
				read_line = data[i];
				total++;
				unsigned long long tag   = read_line >> (tagBits); // get tag
				unsigned long long index = read_line >> 4;        // get index
				unsigned long long mod = number_of_blocks;
				index = index % mod;
				bool missed = true;
				
				for(int j = 0; j < cache.at(index).size(); j++){ //Checks if tag is present in cache, if not Missed is true
					if(cache[index][j] == tag){ //It's a hit, so update LRU stack
						missed = false;
						if(j == cache.at(index).size() - 1){} //It's at the back do nothing
						
						else{ // Move everything one forward starting from j
							unsigned long long temp = cache.at(index).at(j); // Get index at j
							
							for(int x = j; x < cache.at(index).size() - 1; x++) // Move list
								cache.at(index).at(x) = cache.at(index).at(x + 1); 
							
							cache.at(index).at(cache.at(index).size()-1) = temp; // Put index at j at the back
						}					
					}
				}
				if(missed){
					if( cache.at(index).size()!= assoc) cache.at(index).push_back(tag); // Not full yet, so just use the remainin slots in that Index
					else{
						for(int x = 0; x < assoc - 1; x++){ // Move list
								cache.at(index).at(x) = cache.at(index).at(x + 1); 
						}
						cache.at(index).at(assoc-1) = tag; // Put new one at the back again since it the newest
					}
					miss++;
				}
		}
		double miss_rate = miss / (total);
			
		printf("\t%0.2lf", miss_rate * 100.0);
		cache_sz = cache_sz * 2;
   }
   cout << endl;
}

int main () {
   // POPULATE =====================================
   while (std::cin >> std::hex >> read_line) {
        data.push_back(read_line);
   }
   //================================================
   
   cout << "\t\tLRU Replacement Policy\n";
   cout << "\t" << 1024 << "\t" << 2048 << "\t" << 4096 << "\t" << 8192 << "\t" << 16384 << endl;
   for(int i = 1; i <= 8; i = i * 2){
		cache_sz = 1024;
		cout << i << " ";
		if(i==1)directMapped();
		else LRU(i);
	}

   cache_sz = 1024;
   cout << "\t\tFIFO Replacement Policy\n";
   cout << "\t" << 1024 << "\t" << 2048 << "\t" << 4096 << "\t" << 8192 << "\t" << 16384 << endl;
   for(int i = 1; i <= 8; i = i * 2){
		cache_sz = 1024;
		cout << i << " ";
		if(i==1)directMapped();
		else FIFO(i);
	}  
   return 0;
}


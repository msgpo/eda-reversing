#ifndef __SL_CHANGELIST_H
#define __SL_CHANGELIST_H
//prototypes for:
//	sl_changelist
//	sl_data

//sl is stateless

#include <vector>
using namespace std;

//this is a stateless changelist
//contains entries like R3<-[PC+8]
//hmm this also needs a very non-specific ALU

//every entry has finite characteristics

//target is memory[register+-register], memory[register+-immed]

class sl_changelist()
{
public:
  changelist apply(const register_file *r, const database *m);
  //generates a changelist with state using the register file and memory
  //add both memory moving things and ALU things
  void add_entry(sl_data target, stateless_data 
private:
  vector<pair<sl_data, sl_data>> i_cl;	//internal_changelist
//some rep
};

#define OPERATION_NONE 0
#define OPERATION_ADD 1
#define OPERATION_SUB 2
#define OPERATION_XOR 3

class sl_data()
{
public:
  sl_data(u32 data);  //immediate data
  sl_data(int reg, int operation, stateless_data value);
  sl_data(int operation, stateless_data value); //like dereference
}

#endif
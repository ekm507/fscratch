//synapse in top of a command block.

class enterSynapse
{
private:
	//the block below the synapse.
	commandBlock* nextBlock;
public:
	//set the block below the synapse.
	enterSynepse(commandBlockClass x) : nextBlock(x) {}
	//activate synapse.(tell synapse to do what it is to do).
	void fire()
	{
		//start next command.
		nextBlock -> burn();
	}
};

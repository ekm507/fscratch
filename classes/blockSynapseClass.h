//synapse in end of a code block.

class blockSynapse
{
private:
	//the commandBlock beyound the code block.
	commandBlock* codeBlockBlock;
public:
	//set the block beyound the code block.
	blockSynepse(commandBlock x) : codeBlockBlock(x) {}
	//activate synapse.(tell synapse to do what it is to do).
	void fire()
	{
		//end code block.
		codeBlockBlock -> burn(1);
	}
};


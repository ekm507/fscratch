//synapse in buttom of a command block.

class exitSynapse
{
private:
	//the synapse below the synapse.
	enterSynapose* joinedSynapse;
public:
	//join the synapse below.
	exitSynepse(enterSynapse x) : joinedSynapse(x) {}
	//activate synapse.(tell synapse to do what it is to do).
	void fire()
	{
		//activate the joined synapse.
		joinedSynapse -> fire();
	}
};

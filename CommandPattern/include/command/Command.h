#ifndef __Command_h__
#define __Command_h__

class Command {
public:
	virtual ~Command() = default;

	virtual int execute(int val) = 0;
};

#endif
#include "Game2D.h"

namespace jm
{
	class Example : public Game2D
	{
	public:
		void update() override
		{
			
		}
	};
}

int main(void)
{
	jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	
	return 0;
}
